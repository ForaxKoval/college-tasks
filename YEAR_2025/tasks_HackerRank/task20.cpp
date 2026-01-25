#include <iostream>
	int main(){
        // 20     Count digits in a number.
        int number;
        int count = 0;
        std::cout << "Insert the number " << std::endl;
        std::cin >> number;
        std::cout << "-----------------------------" << std::endl;
        while (number > 0)
        {
                number = number / 10;
                count++;
        }
        std::cout << "count of digits = " << count << std::endl;
        
}

