#include <iostream>
#include <algorithm>

int main()
{
    std::cout << "hello world" << std::endl;
    int x ,y;
    std::cout << "enter two number  x and y" << std::endl;
    std::cin >> x >> y;
    std::cout << "sum is " << x+y << std::endl;
    std::cout << std::max(x,y) << std::endl;


    switch((x>y) && (x!=y)) {

        case 1:
            std::cout << "X is big" << std::endl;
            break;
        case 0:
            std::cout << "Y is big" << std::endl;
            break;
        default:
            std::cout << "Both are equal" << std::endl;
            break;
    }
    return 0;
}
