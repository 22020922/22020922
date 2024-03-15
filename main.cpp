#include <iostream>
using namespace std;

int main() {
    double merchandisecost, employeesalary,lindasalary, yearlyrent, electricitycost;
    const double desiredprofit = 0.10;

    cout << "Enter merchandise cost: ";
    cin >> merchandisecost;
    cout << "Enter employee salary: ";
    cin >> employeesalary;
    cout << "Enter linda salary: ";
    cin >> lindasalary;
    cout << "Enter yearly rent: ";
    cin >> yearlyrent;
    cout << "Enter electricity cost: ";
    cin >> electricitycost;

    double totalexpenses = merchandisecost + employeesalary + lindasalary + yearlyrent + electricitycost;
    double targetincome = totalexpenses * (1 + desiredprofit);
    double markupbeforesale = targetincome / merchandisecost;
    double markupaftersale = markupbeforesale / (1 - 0.15);
    double markuppercentage = (markupaftersale - 1) * 100;

    cout << "Markup needed in order for Linda to get 10% net profit: " << markuppercentage << "%" << endl;

    return 0;
}
