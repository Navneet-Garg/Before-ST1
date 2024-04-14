#include <iostream>
#include <cstring>
using namespace std;

class Strprocess {
private:
    const char *str;

public:
    Strprocess(const char *s) : str(s) {}

    int countWords() {
        int count = 0;
        while (*str) {
            while (*str && isspace(*str))
                str++;
            if (*str)
                count++;
           
            while (*str && !isspace(*str))
                str++;
        }
        return count;
    }
};

int main() {
    const char *ptr = "Hello world! This is a test.";
    Strprocess obj(ptr); 
    int wordCount = obj.countWords(); 
    cout << "Total words in the string: " << wordCount << endl;
    return 0;
}
