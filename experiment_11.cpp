#include <iostream>
using namespace std;
class matrix
{
private:
    int arr[3][3];

public:
    void get_data()
    {
        cout << " enter elements : \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void show_data()
    {
        cout << "Elements are :\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    matrix operator+(const matrix& other){
        matrix mat3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat3.arr[i][j] = this->arr[i][j] + other.arr[i][j];
            }
            
        }
        return mat3;
    }
};
int main()
{
    matrix mat1, mat3,result;
    mat1.get_data();
    mat3.get_data();
    mat3 = mat1 + mat3;
    mat3.show_data();
}