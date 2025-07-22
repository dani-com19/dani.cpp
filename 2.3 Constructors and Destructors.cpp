#include <iostream>
using namespace std;

class Book {
public:
    
    Book() {
        cout << "Book is opened" << endl;
    }

    
    ~Book() {
        cout << "Book is closed" << endl;
    }
};

int main() {
    
    Book Book;
    return 0;
}
