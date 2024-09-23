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
Student::Student(const Student&& ob):name{ ob.name }, birth{ ob.birth }, phone{ ob.phone }, town{ ob.town }, country{ ob.country }, school{ ob.school }, number_group{ ob.number_group } {
        ob.name = nullptr;
        ob.birth = nullptr;
        ob.phone = nullptr;
        ob.town = nullptr;
        ob.country = nullptr;
        ob.school = nullptr;
        ob.number_group = 0;
}
Student& Student::operator=(Student&& ob)
{
    if (!(this == &ob)) {
        delete name;
        delete birth;
        delete phone;
        delete town;
        delete country;
        delete school;
        name = ob.name;
        birth = ob.birth;
        phone = ob.phone;
        town = ob.town;
        country = ob.country;
        school = ob.school;
        number_group = ob.number_group;

        ob.name = nullptr;
        ob.birth = nullptr;
        ob.phone = nullptr;
        ob.town = nullptr;
        ob.country = nullptr;
        ob.school = nullptr;
        ob.number_group = 0;
    }
}
void Student::Print() {
    cout << endl << name << " : " << birth << " , " << phone << " , " << town << " , " << country << " , " << school << " , " << number_group<<endl;
}