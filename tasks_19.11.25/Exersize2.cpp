#include <iostream>
#include <string>
    int main(){
        std::cout << "Insert your words: " << std::endl; 
        std::string text;
        std::getline(std::cin, text);

        int countlength = 0;
        for (char letter : text){
            countlength++;
        }
        std::cout << "string length:" << countlength << std::endl;
    }