#include<iostream>

int main()
{
    //compile time error

    std::cout << "hello world" << std::endl;

    //runtime error

    float value =7/0;  

    std::cout << "value :"<< value << std::endl;


    return 0;
}