//
// Created by Administrator on 2022/4/10.
//


#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
    stack<char> t;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') t.push(s[i]);
        else {
            if(t.empty()) return false;
            if((t.top() == '(' && s[i] == ')') || (t.top() == '[' && s[i] == ']') || (t.top() == '{' && s[i] == '}'))
                t.pop();
            else return false;
        }
    }
    if(t.empty()) return true;
    return false;
}


int main() {
    string s = "({)";
    cout << isValid(s);

    return 0;
}