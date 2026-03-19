#include <iostream>

struct point {
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& out, const point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

std::istream& operator>>(std::istream& in, point& p) {
    in >> p.x >> p.y;  
    return in;
}

int main() {
    point p;

    std::cout << "Enter coordinates (x y): ";
    std::cin >> p;             
    std::cout << "You entered: " << p << std::endl; 
}