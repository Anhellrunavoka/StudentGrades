﻿#include <iostream>
#include <Windows.h>
#include "Student.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Успішність студента\n\n\n";
    Student stdnt("Бочкар В.Л.", "04.07.1998","+380894567567");
    stdnt.SetTownCountrySch();
    stdnt.Print();
    return 0;
}


