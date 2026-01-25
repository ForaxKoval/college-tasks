#include <iostream>
	int main(){
        // 14. Find the maximum of two numbers.
        int a, b;
        std::cout << "Instert a:" << std::endl;
        std::cin >> a;
        std::cout << "Instert b:" << std::endl;
        std::cin >> b;
        if (a > b)
        {
                std::cout << "Number a is maximum" << std::endl;
        }else if (a < b){
                std::cout << "Number b is maximum" << std::endl;
        }else {
                std::cout << "Numbers are the same" << std::endl;
        }
        

}

