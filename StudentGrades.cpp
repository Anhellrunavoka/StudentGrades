#include <iostream>
#include <Windows.h>
#include "Student.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Успішність студента\n\n\n";
    Student stdnt("Бочкар В.Л.", "04.07.1998","+380894567567","Київ","Україна","Технікум 12",4);
    stdnt.Print();
    cout<<stdnt.Study()<<endl;
    Aspirant asp("Ващенко А.О.", "17.10.1993", "+380813956301", "Чернигів", "Україна", " Політех 45", 18, "Рослини", "14.11.2024");
    asp.Print();
    cout << asp.Study("Біологія") << endl;
    return 0;
}


