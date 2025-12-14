#include <iostream>
	int main(){
        // 24.    Print a square pattern with stars.
        int height;
        std::cout << "Insert the height and width of square " << std::endl;
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

