#include<iostream>
#include<cstring>
using namespace std;

struct Employee{
    int id;
    char name[50];
    char dept[30];
    float salary;
};

Employee emp[100];
int n = 0;


void addEmployee();
void displayEmployee();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

int main(){
    int choice;

    do{
        cout<<"\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout<<"\n1. Add Employee";
        cout<<"\n2. Display Employees";
        cout<<"\n3. Search Employee";
        cout<<"\n4. Update Employee";
        cout<<"\n5. Delete Employee";
        cout<<"\n6. Exit";
        cout<<"\nEnter Choice : ";
        cin>>choice;
        cin.ignore();

        switch(choice){

        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployee();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            deleteEmployee();
            break;

        case 6:
            cout<<"Program Ended.\n";
            break;

        default:
            cout<<"Invalid Choice\n";
        }

    }while(choice!=6);

    return 0;
}



void addEmployee(){

    cout<<"Enter Employee ID : ";
    cin>>emp[n].id;
    cin.ignore();

    cout<<"Enter Name : ";
    cin.getline(emp[n].name,50);

    cout<<"Enter Department : ";
    cin.getline(emp[n].dept,30);

    cout<<"Enter Salary : ";
    cin>>emp[n].salary;

    n++;

    cout<<"Employee Added Successfully.\n";
}



void displayEmployee(){

    if(n==0){
        cout<<"No Records Found.\n";
        return;
    }

    cout<<"\nID\tName\t\tDepartment\tSalary\n";

    for(int i=0;i<n;i++){

        cout<<emp[i].id<<"\t"
            <<emp[i].name<<"\t\t"
            <<emp[i].dept<<"\t\t"
            <<emp[i].salary<<endl;
    }
}



void searchEmployee(){

    int id;
    bool found=false;

    cout<<"Enter Employee ID : ";
    cin>>id;

    for(int i=0;i<n;i++){

        if(emp[i].id==id){

            cout<<"\nEmployee Found\n";

            cout<<"ID : "<<emp[i].id<<endl;
            cout<<"Name : "<<emp[i].name<<endl;
            cout<<"Department : "<<emp[i].dept<<endl;
            cout<<"Salary : "<<emp[i].salary<<endl;

            found=true;
            break;
        }
    }

    if(!found)
        cout<<"Employee Not Found\n";
}



void updateEmployee(){

    int id;
    bool found=false;

    cout<<"Enter Employee ID : ";
    cin>>id;
    cin.ignore();

    for(int i=0;i<n;i++){

        if(emp[i].id==id){

            cout<<"Enter New Name : ";
            cin.getline(emp[i].name,50);

            cout<<"Enter New Department : ";
            cin.getline(emp[i].dept,30);

            cout<<"Enter New Salary : ";
            cin>>emp[i].salary;

            found=true;

            cout<<"Record Updated Successfully.\n";
            break;
        }
    }

    if(!found)
        cout<<"Employee Not Found\n";
}



void deleteEmployee(){

    int id;
    bool found=false;

    cout<<"Enter Employee ID : ";
    cin>>id;

    for(int i=0;i<n;i++){

        if(emp[i].id==id){

            for(int j=i;j<n-1;j++){

                emp[j]=emp[j+1];
            }

            n--;

            found=true;

            cout<<"Employee Deleted Successfully.\n";

            break;
        }
    }

    if(!found)
        cout<<"Employee Not Found\n";
}