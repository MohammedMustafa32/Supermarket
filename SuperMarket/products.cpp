#include "products.h"
#include "DisplayInfo.h"



void products::creat_product()
{
    DisplayInfo d;
    //products pro;

    cout << "\n\n\t\t\t\tEnter the product code : ";            cin >> Pno;
    cout << "\n\n\t\t\t\tEnter the product Name : ";            cin >> Pname;
    cout << "\n\n\t\t\t\tEnter the product Price : ";           cin >> Pprice;
    cout << "\n\n\t\t\t\tEnter the product Quantity : ";        cin >> Pqty;

    

}

void products::show_info()
{
    cout << "\n\t\t\t" << Pno << "\t\t" << Pname << "\t\t\t" << Pprice << "\t\t" << Pqty << endl;   
}

void products::setPnum(int num)
{
    Pno = num;
}

void products::setPname(string name)
{
    Pname = name;
}

void products::setPprice(int price)
{
    Pprice = price;
}

void products::setPquantity(int qty)
{
    Pqty = qty;
}

//void products::setPsell(int sell)
//{
//    Psell = sell;
//}

void products::setPsold(int sold)
{
    Psold = sold;
}

int products::getPnum()
{
    return Pno;
}

string products::getPname()
{
    return Pname;
}

float products::getPprice()
{
    return Pprice;
}

float products::getPquantity()
{
    return Pqty;
}

//int products::getPsell()
//{
//    return Psell;
//}

int products::getPsold()
{
    return Psold;
}
