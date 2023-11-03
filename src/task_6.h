#include <iostream>
#include <string>

int main() {
    std::string employeeName;
    double hoursWorked, hourlyPayRate, federalTaxRate, stateTaxRate;

    std::cout << "Enter employee's name: ";
    std::cin >> employeeName;
    std::cout << "Enter number of hours worked in a week: ";
    std::cin >> hoursWorked;
    std::cout << "Enter hourly pay rate: $";
    std::cin >> hourlyPayRate;
    std::cout << "Enter federal tax withholding rate (in percentage): ";
    std::cin >> federalTaxRate;
    std::cout << "Enter state tax withholding rate (in percentage): ";
    std::cin >> stateTaxRate;

    double grossPay = hoursWorked * hourlyPayRate;
    double federalTaxWithholding = (federalTaxRate / 100) * grossPay;
    double stateTaxWithholding = (stateTaxRate / 100) * grossPay;
    double totalDeductions = federalTaxWithholding + stateTaxWithholding;
    double netPay = grossPay - totalDeductions;


    std::cout << "\nPayroll Statement for " << employeeName << ":\n";
    std::cout << "Hours Worked: " << hoursWorked << " hours\n";
    std::cout << "Hourly Pay Rate: $" << hourlyPayRate << "\n";
    std::cout << "Gross Pay: $" << grossPay << "\n";
    std::cout << "Deductions:\n";
    std::cout << "  Federal Tax Withholding (" << federalTaxRate << "%): $" << federalTaxWithholding << "\n";
    std::cout << "  State Tax Withholding (" << stateTaxRate << "%): $" << stateTaxWithholding << "\n";
    std::cout << "Total Deductions: $" << totalDeductions << "\n";
    std::cout << "Net Pay: $" << netPay << "\n";

    return 0;
}
