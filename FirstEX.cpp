#include <iostream>
#include <algorithm>
#include <string>
int main (){
int a;
int b;
int sum = 0;
std::cout << "Input numbers in A:";
std::cin >> a;
std::cout << "Input numbers in B:";
std::cin >> b;
std::cout << "A:" << a << ", B:" << b << std::endl;

if (a % 2 !=0) a++;
for (int i = a; i <= b; i += 2) { 
sum += i; 
}
std::cout << "Suma parnih  chisel: " << sum << std::endl;

std::cout << "ZAVDANNYA 2: " << std::endl;
int number0;
std::cout << "Input number:";
std::cin >> number0;
if (number0 > 0){
std::cout << "Chislo   " << number0 << "  Bilshe 0  " << std::endl;
} else if (number0 < 0){
std::cout << "Chislo   " << number0 << "  Menshe 0  " << std::endl;
} else {
std::cout << "Chislo   " << number0 << "  Ce 0  " << std::endl;
}
std::cout << "ZAVDANNYA 4: " << std::endl;
int number-string;
std::cout << "Input number:";
std::cin >> number-string;
std::string = std::to_string(number-string);
return 0;
}
