#include<iostream>
using namespace std;

class sample {
public:
    // Function pointer type for member functions that take an int and return an int
    typedef int (sample::*FuncPtr)(int);

    int Compute(FuncPtr func, int n) {
        // Call the passed member function with 'n' as argument
        return (this->*func)(n);
    }

    int findFactorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char *argv[]) {
    sample obj;

    // Assuming argv[1] contains the value of N as a string
    // Convert it to an integer
    int N = atoi(argv[1]);

    // Call Compute method and pass the findFactorial function as an argument
    int result = obj.Compute(&sample::findFactorial, N);
    cout << "Factorial of " << N << " is: " << result << endl;

    // Similarly, you can call Compute with findSquare or findCube
    // int squareResult = obj.Compute(&sample::findSquare, N);
    // int cubeResult = obj.Compute(&sample::findCube, N);

    return 0;
}
