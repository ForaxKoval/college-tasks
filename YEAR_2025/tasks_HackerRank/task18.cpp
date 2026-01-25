#include <iostream>
	int main(){
        // 18. Calculate factorial of a number
        int n;
        long int result = 1;
        std::cout << "Insert the number to which the numbers will be factorial:" << std::endl;
        std::cin >> n;
        std::cout << "-----------------------------" << std::endl;
        for (int i = 1; i <= n; i++)
        {
                result = result * i;
        }
        std::cout << "factorial " << n << " = " << result << std::endl; 
        

}

