#include <iostream>

int countEven(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int size;

    std::cout << "Скiльки чисел будете вводити? ";
    std::cin >> size;

    int arr[size];

    std::cout << "Введiть числа:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Кiлькiсть парних чисел: ";
    std::cout << countEven(arr, size);

    return 0;
}