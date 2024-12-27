#include <iostream>
#include <stdio.h>

int main(){
    float height = 0;
    float weight = 0;
    
    float bmi = 0;

    std::string result = "";
    
    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << "Enter weight: ";
    std::cin >> weight;

    bmi = weight / (height * height);

    if(bmi <= 15) result = "Severely underweight";
    if(15 < bmi <= 16) result = "Underweight";
    if(16 < bmi <= 18.5) result = "Slightly underweight";
    if(18.5 < bmi <= 25) result = "Healthy";
    if(25 < bmi <= 30) result = "Slightly overweight";
    if(30 < bmi <= 35) result = "Obese";
    if(35 < bmi) result = "Severely obese"; 

    std::cout << "BMI: " << bmi << std::endl << "Result: " << result;

    return 0;
}