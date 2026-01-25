#include <iostream>
             // 27. Calculator...
    int add (int a, int b){
        return a + b;
    }
    int minus (int a, int b){
        return a - b;
    }
    int multiply (int a, int b){
        return a * b;
    }
    int divide (int a, int b){
        return a / b;
    }

int main(){
        int x;
        int y;
        char znak;

        std::cout << "Instert x:" << std::endl;
        std::cin >> x;
        std::cout << "Instert y:" << std::endl;
        std::cin >> y;
        std::cout << "Instert znak (+ - * /):" << std::endl;
        std::cin >> znak;
        if (znak == '+')
        {
            std::cout << "Result:" << add(x,y) << std::endl;
        } else if (znak == '-'){
            std::cout << "Result:" << minus(x,y) << std::endl;
        } else if (znak == '*'){
            std::cout << "Result:" << multiply(x,y) << std::endl;
        } else if (znak == '/'){
            std::cout << "Result:" << divide(x,y) << std::endl;
        } 
}

