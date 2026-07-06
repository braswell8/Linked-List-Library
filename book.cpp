#include "book.h"
using namespace std;

Book::Book(string t,string a, int isbn, int date){
    title = t;
    author = a;
    ISBN = isbn;
    yearPublished = date;
    checkedOut = false;
    next = nullptr;
}