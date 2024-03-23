#include <iostream>
#include <string>

std::string equalLen(std::string smallNum, std::string bigNum);
char plusMinus(std::string num1, std::string num2);

std::string sum (std::string num1, std::string num2) {
    if (num1.length() < num2.length()) {
        num1 = equalLen(num1, num2);
    }
    else {
        num2 = equalLen(num2, num1);
    }
    std::string sumResult = "";
    int plus1 = 0;
    int len = num1.length() - 1;
    for (int i = len; i >= 0; i--) {
        int num;
        int firstNum = int(num1[i]) - 48;
        int secondNum = int(num2[i]) - 48;
        num = firstNum + secondNum + plus1;
        if (num >= 10) {
            plus1 = 1;
            num = num - 10;
        }
        else {
            plus1 = 0;
        }
        sumResult = std::to_string(num) + sumResult;
        if (i == 0 && plus1 == 1) {
            sumResult = std::to_string(plus1) + sumResult;
        }
    }
    return sumResult;
 }

 std::string sub (std::string num1, std::string num2) {
    if (num1.length() < num2.length()) {
        num1 = equalLen(num1, num2);
    }
    else {
        num2 = equalLen(num2, num1);
    }
    char minus = plusMinus(num1, num2);
    std::string biggerNum;
    std::string smallerNum;
    if (minus == '-') {
        biggerNum = num2;
        smallerNum = num1;
    }
    else {
        biggerNum = num1;
        smallerNum = num2;
    }
    std::string subResult = "";
    int plus1 = 0;

    for (int i = biggerNum.length() - 1; i >= 0; i--) {
        int num;
        int firstNum = int(biggerNum[i]) - 48;
        int secondNum = int(smallerNum[i]) - 48;
        num = firstNum - secondNum - plus1;
        if (num < 0) {
            plus1 = 1;
            num = num + 10;
        }
        else {
            plus1 = 0;
        }
        subResult = std::to_string(num) + subResult;
    }
    
    int len = subResult.length() - 1;

    for (int i = 0; i < len; i++) {
        if (subResult[0] == '0') {
            subResult.erase(0, 1);
        }
        else {
            break;
        }
    }

    if (minus == '-') {
        subResult = minus + subResult;
    }

    return subResult;
}