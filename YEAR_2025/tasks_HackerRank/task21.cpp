#include <iostream>
	int main(){
        // 21.    Sum digits of a number.
        int number;
        int count = 0;
        std::cout << "Insert the number " << std::endl;
        std::cin >> number;
        std::cout << "-----------------------------" << std::endl;
        if (number < 0)
        {
                number = -number;
        }
        
        while (number > 0)
        {
                count = count + number % 10;
                number = number / 10;
        }
        std::cout << "sum of digits = " << count << std::endl;
        
}

