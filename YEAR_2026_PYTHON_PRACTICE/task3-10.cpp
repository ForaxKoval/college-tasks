#include <iostream>

int enterParking(int cars, int capacity)
{
    if (cars < capacity)
    {
        cars++;
        std::cout << "Avto zayikhalo.\n";
    }
    else
    {
        std::cout << "Parking zapovnenyi!\n";
    }

    return cars;
}

int exitParking(int cars)
{
    if (cars > 0)
    {
        cars--;
        std::cout << "Avto vyyikhalo.\n";
    }
    else
    {
        std::cout << "Parking porozhnii!\n";
    }

    return cars;
}

int main()
{
    int capacity = 5;
    int cars = 0;
    int choice;

    do
    {
        std::cout << "\n1 - Zaizd\n";
        std::cout << "2 - Vyyizd\n";
        std::cout << "3 - Stan parkingu\n";
        std::cout << "0 - Vyhid\n";
        std::cout << "Vash vybir: ";
        std::cin >> choice;

        if (choice == 1)
        {
            cars = enterParking(cars, capacity);
            std::cout << "Na parkingu "
                      << cars << " z "
                      << capacity << " misc.\n";
        }
        else if (choice == 2)
        {
            cars = exitParking(cars);
            std::cout << "Na parkingu "
                      << cars << " z "
                      << capacity << " misc.\n";
        }
        else if (choice == 3)
        {
            std::cout << "Na parkingu "
                      << cars << " z "
                      << capacity << " misc.\n";
        }

    } while (choice != 0);

    return 0;
}