#include <iostream>

struct student {
    int id;
    int age;
    double grade;
};

std::ostream& operator<<(std::ostream& out, const student& s) {
    out << "Student #" << s.id 
        << " (age: " << s.age 
        << ", grardde: " << s.grade << ")";
    return out;
}

int main() {
    student s{101, 20, 4.5};
    std::cout << s << std::endl;  
}