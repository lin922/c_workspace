//
// Created by Administrator on 2022/3/18.
//

#include <iostream>
using namespace std;

string convertToTitle(int columnNumber) {
    string s;
    while(columnNumber) {
        int a = (columnNumber-1)%26;
        columnNumber = (columnNumber-1)/26;
        char t = 'A' + a;
        s = t + s;
    }
    return s;
}

int main() {
    cout << convertToTitle(26) << endl;
    cout << convertToTitle(27) << endl;
    cout << convertToTitle(28) << endl;
    cout << convertToTitle(2147483647) << endl;
    return 0;
}

