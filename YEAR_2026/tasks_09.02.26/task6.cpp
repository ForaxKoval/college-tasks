#include <iostream>
#include <cmath>

struct Point1{
    int x;
    int y;
};
struct Point2{
    int x;
    int y;
};
int main (){
    Point1 point1;
    Point2 point2;
    std::cout << "Enter point 1 x:   ";
    std::cin >> point1.x;

    std::cout << "Enter point 1 y:   ";
    std::cin >> point1.y;

    std::cout << "Enter point 2 x:   ";
    std::cin >> point2.x;

    std::cout << "Enter point 2 y:   ";
    std::cin >> point2.y;

    double result = sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y));
    std::cout << "Distance: " << result << std::endl;
}
