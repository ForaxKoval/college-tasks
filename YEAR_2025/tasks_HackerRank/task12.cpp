#include <iostream>
	int main(){
        // 12. Check whether a number is even or odd
        int a;
        std::cout << "Instert number A:" << std::endl;
        std::cin >> a;
        if (a % 2 != 0)
        {
                std::cout << "this number is odd" << std::endl;
        } else if (a % 2 == 0)
        {
                std::cout << "this number is even" << std::endl;
        } else{
                std::cout << "this number is 0" << std::endl;
        }
}

