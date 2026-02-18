#include <iostream>

int main() {
    int height; 
    
    std::cout << "Insert odd number for the diamond's height (e.g. 1/3/5/...): " << std::endl;
    std::cin >> height;
    
    if (height % 2 == 0) {
        std::cout << "Error: The height must be an odd number." << std::endl;
        return 1;
    }
    
    int spaces_start = height / 2; 
    int stars_start = 1;           
    
   
    for (int i = 0; i < height / 2 + 1; i++) {
        
        for (int k = 0; k < spaces_start - i; k++) {
            std::cout << " ";
        }
        

        for (int k = 0; k < stars_start + 2 * i; k++) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }
    
    
    int current_stars = height - 2;
    int current_spaces = 1;
    1
    while (current_stars >= 1) {
        
        for (int k = 0; k < current_spaces; k++) {
            std::cout << " ";
        }
        for (int k = 0; k < current_stars; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        current_spaces++;      
        current_stars -= 2;    
    }
    
    return 0;
}