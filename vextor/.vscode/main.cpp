#include<string>
#include<iostream>

int main()
{
   
    std::string  food = "undrallu";
    std::string &meal = food;

    std::cout << food << std::endl;
    std::cout << meal << std::endl;
    std::cout << &food << std::endl;

     int arry[] ={1,4,6,7,9};
     for (int num :arry){
        std::cout << num << std::endl;
     }


    return 0;
}
