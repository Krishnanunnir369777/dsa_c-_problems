#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool func1(string s1,string s2){   /// Time Complexity: O(m*log(m) + n*log(n))
    int n=s1.length();
    int m=s2.length();
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1==s2;
    
}

bool func2(string& s1,string& s2){     // Time Complexity: O(m + n),

    // Create a hashmap to store character frequencies
    unordered_map<char, int> charCount;
    
    // Count frequency of each character in string s1
    for(char ch: s1) 
        charCount[ch] += 1;
  
    // Count frequency of each character in string s2
    for(char ch: s2) 
        charCount[ch] -= 1;
  
    // Check if all frequencies are zero
    for (auto& pair : charCount) {
        if (pair.second != 0) {
            return false;
        }
    }
    
    // If all conditions satisfied, they are anagrams
    return true;
}

const int MAX_CHAR=26;

bool func3(string& s1,string& s2){

    vector<int> freq(MAX_CHAR, 0);
    
    // Count frequency of each character in string s1
    for(char ch: s1) 
        freq[ch - 'a']++;
  
    // Count frequency of each character in string s2
    for(char ch: s2) 
        freq[ch - 'a']--;
  
    // Check if all frequencies are zero
    for (int count : freq) {
        if (count != 0) 
            return false;
    }
    
    return true;
}





int main(){
    string s1="geeks";
    string s2="skeeg";
    if(func3(s1,s2)){
        cout<<1;
    }
    else{
        cout<<0;
    }
}