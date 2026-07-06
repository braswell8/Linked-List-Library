#include "LinkedList.h"
#include <iostream>
using namespace std;

    void LinkedList::addBook(){
        string title;
        string author;
        int year;
        int isbn;

        cout << "Enter the name of your new book" << endl;
        getline(cin, title);
        
        cout << "Enter the author's name" << endl;
        getline(cin, author);
        
        cout << "Enter the date it was published" << endl;
        cin >> year;

        cout << "Enter the ISBN of your new book" << endl;
        cin >> isbn;

        Book* newbook = new Book(title, author, year, isbn);

        if (head == nullptr){
            head = newbook;
            return;
        }

        Book* current = head;

        while(current->next != nullptr){
            current = current->next;
        }

        current->next = newbook;
        
    }
    void LinkedList::removeBook(){
        int isbn;
        cout << "enter books ISBN to remove from the library" << endl;
        cin >> isbn;
        if (head == nullptr) {
            cout << "your library is empty" << endl;
            return;
        } 
        if (head->ISBN == isbn){
            Book* temp = head;
            head = head->next;
            delete temp;
            cout << "Book removed" << endl;
            return;
        }
        Book* current = head;

        while(current->next != nullptr && current->next->ISBN != isbn){
            current = current->next;
        }
            if (current->next == nullptr){
                cout << "Book not found" << endl;
                return;
            }
        Book* temp = current->next;
        current->next = temp->next;
        delete temp;
        cout << "your book has been deleted" << endl;
        
    }
    void LinkedList::bookSearch(){
        int isbn;
        cout << "Enter the ISBN number of the book you'd like to search for:" << endl;
        cin >> isbn;

        Book* current = head;
        while (current != nullptr) {
            if (current->ISBN = isbn){
                cout << "Title: " + current->title << endl;
                cout << "Author: " + current->author << endl;
                cout << "Yearpublished: " + current->yearPublished << endl;
                
                cout << "Checkedout: ";
                if (current->checkedOut){
                    cout << "Yes";
                } else {
                    cout << "No";
                }
                return;
            }
            current = current->next;
        }
        cout << "Book not found";
    }
    void LinkedList::checkOut(){

    }
    void LinkedList::returnBook(){

    }
    void LinkedList::showAllBooks(){

    }
    void LinkedList::showAvailable(){

    }
    void LinkedList::countTotal() {

    }

    LinkedList::LinkedList() {
        head = nullptr;
    }

