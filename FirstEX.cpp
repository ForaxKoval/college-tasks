#include <iostream>
#include <algorithm>
#include <string>
int main (){
  int a;
  int b;
  int sum = 0;
    std::cout << "ЗАВДАННЯ 1: " << std::endl;
    std::cout << "Впишіть число яке буде A:";
    std::cin >> a;
    std::cout << "Впишіть число яке буде B:";
    std::cin >> b;
    std::cout << "A:" << a << ", B:" << b << std::endl;

if (a % 2 !=0) a++;
  for (int i = a; i <= b; i += 2) { 
  sum += i; }
  std::cout << "Сума парних чисел: " << sum << std::endl;

std::cout << "ЗАВДАННЯ 2: " << std::endl;
  int number0;
  std::cout << "Впишіть число:";
  std::cin >> number0;
    if (number0 > 0){
      std::cout << "Число  " << number0 << "  Більше 0  " << std::endl;
      } else if (number0 < 0){
      std::cout << "Число   " << number0 << "  Менше 0  " << std::endl;
      } else {
      std::cout << "Число   " << number0 << "  Це і є 0  " << std::endl;
      }
      
std::cout << "ЗАВДАННЯ 3: " << std::endl;
  const char * num = "Letters"; 
  std::cout << "Наш рядок: " << num << std::endl;
    int numofletters = 0;
    int f;
    for (f = 0; num[f] != '\0'; f++){
      numofletters++;
    }
std::cout << "Кількість символів у рядку: " << numofletters << std::endl;

std::cout << "ЗАВДАННЯ 4: " << std::endl;
  int number = 707118;
  std::string str = std::to_string(number);
  std::cout << "Число як рядок: " << str << std::endl;
    return 0;
    




}

