#include <iostream>
#include <string>

int countElements(std::string text)
{
    int count = 1;
    for (char c : text)
    {
        if (c == ':')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    std::string text;
    std::getline(std::cin, text);
    std::cout << countElements(text);

    return 0;
}