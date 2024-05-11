#include<iostream>


//function definition

int addNUM (int fist_param,int second_param)
{   
    int result =fist_param + second_param;
    std::cout << "addNUM : " << result << std::endl;

    return result;
}

int multNUM (int fist_param,int second_param)
{   
    int result =fist_param * second_param;
    std::cout << "multNUM : " << result << std::endl;

    return result;
}




int main()
{   
    //statments
    int first_num {3};
    int second_num {6};


    std::cout << "first number : " << first_num << std::endl;
    std::cout << "second number : " << second_num << std::endl;

    int sum = first_num + second_num;
    std::cout << "SUM : " << sum << std::endl;
    addNUM(11,22);
    addNUM(17,29);
    std::cout << "SUM : " << addNUM(100,43) << std::endl;
    multNUM(10,30);




    return 0;
}