//
// Created by Administrator on 2022/3/18.
//

#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int titleToNumber(string columnTitle) {
    int sum = columnTitle[0]-'A' + 1;
    for(int i = 1; i < columnTitle.length(); i++) {
        sum = sum*26 + (columnTitle[i]-'A'+1);
    }
    return sum;
}

int main() {
    cout << titleToNumber("A") << endl;
    cout << titleToNumber("ZY") << endl;
    return 0;
}

//
// Created by Administrator on 2022/3/18.
//

