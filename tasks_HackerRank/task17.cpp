#include <iostream>
	int main(){
        // 17. Calculate the sum of numbers from 1 to n.
        int n;
        long int sum = 0;
        std::cout << "Insert the number to which the numbers will be output:" << std::endl;
        std::cin >> n;
        std::cout << "-----------------------------" << std::endl;
        for (int i = 0; i <= n; i++)
        {
                sum = sum + i;
        }
        std::cout << "Sum:" << sum << std::endl;

}

