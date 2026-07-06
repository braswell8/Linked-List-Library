#include "LinkedList.h"
#include "book.h"
using namespace std;

int main() {

    LinkedList myList;
    int num = 0;
    cout << "==============================================================" << endl;
    cout << "                 Library Management System" << endl;
    cout << "==============================================================" << endl;
    cout << "  1. Add Book              5. Return Book" << endl;
    cout << "  2. Remove Book           6. Show All Books" << endl;
    cout << "  3. Search for Book       7. Show Available Books" << endl;
    cout << "  4. Check Out Book        8. Count Total Books" << endl;
    cout << "==============================================================" << endl;
    cout << " Please select a choice from one of the 8 above using a number" << endl;
    cout << "==============================================================" << endl;
    cout << endl;
    while(num != 9){
        cout << "Select a number, if you want to erase your library/stop enter the number 9" << endl;
        cin >> num;
        switch (num){
            case 1:
                myList.addBook();
            break;
            case 2:
                myList.removeBook();
            break;
            case 3:
                myList.bookSearch();
            break;
            case 4:
                myList.checkOut();
            break;
            case 5:
                myList.returnBook();
            break;
            case 6:
                myList.showAllBooks(); 
            break;
            case 7:
                myList.showAvailable();
            break;
            case 8:
                myList.countTotal();
            break;
            case 9:
                cout << "Your program is ending" << endl;
            break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    }
    return 0;
}