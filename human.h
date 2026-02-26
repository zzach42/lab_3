#include "department.h"
#include "employee.h"

Department::Department(std::string name)
    : name(name), boss(nullptr) {
}

void Department::setBoss(Employee* boss) {
    this->boss = boss;
}

void Department::addEmployee(Employee* emp) {
    employees.push_back(emp);
}

std::string Department::getName() const {
    return name;
}

Employee* Department::getBoss() const {
    return boss;
}

const std::vector<Employee*>& Department::getEmployees() const {
    return employees;
}