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
    Student(const char* studentName, const char* studentBirth, const char* studentPhone, const char* StudentTown, const char* StudentCountry, const char* school,int numn);
    void Print();
    Student( Student&& ob);
    Student& operator=(Student&& ob);
    string Study();
    ~Student();
};
class Aspirant :public Student {
    string tema;
    string data;
    string Napravlennya;
public:
     Aspirant(const char* studentName, const char* studentBirth, const char* studentPhone, const char* StudentTown, const char* StudentCountry, const char* school, int numn,string tematika,string dat);
     void Print();
     string Study(string Napravlen);
};

