#include "name.h"

Name::Name(std::string firstName)
    : firstName(firstName) {
}

Name::Name(std::string firstName, std::string lastName)
    : firstName(firstName), lastName(lastName) {
}

Name::Name(std::string firstName, std::string lastName, std::string patronymic)
    : firstName(firstName), lastName(lastName), patronymic(patronymic) {
}

std::string Name::toString() const {
    std::string result;
    if (!firstName.empty()) result += firstName;
    if (!lastName.empty()) result += " " + lastName;
    if (!patronymic.empty()) result += " " + patronymic;
    return result;
}

void Name::print() const {
    std::cout << toString() << std::endl;
}