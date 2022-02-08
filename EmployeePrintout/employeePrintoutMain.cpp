/**
 * @file employeePrintoutMain.cpp
 * @author Jamie Bland (jamie@theblands.net)
 * @brief 
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

enum EmployeeType { Manager, Employee, Volunteer };

/**
 * @brief Address structure, which stores city and state.
 * 
 */
struct Address
{
    std::string city {};
    std::string state {};
};

/**
 * @brief Employee record structure, which stores name, division number, 
 * address, and job title.
 * 
 */
struct EmployeeRecord
{
    std::string name {};
    int divisionNo {};
    Address address {};
    EmployeeType jobTitle {};
};

/**
 * @brief Get the Employee Type As String object
 * 
 * @param employeeType 
 * @return std::string 
 */
std::string getEmployeeTypeAsString( EmployeeType employeeType )
{
    switch ( employeeType )
    {
        case Manager:
            return "Manager";
        case Employee:
            return "Employee";
        case Volunteer:
            return "Volunteer";
    }
}


int main()
{
    // Create employee
    EmployeeRecord exampleEmployee;

    // Assign values to employee
    exampleEmployee.name          = "Josephi Krakowski";
    exampleEmployee.divisionNo    = 4;
    exampleEmployee.address.city  = "Ann Arbor";
    exampleEmployee.address.state = "Michigan";
    exampleEmployee.jobTitle      = Volunteer;

    // Set spacing of values
    std::string spacer { "     " };

    // Print values
    std::cout << getEmployeeTypeAsString(exampleEmployee.jobTitle) << spacer 
    << exampleEmployee.name << spacer
    << exampleEmployee.divisionNo << spacer
    << exampleEmployee.address.city << spacer
    << exampleEmployee.address.state << '\n';

    return 0;
}