#pragma once
#include <string>
#include <conio.h>
#include <iostream>
#include <fstream>
#include<list>
#include<vector>
#include "cassert"

using namespace std; 


class products
{
    

    int c;
    list<int> L;
    vector<int> V();
    
public:
    int Pno;
    string Pname;
    float Pprice, Pqty;
    //int Psell = 0;
    int Psold = 0;

    void creat_product();
    void show_info();

    void setPnum(int num);
    void setPname(string name);
    void setPprice(int price);
    void setPquantity(int qty);
    //void setPsell(int sell);
    void setPsold(int sold);

    int getPnum();
    string getPname();
    float getPprice();
    float getPquantity();
    //int getPsell();
    int getPsold();
};

