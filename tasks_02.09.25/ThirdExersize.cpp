#include <iostream>
#include <string>
int main (){
std::cout << "Exersize 3: " << std::endl;
  const char * num = "Letters"; 
  std::cout << "Our row: " << num << std::endl;
    int numofletters = 0;
    int f;
    for (f = 0; num[f] != '\0'; f++){
      numofletters++;
    }
std::cout << "Lenght of string: " << numofletters << std::endl;
}