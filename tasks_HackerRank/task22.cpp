#include <iostream>
	int main(){
        // 21.    Find the largest digit of a number.
        int number;
        int maxDigit = 0;
        int digit;
        std::cout << "Insert the number " << std::endl;
        std::cin >> number;
        std::cout << "-----------------------------" << std::endl;
        if (number < 0)
        {
                number = -number;
        }
        
        while (number > 0)
        {
                digit = number % 10;
                if (digit > maxDigit)       
                {
                        maxDigit = digit;
                }
                number = number / 10;
                
        }
        std::cout << "Max digit in number = " << maxDigit << std::endl;
        
}

