#include <iostream>
	int main(){
        // 16. Print even numbers from 1 to n. + Print odd numbers from 1 to n.
        int n;
        std::cout << "Insert the number to which the numbers will be output:" << std::endl;
        std::cin >> n;
        std::cout << "--------------EVEN NUMBERS:---------------" << std::endl;
                for (int i = 0; i <= n; i++)
                {
                        if (i % 2 == 0 )
                        {
                                std::cout << i << std::endl;
                        }
                }
        std::cout << "--------------ODD NUMBERS:---------------" << std::endl;
                for (int i = 0; i <= n; i++)
                {
                        if (i % 2 != 0 )
                        {
                                std::cout << i << std::endl;
                        }
                }
}

