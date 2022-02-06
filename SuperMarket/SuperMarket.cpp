// SuperMarket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <conio.h>
#include "products.h"
#include "DisplayInfo.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    DisplayInfo* display = new DisplayInfo();
    display->HomePage();
    system("pause");
    
}

