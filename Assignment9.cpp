#include <iostream>
using namespace std;

class Binary_sum
{
private:
    int x;
    int y;

public:
    Binary_sum(int x = 0, int y = 0) : x(x), y(y) {}

    friend Binary_sum operator+(Binary_sum &p1, Binary_sum &p2);

    void display() const
    {
        cout << x << " " << y;
    }
};

Binary_sum operator+(Binary_sum &p1, Binary_sum &p2)
{
    Binary_sum result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}

int main()
{
    Binary_sum p1(2, 3);
    Binary_sum p2(4, 5);

    Binary_sum sum = p1 + p2;

    cout << "Sum is ";
    sum.display();
    cout << endl;

    return 0;
}
