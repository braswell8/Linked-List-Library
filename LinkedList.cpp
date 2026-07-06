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
            if (current->ISBN == isbn){
                cout << "Title: " + current->title << endl;
                cout << "Author: " + current->author << endl;
                cout << "Yearpublished: " << current->yearPublished << endl;
                
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
        int isbn;
        cout << "enter the ISBN number of the book to check out" << endl;
        cin >> isbn;

        Book* current = head;

        while (current != nullptr){
            if (current->ISBN == isbn){
                if (current->checkedOut){
                    cout << "Book is already checked out" << endl;
                } else {
                    current->checkedOut = true;
                    cout << "You have checked out your book" << endl;
                }
                return;
            }
            current = current->next;
        }
        cout << "Book doesnt exist" << endl;
    }
    void LinkedList::returnBook(){
        int isbn;
        cout << "Please enter the isbn number of the book you'd like to return" << endl;
        cin >> isbn;

        Book* current = head;

        while (current != nullptr){
            if (current->ISBN == isbn){
                current->checkedOut = false;
                cout << "Your book has been returned" << endl;
                return;
            } 
            current = current->next;
        }
        cout << "Sorry, we dont recognize this isbn number" << endl;
    }
    void LinkedList::showAllBooks(){
        
        Book* current = head;
        cout << "retreiving all library books..." << endl;
        if (current == nullptr){
            cout << "There are no books in the library right now" << endl;
            return;
        }
        
        while (current != nullptr){
            cout << current->title << endl;
            current = current->next;
        }
    }
    void LinkedList::showAvailable(){
        
        cout << "Here is a list of all available books" << endl;
        Book* current = head;

        if (current == nullptr){
            cout << "There are no books in the library" << endl;
            return;
        }
        while (current != nullptr){
            if (current->checkedOut == false){
                cout << current->title << endl;
            }
            current = current->next;
        }
    }
    void LinkedList::countTotal() {
        int count = 0;
        Book* current = head;
        
        while(current != nullptr){
            count++;
            current = current->next;

        }
        cout << count << endl;
    }

    LinkedList::LinkedList() {
        head = nullptr;
    }

