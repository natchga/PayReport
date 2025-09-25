#include <iostream>
#include <string>

using namespace std;

struct Employee{
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int main(){
    int NumberOfEmployees;

    cout << "Enter the number of employees: ";
    cin >> NumberOfEmployees;

    Employee * employees = new Employee[NumberOfEmployees];

    for (int i = 0; i < NumberOfEmployees; i++) {
        cout << "\nEnter the ID for Employee " << (i + 1) << ": ";
        cin >> employees[i].ID;

        cout << "Enter the First Name for Employee " << (i + 1) << ": ";
        cin >> employees[i].FirstName;

        cout << "Enter the Last Name for Employee " << (i + 1) << ": ";
        cin >> employees[i].LastName;

        cout << "Enter the Hours Worked for Employee " << (i + 1) << ": ";
        cin >> employees[i].HoursWorked;

        cout << "Enter the Hourly Rate for Employee " << (i + 1) << ": ";
        cin >> employees[i].HourlyRate;
    }

    cout << "\nPay Report\n";
    cout << "----------\n";

    float totalPay = 0.0;
    for (int i = 0; i < NumberOfEmployees; i++){
        float weeklyPay = employees[i].HoursWorked * employees[i].HourlyRate;
        totalPay += weeklyPay;

        cout << employees[i].ID << ". "
             << employees[i].FirstName << " "
             << employees[i].LastName << ": $"
             << static_cast<int>(weeklyPay) <<"\n";
    }

    cout << "Total Pay: $" << static_cast<int>(totalPay) <<"\n";

    return 0;
}