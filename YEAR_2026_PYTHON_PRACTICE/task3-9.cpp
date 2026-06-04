#include <iostream>

double znyattya(double balance, double summa, double limit){
    if (summa > limit){
        std::cout << "Perevyshcheno limit!\n";
    }
    else if (summa > balance){
        std::cout << "Nedostatno koshtiv!\n";
    }
    else{
        balance -= summa;
        std::cout << "Operatsiya vykonana.\n";
    }
    return balance;
}

double popovnennya(double balance, double summa){
    if (summa > 0)
    {
        balance += summa;
        std::cout << "Rahunok popovneno.\n";
    }
    else
    {
        std::cout << "Nekorektna suma!\n";
    }

    return balance;
}

int main(){
    double balance = 10000;
    double limit = 5000;
    int choice;
    double summa;

    std::cout << "1 - Znyattya koshtiv\n";
    std::cout << "2 - Popovnennya rahunku\n";
    std::cout << "3 - Perevirka balansu\n";
    std::cout << "Obery operatsiyu: ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Suma: ";
        std::cin >> summa;
        balance = znyattya(balance, summa, limit);
    }
    else if (choice == 2)
    {
        std::cout << "Suma: ";
        std::cin >> summa;
        balance = popovnennya(balance, summa);
    }
    else if (choice == 3)
    {
        std::cout << "Balans: " << balance << std::endl;
    }
    else
    {
        std::cout << "Nevirna komanda!";
    }

    return 0;
}
