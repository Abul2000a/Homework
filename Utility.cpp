#include <iostream>
#include <regex>
#include <string>
#include "Utility.hpp"
int main()
{;
    std::string inPut;
    getline(std::cin,inPut);
    std::cout << Utility::isFloat(inPut);
    std::string inPut_1;
    getline(std::cin,inPut_1);
    std::cout << Utility::isemail(inPut_1);
    std::string inPut_2;
    getline(std::cin,inPut_2);
    std::cout << Utility::isInteger(inPut_2);
    std::string inPut_3;
    getline(std::cin,inPut_3);
    std::cout << Utility::isNumber(inPut_3);
    std::string inPut_4;
    getline(std::cin,inPut_4);
    std::cout << Utility::isUrl(inPut_4);
}
