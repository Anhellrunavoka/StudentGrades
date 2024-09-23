#pragma once
#include <string>
using namespace std;
class Student
{
private://public://help zminuvati na pryamu modifire(privat,protecyed(dochirni classes),public(zagal dostup))
    char *name;
    char *birth;
    char *phone;
    char* town;
    char* country;
    char* school;
    int number_group;
public:
    const char* getName();
    Student(const char* studentName, const char* studentBirth, const char* studentPhone);
    void SetTownCountrySch();
    void Print();
    Student(const Student&& ob);
    Student& operator=(Student&& ob);
};

