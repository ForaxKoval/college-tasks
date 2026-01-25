#include <iostream>
	int main(){
        // 11. Calculate the area of a circle.
        int r;
        const double PI = 3.14159265359;
        std::cout << "Instert radius of circle:" << std::endl;
        std::cin >> r;
        

        std::cout << "Area of the circle: " << PI * (r * r) << " cm^2" << std::endl;
        std::cout << "Or: " << (r*r) << "PI " << "cm^2" << std::endl;
}


