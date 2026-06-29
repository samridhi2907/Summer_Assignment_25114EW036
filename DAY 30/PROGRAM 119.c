#include <bits/stdc++.h>
using namespace std;

#define MAX 20

// Structure of Employee
struct employee {
    string name;
    long int code;
    string designation;
    int exp;
    int age;
};

employee emp[MAX];
int num = 0;

// Function declarations
void showMenu();
bool isDuplicate(long int code);

// Check duplicate ID
bool isDuplicate(long int code) {
    for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            return true;
        }
    }
    return false;
}

// Build initial table
void build() {
    cout << "Build The Table\n";
    cout << "Maximum Entries can be " << MAX << "\n";

    cout << "Enter number of entries: ";
    cin >> num;

    if (num > MAX) {
        cout << "Max limit is " << MAX << ". Setting to max.\n";
        num = MAX;
    }

    for (int i = 0; i < num; i++) {
        cout << "\nEmployee " << i + 1 << "\n";

        cout << "Employee ID: ";
        cin >> emp[i].code;

        // Duplicate check
        if (isDuplicate(emp[i].code)) {
            cout << "Duplicate ID! Try again.\n";
            i--;
            continue;
        }

        cout << "Name: ";
        cin >> emp[i].name;

        cout << "Designation: ";
        cin >> emp[i].designation;

        cout << "Experience: ";
        cin >> emp[i].exp;

        cout << "Age: ";
        cin >> emp[i].age;
    }
}

// Insert new employee
void insert() {
    if (num >= MAX) {
        cout << "Employee Table Full\n";
        return;
    }

    long int code;
    cout << "Enter Employee ID: ";
    cin >> code;

    if (isDuplicate(code)) {
        cout << "Error: Employee ID already exists!\n";
        return;
    }

    emp[num].code = code;

    cout << "Name: ";
    cin >> emp[num].name;

    cout << "Designation: ";
    cin >> emp[num].designation;

    cout << "Experience: ";
    cin >> emp[num].exp;

    cout << "Age: ";
    cin >> emp[num].age;

    num++;
    cout << "Employee Added Successfully!\n";
}

// Delete helper
void deleteIndex(int index) {
    for (int i = index; i < num - 1; i++) {
        emp[i] = emp[i + 1];
    }
}

// Delete record
void deleteRecord() {
    long int code;
    cout << "Enter Employee ID to delete: ";
    cin >> code;

    for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            deleteIndex(i);
            num--;
            cout << "Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "Employee ID not found!\n";
}

// Search record
void searchRecord() {
    long int code;
    cout << "Enter Employee ID to search: ";
    cin >> code;

    for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            cout << "\nEmployee Found:\n";
            cout << "Name: " << emp[i].name << "\n";
            cout << "ID: " << emp[i].code << "\n";
            cout << "Designation: " << emp[i].designation << "\n";
            cout << "Experience: " << emp[i].exp << "\n";
            cout << "Age: " << emp[i].age << "\n";
            return;
        }
    }

    cout << "Employee not found!\n";
}

// Menu
void showMenu() {
    int option;

    do {
        cout << "\n------ Employee Management System ------\n";
        cout << "1. Build Table\n";
        cout << "2. Insert New Entry\n";
        cout << "3. Delete Entry\n";
        cout << "4. Search Record\n";
        cout << "5. Exit\n";
        cout << "Enter option: ";
        cin >> option;

        switch (option) {
            case 1: build(); break;
            case 2: insert(); break;
            case 3: deleteRecord(); break;
            case 4: searchRecord(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid option!\n";
        }

    } while (option != 5);
}

// Driver
int main() {
    showMenu();
    return 0;
}
