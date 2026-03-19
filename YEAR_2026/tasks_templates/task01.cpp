#include <iostream>

template<typename T>
T my_min(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    std::cout << "my_min(5, 3) = " << my_min(5, 3) << "\n";         
    std::cout << "my_min(2.5, 8.1) = " << my_min(2.5, 8.1) << "\n"; 
    std::cout << "my_min('a', 'z') = " << my_min('a', 'z') << "\n"; 
}