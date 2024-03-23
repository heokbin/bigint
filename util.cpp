#include <iostream>
#include <string>

std::string equalLen(std::string smallNum, std::string bigNum) {
    for (int i = smallNum.length(); i < bigNum.length(); i++) {
            smallNum = "0" + smallNum;
    }
    return smallNum;
}

char plusMinus(std::string num1, std::string num2) {
    char minus;
    for (int i = 0; i < num1.length(); i++) {
        int firstNum = int(num1[i]) - 48;
        int secondNum = int(num2[i]) - 48;
        if (firstNum == secondNum) {
            continue;
        }
        else if (firstNum > secondNum) {
            break;
        }
        else {
            minus = '-';
            return minus;
        }
    }
    return minus;
}