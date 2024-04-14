#include <iostream>
using namespace std;
class larger_unit;
class smaller_unit
{
private:
    float feet;

public:
    smaller_unit(float feet)
    {
        this->feet = feet;
    }
    operator larger_unit() const;
};

class larger_unit
{
    float inches;

public:
    larger_unit(float inches) : inches(inches) {}

    void display() const
    {
        cout << "answer in inches: " << inches << endl;
    }
};

smaller_unit::operator larger_unit() const
{
    return larger_unit(feet * 12);
}

int main()
{

    larger_unit L_unit(3.2);
    smaller_unit S_unit(1.3);

    L_unit = S_unit;

    L_unit.display();

    return 0;
}
