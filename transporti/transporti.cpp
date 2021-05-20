#include <iostream>
#include"Bus.h"
#include"Car.h"
using namespace std;
int sxvaoba(Car p, Bus t) {
    if (p.b > t.d) {
        return p.b - t.d;
    }
    else return t.d - p.b;
}
int main()
{
    Car p(1500, 110);
    Bus t(4, 80);
    p.print();
    t.print();
    cout << sxvaoba(p, t);
}
    
