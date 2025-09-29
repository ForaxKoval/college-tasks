#include <iostream>
#include <string>
int main (){
std::cout << "Exersize 2: " << std::endl;
  int number0;
  std::cout << "Enter num:";
  std::cin >> number0;
    if (number0 > 0){
      std::cout << "Number  " << number0 << "  more than 0  " << std::endl;
      } else if (number0 < 0){
      std::cout << "Number   " << number0 << "  lower than 0  " << std::endl;
      } else {
      std::cout << "Number   " << number0 << "  its 0  " << std::endl;
      }
      return 0;
}
      