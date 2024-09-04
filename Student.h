#pragma once
#include <string>
using namespace std;
class Student
{
private://public://help zminuvati na pryamu modifire(privat,protecyed(dochirni classes),public(zagal dostup))
    char name[20];
    char birth[20];
    char phone[15];
    string town;
    string country;
    string school;
    int number_group;
public:
    const char* getName();
    Student(const char* studentName, const char* studentBirth, const char* studentPhone);
    void SetTownCountrySch();
    void Print();
};

