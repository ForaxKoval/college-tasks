#include <iostream>
    int main(){
        int width;
        int height;

        std::cout << "Insert width & height" << std::endl;
        std::cin >> width;
        if(width %2 == 0){
            std::cout << "Enter odd number (like 1/3/5...)" << std::endl;
            std::cin >> width;
        }
        height = width;

        std::cout << "width" <<  width << std::endl;
        std::cout << "height" << height << std::endl;
        for (int i = 0; i < height; i++) {
    
             for (int k = 0; k < width; k++) {
                  std::cout << "*";
        }
        std::cout << std::endl; 
    }

}