#include <iostream>
using namespace std;

int sumOfSeries(int n)
{
    int sum = 0;
    int allSum = 0;
    for (int i = 1; i <= n; i++)
    {
        allSum = 0;
        for (int j = 1; j <= i; j++)
        {
            allSum += j;
        }
        sum += allSum;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid ! , Enter a +ve number" << endl;
        return 1;
    }

    int sum = sumOfSeries(n);
    cout << " sum " << n << " : " << sum << endl;

    return 0;
}
