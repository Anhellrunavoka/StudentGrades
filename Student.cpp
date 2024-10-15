#include "Student.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
const char* Student::getName()
{
    return name;
}

Student::Student(const char* studentName, const char* studentBirth, const char* studentPhone, const char* StudentTown, const char* StudentCountry, const char* scho, int numn){
    name = new char[20];
    birth = new char[20];
    phone = new char[15];
    town = new char[50];
    country = new char[50];
    school = new char[50];
    strcpy_s(name, 20, studentName);
    strcpy_s(birth, 20, studentBirth);
    strcpy_s(phone, 15, studentPhone);
    strcpy_s(town, 20, StudentTown);
    strcpy_s(country, 20, StudentCountry);
    strcpy_s(school, 15, scho);
    this->number_group = numn;
}
void Student::Print() {
    cout << endl << (name ? name : "[No Name]") << " : "
        << (birth ? birth : "[No Birth]") << " , "
        << (phone ? phone : "[No Phone]") << " , "
        << (town ? town : "[No Town]") << " , "
        << (country ? country : "[No Country]") << " , "
        << (school ? school : "[No School]") << " , "
        << number_group << endl;
}

Student::Student( Student&& ob):name{ ob.name }, birth{ ob.birth }, phone{ ob.phone }, town{ ob.town }, country{ ob.country }, school{ ob.school }, number_group{ ob.number_group } {
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
    if (this != &ob) {
        delete[] name;
        delete[] birth;
        delete[] phone;
        delete[] town;
        delete[] country;
        delete[] school;
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
    return *this;
}

string Student::Study() {
    return  "The student is studying in general program.";
}
Student::~Student() {
    delete[] name;
    delete[] birth;
    delete[] phone;
    delete[] town;
    delete[] country;
    delete[] school;
}
Aspirant::Aspirant(const char* studentName, const char* studentBirth, const char* studentPhone, const char* StudentTown, const char* StudentCountry, const char* school, int numn, string tematika, string dat)
    :Student(studentName, studentBirth, studentPhone, StudentTown, StudentCountry, school,numn), tema(tematika), data(dat) {}

void Aspirant::Print() {
    Student::Print();
    cout << endl << "Tema: " << tema << "\nData: " << data;
}

string Aspirant::Study(string Napravlen){
    this->Napravlennya = Napravlen;
    return "The student is studying in "+Napravlennya +" faculty.";
}