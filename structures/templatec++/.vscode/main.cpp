#include<string>
#include<iostream>

int main()
{
    struct student {
        int rollno;
        std::string student_name;
        float gpa;
    };
    
    student students[3];
    /*for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter student name" << std::endl;
        std::cin >> students[i].student_name;
        std::cout << "Enter student rollno" << std::endl;
        std::cin >> students[i].rollno;
        std::cout << "Enter student GPA" << std::endl;
        std::cin >> students[i].gpa;
        
    }
    */
    for (int i = 0; i < 3; i++)
    {
        std::cout << students[i].student_name ;
        std::cout << students[i].rollno ;
        std::cout << students[i].gpa << std::endl;
    }

    
    return 0;
}
