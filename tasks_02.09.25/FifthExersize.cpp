#include <iostream>

int main() {
    int a,b,c,d,e,f;
    int k = 0;
    for (int i = 0; i < 1000000; i++) {
        a = i/100000;
        b = (i/10000)%10;
        c = (i/1000)%10;
        d = (i/100)%10;
        e = (i/10)%10;
        f = i%10;

        if (a+b+c == d+e+f) {
            std::cout << a << b << c << d << e << f << "\n";
            k++;
        }
    }
    std::cout << "vsego: " << k << "\n" << std::endl;;
    return 0;
}