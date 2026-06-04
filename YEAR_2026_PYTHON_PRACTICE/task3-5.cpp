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
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::cout << countEven(arr, 6);

    return 0;
}