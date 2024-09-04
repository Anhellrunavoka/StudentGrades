#include "Student.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
const char* Student::getName()
{
    return name;
}

Student::Student(const char* studentName, const char* studentBirth, const char* studentPhone){
    strcpy_s(name, 20, studentName);
    strcpy_s(birth, 20, studentBirth);
    strcpy_s(phone, 15, studentPhone);
}
void Student::SetTownCountrySch() {
    cout << "Input town:"<<endl;
    cin >> town;
    cout << "Input country:" << endl;
    cin >> country;
    cout << "Input school:" << endl;
    cin >> school;
    cout << "Input group's number:" << endl;
    cin >> number_group;
}
void Student::Print() {
    cout << endl << name << " : " << birth << " , " << phone << " , " << town << " , " << country << " , " << school << " , " << number_group<<endl;
}