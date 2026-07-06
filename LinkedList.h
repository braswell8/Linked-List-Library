#include <iostream>
#include "book.h"
using namespace std;
class LinkedList {

    private:
        Book* head;
        
    public:

    void addBook();
    void removeBook();
    void bookSearch();
    void checkOut();
    void returnBook();
    void showAllBooks();
    void showAvailable();
    void countTotal();

    LinkedList();


};