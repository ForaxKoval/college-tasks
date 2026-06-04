#include <iostream>
#include <string>

void sortByLength(std::string arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j].length() > arr[j + 1].length())
            {
                std::string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;

    std::cout << "Kilkist ryadkiv: ";
    std::cin >> size;
    std::cin.ignore();

    std::string arr[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Ryadok " << i + 1 << ": ";
        std::getline(std::cin, arr[i]);
    }

    sortByLength(arr, size);

    std::cout << "\nVidsortovani ryadky:\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}