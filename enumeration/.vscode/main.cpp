#include<string>
#include<iostream>

enum days{
    week =7,
    month =30,
    year =365,
    leapyear
}

int main()
{   
    enum days myvar = week;
    std::cout << myvar << std::endl;
    
    return 0;
}
