#include <iostream>
using namespace std;

class Binary_sum
{
private:
    int a;
    int b;

public:
    Binary_sum(int x = 0, int y = 0) : a(x), b(y) {}

    friend Binary_sum operator-(Binary_sum &p1, Binary_sum &p2);

    void display() const
    {
        cout << a << " " << b;
    }
};

Binary_sum operator-(Binary_sum &obj1, Binary_sum &obj2)
{
    Binary_sum result;
    result.a = obj1.a - obj2.a;
    result.b = obj1.b - obj2.b;
    return result;
}
int main()
{
    Binary_sum obj1(12, 20);
    Binary_sum obj2(2, 6);

    Binary_sum sum = obj1 - obj2;

    cout << "Sum is ";
    sum.display();
    cout << endl;

    return 0;
}
