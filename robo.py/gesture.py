import websocket
import json
import socket

ws_url = "ws://192.168.19.14:8080/sensor/connect?type=android.sensor.orientation"

UDPServerSocket = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
param_dict = {"id": 0, "pwmR": 0, "pwmL": 0, "state": 0}
nominal_pwm = 200
max_pwm = 300
gesture_state = 0
#nodemcu ip and port
IP = "192.168.19.143"
PORT = 4210

def on_message(ws, message):
    gesture_state = 1
    pwmL = pwmR = 0
    values = json.loads(message)['values']
    z = int(values[0])
    x = int(values[1])
    y = int(values[2])
    param_dict["pwmL"] = param_dict["pwmR"] = pwmR
    if -60 < y < -15:
        pwmR = pwmL = int(nominal_pwm + (abs(y) - 15) * (max_pwm - nominal_pwm) /45)
        param_dict["pwmL"] = pwmL 
        param_dict["pwmR"] = pwmR
    elif 15 < y < 60:
        pwmL = pwmR = -1 * int(nominal_pwm + (y - 15) * (max_pwm - nominal_pwm)/45)
        param_dict["pwmL"] = pwmL
        param_dict["pwmR"] = pwmR
    if 15 < x < 60:
        pwmR = int(nominal_pwm + (x - 15) * (max_pwm - nominal_pwm) /45)
        pwmL = -pwmR
        param_dict["pwmL"] = pwmL 
        param_dict["pwmR"] = pwmR
    if -60 < x < -15:
        pwmL = int(nominal_pwm + (abs(x) - 15) * (max_pwm - nominal_pwm) /45)
        pwmR = -pwmL
        param_dict["pwmL"] = pwmL 
        param_dict["pwmR"] = pwmR

    print(x, y, z)
    param_bytes = str.encode(json.dumps(param_dict))
    UDPServerSocket.sendto(param_bytes, (IP, PORT))
    
def on_error(ws, error):
    print("error occurred ", error)
    
def on_close(ws, close_code, reason):
    print("closed")
    
def on_open(ws):
    print("connected")

def connect(url):
    ws = websocket.WebSocketApp(url,
                              on_open=on_open,
                              on_message=on_message,
                              on_error=on_error,
                              on_close=on_close)

    ws.run_forever()
 
connect(ws_url) 