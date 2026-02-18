#include <iostream>
	int main(){
        // 25.    Print a triangle pattern with stars.
        int width;
        std::cout << "Insert the width of triangle " << std::endl;
        std::cin >> width;
        if (width % 2 == 0)
        {
                std::cout << "insert odd number (1/3/5/7...)" << std::endl;
                std::cin >> width;
        }
        int StartSpaces = width / 2;
        int StartStars = 1;
        
        for (int i = 0; i < width / 2 + 1; i++) { 
            for (int k = 0; k < StartSpaces - i; k++) {
                  std::cout << " ";
            }
            for (int f = 0; f < StartStars + 2 * i; f++) {
                  std::cout << "*";
            }
        std::cout << std::endl; 
        }
}

