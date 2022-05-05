//
// Created by Administrator on 2022/3/22.
//
#include <iostream>
#include<string>
using namespace std;

bool rotateString(string s, string goal) {
    for(int i = 0; i < s.length(); i++) {
        s = s + s[0];
        s = s.substr(1,s.length()-1);
        if(s == goal) return true;
    }
    return false;
}

int main() {
    string s = "abcde", goal = "abced";
    cout << rotateString(s, goal) << endl;
    return 0;
}


