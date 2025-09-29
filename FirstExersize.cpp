#include <iostream>
#include <string>
int main (){
  int a;
  int b;
  int c;
  int sum = 0;
    std::cout << "Exersize 1: " << std::endl;
    std::cout << "Enter num A:";
    std::cin >> a;
    std::cout << "Enter num B:";
    std::cin >> b;
    std::cout << "A:" << a << ", B:" << b << std::endl;
      if (a > b){
       c = a;
       a = b;
       b = c;
      }
    std::cout << "After checking nmbers: A:" << a << ", B:" << b << std::endl;
        if (a % 2 !=0) a++;
        for (int i = a; i <= b; i += 2) { 
        sum += i; 
        }
  std::cout << "Suma parnuh chisel: " << sum << std::endl;
  return 0;
}