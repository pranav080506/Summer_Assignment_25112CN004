#include <iostream>
using namespace std;

class SalaryManagement {
    int empId[100], count = 0;
    string name[100];
    float basic[100], hra[100], da[100], salary[100];

public:
    void addEmployee() {
        cout << "\nEnter Employee ID: ";
        cin >> empId[count];

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name[count]);

        cout << "Enter Basic Salary: ";
        cin >> basic[count];

        // HRA = 20% of Basic
        hra[count] = basic[count] * 0.20;

        // DA = 10% of Basic
        da[count] = basic[count] * 0.10;

        salary[count] = basic[count] + hra[count] + da[count];

        count++;

        cout << "Employee Added Successfully!\n";
    }

    void displayEmployees() {
        if (count == 0) {
            cout << "\nNo Employee Records Found.\n";
            return;
        }

        cout << "\n----- Employee Details -----\n";

        for (int i = 0; i < count; i++) {
            cout << "\nEmployee " << i + 1 << endl;
            cout << "Employee ID : " << empId[i] << endl;
            cout << "Name        : " << name[i] << endl;
            cout << "Basic Pay   : " << basic[i] << endl;
            cout << "HRA         : " << hra[i] << endl;
            cout << "DA          : " << da[i] << endl;
            cout << "Net Salary  : " << salary[i] << endl;
        }
    }

    void searchEmployee() {
        int id;

        cout << "\nEnter Employee ID to Search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (empId[i] == id) {
                cout << "\nEmployee Found\n";
                cout << "Employee ID : " << empId[i] << endl;
                cout << "Name        : " << name[i] << endl;
                cout << "Basic Pay   : " << basic[i] << endl;
                cout << "HRA         : " << hra[i] << endl;
                cout << "DA          : " << da[i] << endl;
                cout << "Net Salary  : " << salary[i] << endl;
                return;
            }
        }

        cout << "Employee Not Found.\n";
    }
};

int main() {
    SalaryManagement s;
    int choice;

    do {
        cout << "\n===== SALARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.addEmployee();
                break;

            case 2:
                s.displayEmployees();
                break;

            case 3:
                s.searchEmployee();
                break;

            case 4:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}