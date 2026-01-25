#include <iostream>
	int main(){
        // 19.  Print multiplication table of a given number.
        int number;
        std::cout << "Insert the number for what will be multiplication table" << std::endl;
        std::cin >> number;
        std::cout << "-----------------------------" << std::endl;
        for (int i = 0; i <= 10; i++)
        {
                std::cout << number << " * " << i << " = " << number * i << std::endl;
        }        
}

