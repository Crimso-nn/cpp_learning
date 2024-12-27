#include<stdio.h>
#include<iostream>

int main(){
    // initial variables
    int numberOne = 0;
    int numberTwo = 0;

    int operation;

    std::cout << "Enter first number: ";
    std::cin >> numberOne;
    if(isdigit(numberOne) == false){
        std::cout << "Enter valid first number: ";
        std::cin >> numberOne;
    }

    std::cout << "Enter second number: ";
    std::cin >> numberTwo;
}