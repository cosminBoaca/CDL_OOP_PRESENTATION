#ifndef PERSON_H
#define PERSON_H

#include <cstring>
#include <iomanip>
#include <iostream>

enum Nationality {
    Romanian,
    American,
};

class Person {
    char *name;
    double age;
    Nationality nationality;
public:
    Person(char *name, double age) {
        /*
           TODO
           Populati membrii clasei.
           Alocati alt sir pentru membrul name din interiorul clasei.
           Nu atribuiti this->name = name
        */
    }

    ~Person() {
        /*
           TODO eliberati memoria alocata in constructorul
        */
    }

    char *getName() {
        return name;
    }

    double getAge() {
        return age;
    }

    Nationality getNationality() {
        return nationality;
    }

    void display() {
        std::cout << p.getName() << " is ";
        std::cout << std::setprecision(2) << p.getAge() << " years old\n";
    }
};

class American : public Person {
    /*
       Social security number. Un fel de CNP dar de 9 cifre
       deci poate fi stociat ca int
    */
    int SSN;
public:
    American(char *name, double age, int SSN) {
    /*
       TODO populati clasa corespunzator. Folositi-va
       de apelul constructorului clasei Person in initializer list
    */
    }

    void display() {
        std::cout << p.getName() << " is ";
        std::cout << std::setprecision(2) << p.getAge() << " years old ";
        std::cout << " and has SSN = " << SSN << std::end;
    }
};

class Romanian : public Person {
    char *CNP;
public:
    Romanian(char *name, double age, char *CNP) {
    /*
       TODO populati clasa corespunzator. Alocati memorie
       pentru sirurile name si CNP, aceasta memorie urmand
       sa fie eliberata in destructor
    */
    }

    void display() {
        std::cout << p.getName() << " is ";
        std::cout << std::setprecision(2) << p.getAge() << " years old ";
        std::cout << " and has CNP = " << CNP << std::end;
    }
};
