#include <iostream>
#include <string>

void filterStrings(std::string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].length() > 3)
        {
            std::cout << arr[i] << std::endl;
        }
    }
}

int main()
{
    int size;

    std::cout << "Vvedit kilkist ryadkiv: ";
    std::cin >> size;
    std::cin.ignore();

    std::string arr[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Ryadok " << i + 1 << ": ";
        std::getline(std::cin, arr[i]);
    }

    std::cout << "\nRyadky dovshchi za 3 simvoli:\n";
    filterStrings(arr, size);

    return 0;
}