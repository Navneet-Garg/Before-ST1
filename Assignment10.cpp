#include <iostream>
#include <vector>
using namespace std;

class Book
{
public:
    string title;
    string author;
    string ISBN;

    Book(string t, string a, string isbn) : title(t), author(a), ISBN(isbn) {}
};

void searchingBook(vector<Book> &books, string &isbn)
{
    for (const Book &book : books)
    {
        if (book.ISBN == isbn)
        {
            cout << "Book is available" << endl;
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            return;
        }
    }
    cout << "Book not found in the library , OR ENTER correct isbn code of that book " << endl;
}

int main()
{
    vector<Book> library = {

        {"Book1", "Author1", "ISBN1"},
        {"Book2", "Author2", "ISBN2"},
        {"Book3", "Author3", "ISBN3"},
        {"Book4", "Author4", "ISBN4"},
        {"Book5", "Author5", "ISBN5"},
        {"Book6", "Author6", "ISBN6"}

    };
    string isbn;
    cout << "Enter the ISBN of the book: ";
    cin >> isbn;

    searchingBook(library, isbn);

    return 0;
}
