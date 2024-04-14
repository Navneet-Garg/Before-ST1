#include <iostream>
using namespace std;
class A;
class B
{
    int b;

public:
    B(int b) : b(b){};
    friend int sum(A aa, B bb);
};
class A
{
    int a, b;

public:
    A(int a) : a(a){};
    friend int sum(A aa, B bb);
};
int sum(A aa, B bb)
{
    return aa.a + bb.b;
}
int main()
{
    A aa(5);
    B bb(6);
    cout << " The sum is : " << sum(aa, bb);
}