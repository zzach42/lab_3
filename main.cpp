#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>

class Human {
private:
    std::string name;
    int height;

public:
    Human(std::string name, int height);

    std::string toString() const;
    void print() const;
};

#endif