#include <iostream>
#include <string>

int countElements(std::string text)
{
    int count = 0;
    bool inElement = false;

    for (char c : text)
    {
        if (c != ':')
        {
            if (!inElement)
            {
                count++;
                inElement = true;
            }
        }
        else
        {
            inElement = false;
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