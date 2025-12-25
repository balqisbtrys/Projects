#include <iostream>
using namespace std;

double calculateLateFees(int);
void displayMenu();
void displayLibraryInfo();
int getUserInput(int &);

double calculateLateFees(int days){
    double lateFees;
    if (days > 0 && days <= 7){
        lateFees = 0.50 * days;
    }
    else if (days > 7 && days <= 14){
        lateFees = (0.50 * 7) + (1.00 * (days - 7));
    }
    else if (days > 14){
        lateFees = (0.50 * 7) + (1.00 * 7) + (2.00 * (days - 14));
    }
    return lateFees;
}

void displayMenu(){
    cout << "\n************ Library Book Checkout System ************" << endl;
    cout << "1. Calculate Late Fees" << endl;
    cout << "2. Display Library Information" << endl;
    cout << "3. Quit" << endl;
}

void displayLibraryInfo(){
    cout << "************ Library Information ************" << endl;
    cout << "Library Name: UTM Library" << endl;
    cout << "Address: Skudai, Johor" << endl;
    cout << "Contact: (123) 456 7890";
}

int getUserInput(int &overdue){
    cout << "Enter the number of days the book is overdue: ";
    cin >> overdue;
    return overdue;
}

int main ()
{
    int choice, due;
    do{
        displayMenu();
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        
        if (choice == 1){
            getUserInput(due);
            cout << "Late fees: RM" << calculateLateFees(due);
        }
        else if (choice == 2){
            displayLibraryInfo();
        }
        else if (choice == 3){
            cout << "Exiting the program. Thank you!" << endl;
        }
        else {
            cout << "Invalid choice. Please enter a number between 1 and 3.";
        }

    } while (choice != 3);



    system ("pause");
    return 0;
}