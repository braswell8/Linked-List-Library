#pragma once
#include <string>
using namespace std;
class Book {

    public:
        string title;
        string author;
        int ISBN;
        int yearPublished;
        bool checkedOut;

        Book* next;

        //constructor for making a book

        Book(string t, string a, int isbn, int date);
        

};