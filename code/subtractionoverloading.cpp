/*
 * C++ Program to overload minus (-) operator
 */
#include <iostream>
using namespace std;

class Integer {
    private:
        int value;
    public:
        Integer(int v) : value(v) { }
        Integer operator-(Integer i) {
            value = value - i.value;
            return *this;
        }
	int getValue() {
            return value;
        }
};

int main()
{
    Integer a(10), b(20);

    cout << "a = " << a.getValue() << "\n";
    cout << "b = " << b.getValue() << "\n";
    cout << "a - b = " << (a -b).getValue() << "\n";
}
