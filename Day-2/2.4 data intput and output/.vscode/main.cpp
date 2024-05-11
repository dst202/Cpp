#include<iostream>

int main()
{
    //printing data to terminal
    std::cout << "std::cout :hello world" << std::endl;

    //using cerr
    std::cerr << "std::cerr :Error message" << std::endl;

     //using clog
    std::clog << "std::clog :Log message" << std::endl;

    //taking data from termial

    int age;
    std::string name;
    std::cout << "Please enter your name and age " << std::endl;
    std::getline(std::cin,name);
    std::cin >> age;
    std::cout << "You are  " << name << " and " << age << "years old !" << std::endl;


    

    return 0;
}