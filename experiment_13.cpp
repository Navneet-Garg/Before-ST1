#include <iostream>
using namespace std;

class restaurant {
public:
    int pizza;
    int burger;
    int cold_drink;
    int french_fries;
    int tea;

    restaurant() : pizza(100), burger(50), cold_drink(40), french_fries(20), tea(10) {}
};

class order : public restaurant {
public:
    int get_order_quantity(int *arr, int size) {
        int sum = 0;
        for (int i = 0; i < size - 1; i++) {
            int quantity;
            if (arr[i] == 1) {
                cout << " Enter quantity of pizza: ";
                cin >> quantity;
                sum += pizza * quantity;
            } else if (arr[i] == 2) {
                cout << " Enter quantity of burger: ";
                cin >> quantity;
                sum += burger * quantity;
            } else if (arr[i] == 3) {
                cout << " Enter quantity of cold drink: ";
                cin >> quantity;
                sum += cold_drink * quantity;
            } else if (arr[i] == 4) {
                cout << " Enter quantity of french fries: ";
                cin >> quantity;
                sum += french_fries * quantity;
            } else if (arr[i] == 5) {
                cout << " Enter cup of tea: ";
                cin >> quantity;
                sum += tea * quantity;
            }
        }
        return sum;
    }
};

class bill_counter : public order {
public:
    void show_bill(int *arr, int size) {
        cout << "\n----------------------------------------------" << endl;
        cout << "         Spice Boulevard " << endl;
        cout << "         123 Main Street, City" << endl;
        cout << "         Phone: 123-456-7890" << endl;
        cout << "         Date: 20XX - XX -XX  Time: 19:30" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Item                    Price ($)" << endl;
        cout << "----------------------------------------------" << endl;
        
        int sum = get_order_quantity(arr, size);
        
        cout << " Your total bill amount is: " << sum << endl;
    }
};

int main() {
    cout << " Welcome !!" << endl;
    cout << " What would you like to have, we have ..." << endl;

    int *arr = nullptr;
    int size = 0;

    arr = new int[size];

    int choice;
    do {
        cout << " press 1 for pizza = $100/pcs" << endl;
        cout << " press 2 for Burger = $50/pcs" << endl;
        cout << " press 3 for cold drink = $40/pcs" << endl;
        cout << " press 4 for french fries = $20 plate" << endl;
        cout << " press 5 for tea = $10 cup" << endl;
        cout << " Thats all for you today, press 0 for exit and 1 for selecting anything else :" << endl;
        cin >> choice;

        int *temp = new int[size + 1];
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }
        temp[size] = choice;
        delete[] arr;
        arr = temp;
        size++;
    } while (choice != 0);

    bill_counter bill;
    bill.show_bill(arr, size);
    delete[] arr;
    return 0;
}
