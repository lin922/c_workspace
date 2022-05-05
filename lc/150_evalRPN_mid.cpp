//
// Created by Administrator on 2022/4/10.
//

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> s;
    int res = 0;
    for(int i = 0; i < tokens.size(); i++) {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
            int num1 = s.top();
            s.pop();
            int num2 = s.top();
            s.pop();
            if (tokens[i] == "+") s.push(num2 + num1);
            if (tokens[i] == "-") s.push(num2 - num1);
            if (tokens[i] == "*") s.push(num2 * num1);
            if (tokens[i] == "/") s.push(num2 / num1);
        } else s.push(stoi(tokens[i]));
    }
        res = s.top();
        s.pop();
        return res;
}


int main() {
    string a[] = {"2","1","+","3","*"};
    vector<string> tokens(a, a + 5);
    cout << evalRPN(tokens);
    return 0;
}