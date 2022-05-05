//
// Created by Administrator on 2022/3/28.
//
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string removeKdigits(string num, int k) {
    stack<char>s;
    string str;
    s.push(num[0]);
    for(int i = 1; i < num.size(); i++) {
        while(s.empty() == 0 && s.top() > num[i] && k > 0) {
            s.pop();
            k--;
        }
        s.push(num[i]);
    }
    while(s.empty() == 0) {
        str += s.top();
        s.pop();
    }
    reverse(str.begin(), str.end());
    if(k > 0) str = str.substr(0, str.size() - k);
    int i = 0;
    while(i < str.length() && str[i] == '0') i++;
    str = str.substr(i);
    if(str.empty()) str = "0";
    return str;
}

int main() {
    string num = "123454321";
    int k = 1;
    cout << removeKdigits(num, k) << endl;
    return 0;
}
