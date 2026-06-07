#include <iostream>
#include <string>

bool checkPassword(std::string password)
{
    return password == "7631";
}

int main()
{
    std::string password;
    int attempts = 0;
    int maxAttempts = 3;

    while (attempts < maxAttempts)
    {
        std::cout << "Vvedit parol: ";
        std::cin >> password;

        if (checkPassword(password))
        {
            std::cout << "Dostup dozvoleno!" << std::endl;
            return 0;
        }
            attempts++;
            std::cout << "Nevirnyi parol. Sprob: "
                  << attempts << "/" << maxAttempts << std::endl;
    }

    std::cout << "Dostup zablokovano!" << std::endl;

    return 0;
}