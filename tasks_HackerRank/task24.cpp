#include <iostream>
	int main(){
        // 24.    Print a square pattern with stars.
        int height;
        int minDigit = 9;
        std::cout << "Insert the height of square " << std::endl;
        std::cin >> height;
        std::cout << "-----------------------------" << std::endl;
        
        for (int i = 0; i < height; i++)
        {
                for (int k = 0; k < height; k++)
                {
                        std::cout << "*";
                }
                std::cout << std::endl;
        }        
}

