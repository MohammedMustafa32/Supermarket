#pragma once

#include <string>
#include <errno.h>
#include <conio.h>
#include <stdio.h>
//#include <cmath>
//#include <cstdlib>


#include "products.h"
#include <iostream>
#include <fstream>
#include<list>
#include<vector>
using namespace std;


class DisplayInfo
{
    products pro;
    fstream fp,sold;
public:

    void HomePage();

    void AdminPage();
    void UserPage();


    void create_products();

    void display_Admin_page();
    void display_User_page();
    void display_All();
    void display_One_Admin_Page();
    void display_One_User_Page();
    void display_One_code();
    void display_One_name();
    void display_One_price();
    void display_One_quantity();

    void search_Admin_page();
    void search_User_page();
    void search_code();
    void search_name();
    void search_price();
    void search_quantity();
    //void search_codeANDname();
    //void search_nameAND();

    void update_Admin_page();
    void update_User_page();
    void update_code();
    void update_name();
    void update_price();
    void update_quantity();
    void update_All_By_code();

    void delete_Admin_page();
    void delete_User_page();
    void delete_item_By_code();
    void delete_item_By_code(int code);
    void delete_item_By_name();
    void delete_item_By_price();
    void delete_item_By_quantity();


    void sell_User_page();

    void sold_Admin_page();
    void sold_User_page();
    void display_All_sold();
    void remove_All_sold();
    //void remove_One_sold();



};

