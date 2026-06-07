#include <iostream>
#include <string>

void reverseString(std::string text)
{
    for (int i = text.length() - 1; i >= 0; i--)
    {
        std::cout << text[i];
    }
    std::cout << std::endl;
}

int main()
{
    std::string text;

    std::cout << "Введiть рядок: " << std::endl;
    std::getline(std::cin, text);

    reverseString(text);

    return 0;
}