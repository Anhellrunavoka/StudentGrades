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
    Student( Student&& ob);
    Student& operator=(Student&& ob);
};
class Aspirant :public Student {
    string tema;
    string data;
public:
     Aspirant(const char* studentName, const char* studentBirth, const char* studentPhone,string tematika,string dat);
     void Print();
};

