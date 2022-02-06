#include "DisplayInfo.h"
#define Open_read_write_shop open("shop.txt", ios::in | ios::out)
#define Open_write_app_shop open("shop.txt", ios::in | ios::app)    // write in file and file not empty( has any word )
#define Open_read_shop  open("shop.txt", ios::in)
#define Open_write_shop open("shop.txt", ios::out)                  // write in file and file is empty , if file has any word ,the word is deleted
#define Open_read_write_sold open("sold.txt", ios::in | ios::out)
#define Open_write_app_sold open("sold.txt", ios::in | ios::app)
#define Open_read_sold  open("sold.txt", ios::in)
#define Open_write_sold open("sold.txt", ios::out)
#define Open_read_temp  open("temp.txt", ios::in)
#define Open_write_temp open("temp.txt", ios::out)
#define Open_read_replace open("replace.txt", ios::in)
#define Open_write_replace open("replace.txt", ios::out);
//#define read 
#define write  pro.getPnum() << "\t\t" << pro.getPname() << "\t\t" << pro.getPprice() << "\t\t" << pro.getPquantity() << "\n";
#define wh(fp) while (fp >> pro.Pno >> pro.Pname >> pro.Pprice >> pro.Pqty)
#define wh(sold) while (sold >> pro.Pno >> pro.Pname >> pro.Pprice >> pro.Pqty)
#define table  cout << "\t\t\t------------------------------------------------------------------\n\t\t\tCode\t\tName\t\t\tPrice\t\tQuantity\n\t\t\t------------------------------------------------------------------ \n"



void DisplayInfo::HomePage()
{
    char ch;
    do
    {
        system("cls");
        system("color 7");
        cout << "\n\n\t\t\t*************************[ Good Like ]**************************";
        cout << "\n\n\t\t\t******************[ Ado Nawar / 01094085932 ]*******************";
        cout << "\n\n\t\t\t-------------------------( Main Menu )--------------------------";
        cout << "\n\n\t\t\t(1) Admin Page";
        cout << "\n\n\t\t\t(2) User Page";
        cout << "\n\n\t\t\t(3) EXIT";
        cout << "\n\n\t\t\tPlease enter your choice (1-3) :  ";
        ch = _getche();   
        //cin >> ch;
        string  username = "admin"
              , password = "admin";
        string user, pass;


        switch (ch)
        {
        case '1':
            system("cls");
            system("color 7");
            cout << "\n\n\t\t\t-------------------------( Check Privacy )--------------------------";

            

            cout << "\n\n\n\t\t\tEnter the username : ";                   cin >> user;
            cout << "\n\n\t\t\tEnter the password : ";                     cin >> pass;
            if (user == username && pass == password) {
                cout << "\n\t\t\t<<<< USERNAME OR PASSWORD IS CORRECRT !!!!!!!! >>>> ";
                _getch();
                AdminPage();
            }
            else {
                system("color 4");
                cout << "\n\t\t\t<<<< USERNAME OR PASSWORD IS NOT CORRECRT !!!!!!!! >>>> ";
                _getch();
                HomePage();
            }
            break;
        case '2':
            UserPage();
            break;
        case '3':
            exit(0);
            break;
        default:
            cout << "\t<<< Error >>>";
            _getch();
        }
    } while (ch != 8);
}

void DisplayInfo::AdminPage()
{
    char ch;
    do
    {
        system("cls");
        system("color 7");
        cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
        //cout << "\n\n\t\t\t******************[ Ado Nawar / 01094085932 ]*******************";
        cout << "\n\n\t\t\t-------------------------( Main Menu )--------------------------";
        cout << "\n\n\t\t\t(1) Create Product";
        cout << "\n\n\t\t\t(2) Display Product";
        cout << "\n\n\t\t\t(3) Searchs";
        cout << "\n\n\t\t\t(4) Update";
        cout << "\n\n\t\t\t(5) Delete";
        cout << "\n\n\t\t\t(6) Sold";
        cout << "\n\n\t\t\t(7) Return to Home Page";
        cout << "\n\n\t\t\t(8) EXIT";
        cout << "\n\n\t\t\tPlease enter your choice (1-8) :  ";
        ch = _getche();
        //cin >> ch;

        switch (ch)
        {
        case '1':
            system("cls");
            system("color 8");
            cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
            create_products();
            break;
        case '2':
            system("cls");
            system("color 9");
            cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
            //cout << "\n\n\t\t\t< Home Page >";            
            display_Admin_page();
            break;
        case '3':
            system("cls");
            system("color A");
            cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
            //cout << "\n\n\t\t\t< Home Page >";            
            search_Admin_page();
            break;
        case '4':
            system("cls");
            system("color B");
            cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
            //cout << "\n\n\t\t\t< Home Page >";           
            update_Admin_page();
            break;
        case '5':
            system("cls");
            system("color C");
            cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
            //cout << "\n\n\t\t\t< Home Page >";
            delete_Admin_page();
        case '6':
            system("cls");
            system("color E");
            cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
            //cout << "\n\n\t\t\t< Home Page >";
            sold_Admin_page();
        case '7':
            HomePage();
        case '8':
            exit(0);
            break;
        default:
            cout << "\t<<< Error >>>";
            //system("cls");
            _getch();
        }
    } while (ch != 8);



}

void DisplayInfo::UserPage()
{
    system("color 7");
    char ch;
    do
    {
        system("cls");
        system("color 7");
        cout << "\n\n\t\t\t*************************[ User Page ]**************************";
        cout << "\n\n\t\t\t******************[ Ado Nawar / 01094085932 ]*******************";
        cout << "\n\n\t\t\t-------------------------( Main Menu )--------------------------";
        
        cout << "\n\n\t\t\t(1) Display Products";
        cout << "\n\n\t\t\t(2) Searchs for Products";
        cout << "\n\n\t\t\t(3) Sell Products";
        cout << "\n\n\t\t\t(4) Sold Products";
        cout << "\n\n\t\t\t(5) Return to Home Page";
        cout << "\n\n\t\t\t(6) EXIT";
        cout << "\n\n\t\t\tPlease enter your choice (1-6) :  ";
        ch = _getche();
        //cin >> ch;

        switch (ch)
        {
        case '1':
            system("cls");
            system("color F");
            cout << "\n\n\t\t\t< User Page >";           
            display_User_page();
            break;
        case '2':
            system("cls");
            system("color A");
            cout << "\n\n\t\t\t< User Page >";            
            search_User_page();
            break;
        case '3':
            system("cls");
            system("color D");           
            cout << "\n\n\t\t\t< User Page >";           
            sell_User_page();
            break;
        case '4':
            system("cls");
            system("color E");          
            cout << "\n\n\t\t\t< User Page >";
            sold_User_page();
            break;
        case '5':
            HomePage();
            break;
        case '6':
            exit(0);
            break;
        default:
            cout << "\t<<< Error >>>";
            _getch();
        }
    } while (ch != 8);
}


// create or add item for admin only
void DisplayInfo::create_products()
{
    cout << "\n\n\n\t\t\t----------------------< Create Product >--------------------------";

    fp.Open_write_app_shop;   
    pro.creat_product();

    //write in file
    fp << write;          //fp << pro.getPnum() << "\t" << pro.getPname() << "\t" << pro.getPprice() << "\t" << pro.getPquantity() << "\n";
    
    //fp.write;
    fp.close();
    
    cout << "\n\n\t\t\t# The Product Created #";
    _getch();
    system("cls");
}


// display for user and admin
void DisplayInfo::display_Admin_page()
{
    cout << "\n\n\t\t\t----------------------< Display Page >----------------------------";

    cout << "\n\n\t\t\t1. Display all item\n";
    cout << "\n\n\t\t\t2. Display one item\n";
    cout << "\n\n\t\t\t3. Return To Admin Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-3) :   ";
    char x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
        cout << "\n\n\t\t\t< Admin Page >";
        display_All();
        break;
    case '2':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
        cout << "\n\n\t\t\t< Admin Page >";
        display_One_Admin_Page();
        break;
    case '3':
        AdminPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    system("cls");
    display_Admin_page();
}

void DisplayInfo::display_User_page()
{
    cout << "\n\n\t\t\t----------------------< Display Page >--------------------------";

    cout << "\n\n\t\t\t1. Display all item\n";
    cout << "\n\n\t\t\t2. Display one item\n";
    cout << "\n\n\t\t\t3. Return To User Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-3) :   ";
    char x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ User Page ]**************************";
        cout << "\n\n\t\t\t< User Page >";
        display_All();
        break;
    case '2':
        system("cls");
       // cout << "\n\n\t\t\t*************************[ User Page ]**************************";
        cout << "\n\n\t\t\t< User Page >";
        display_One_User_Page();
        break;
    case '3':
        UserPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    display_User_page();
}

void DisplayInfo::display_All()
{
    cout << "\n\n\t\t\t            < Display Page >";
    cout << "\n\n\t\t\t----------------------< Display All Item >--------------------------";
    cout << "\n\n\t\t\tAll The products information : \n \n";
    fp.Open_read_shop;                                           //    =   fp.open("shop.txt", ios::in);     //  read
    table;
    wh(fp) {                                                  //  =  while (fp.read((char*)&pro, sizeof(products)))
        pro.show_info();
    }
    cout << "\n\n\t\t\t====================================================================";
    fp.close();
    _getch();
    system("cls");
}

void DisplayInfo::display_One_Admin_Page()
{
    cout << "\n\n\t\t\t            < Display Page >";
    cout << "\n\n\t\t\t----------------------< Display One Item >--------------------------";

    cout << "\n\n\t\t\t1. By code\n";
    cout << "\n\n\t\t\t2. By name\n";
    cout << "\n\n\t\t\t3. By price\n";
    cout << "\n\n\t\t\t4. By quantity\n";
    cout << "\n\n\t\t\t5. return to Display Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-5) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
        cout << "\n\n\t\t\t< Admin Page >";
        display_One_code();
        break;
    case '2':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
        cout << "\n\n\t\t\t< Admin Page >";
        
        display_One_name();
        break;
    case '3':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
        cout << "\n\n\t\t\t< Admin Page >";
        
        display_One_price();
        break;
    case '4':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ Admin Page ]**************************";
        cout << "\n\n\t\t\t< Admin Page >";       
        display_One_quantity();
        break;
    case '5':
        system("cls");
        display_Admin_page();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    display_One_Admin_Page();
}

void DisplayInfo::display_One_User_Page()
{
    cout << "\n\n\t\t\t            < Display Page >";
    cout << "\n\n\t\t\t----------------------< Display One Item >--------------------------";

    cout << "\n\n\t\t\t1. By code\n";
    cout << "\n\n\t\t\t2. By name\n";
    cout << "\n\n\t\t\t3. By price\n";
    cout << "\n\n\t\t\t4. By quantity\n";
    cout << "\n\n\t\t\t5. return to Display Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-5) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ User Page ]**************************";
        cout << "\n\n\t\t\t< User Page >";
       
        display_One_code();
        break;
    case '2':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ User Page ]**************************";
        cout << "\n\n\t\t\t< User Page >";
        
        display_One_name();
        break;
    case '3':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ User Page ]**************************";
        cout << "\n\n\t\t\t< User Page >";
        
        display_One_price();
        break;
    case '4':
        system("cls");
        //cout << "\n\n\t\t\t*************************[ User Page ]**************************";
        cout << "\n\n\t\t\t< User Page >";
        
        display_One_quantity();
        break;
    case '5':
        system("cls");
        display_User_page();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
        system("cls");
    }
    display_One_User_Page();
}

void DisplayInfo::display_One_code()
{
    cout << "\n\n\t\t\t            < Display Page >";
    cout << "\n\n\t\t\t                           < Display One Item >";
    cout << "\n\n\t\t\t----------------------< Display One Item By Code >--------------------------";

    cout << "\n\n\t\t\tEnter code of item : ";
    int code;   cin >> code;
    fp.Open_read_shop;                                          
    table;
    wh(fp) {
        if (pro.getPnum() == code ) {
            pro.show_info();
        }
       
    }
    cout << "\n\n\t\t\t============================================================================";
    fp.close();
    _getch();
    system("cls");
}

void DisplayInfo::display_One_name()
{
    cout << "\n\n\t\t\t            < Display Page >";
    cout << "\n\n\t\t\t                           < Display One Item >";
    cout << "\n\n\t\t\t----------------------< Display One Item By Name >--------------------------";

    cout << "\n\n\t\t\tEnter Name of item : ";
    string name;   cin >> name;
    fp.Open_read_shop;
    table;
    wh(fp) {
        if (pro.getPname() == name) {
            pro.show_info();
        }

    }
    cout << "\n\n\t\t\t============================================================================";
    fp.close();
    _getch();
    system("cls");
}

void DisplayInfo::display_One_price()
{
    cout << "\n\n\t\t\t            < Display Page >";
    cout << "\n\n\t\t\t                           < Display One Item >";
    cout << "\n\n\t\t\t----------------------< Display One Item By Price >--------------------------";

    cout << "\n\n\t\t\tEnter Price of item : ";
    int price;   cin >> price;
    fp.Open_read_shop;
    table;
    wh(fp) {
        if (pro.getPprice() == price) {
            pro.show_info();
        }

    }
    cout << "\n\n\t\t\t============================================================================";
    fp.close();
    _getch();
    system("cls");
}

void DisplayInfo::display_One_quantity()
{
    cout << "\n\n\t\t\t            < Display Page >";
    cout << "\n\n\t\t\t                           < Display One Item >";
    cout << "\n\n\t\t\t----------------------< Display One Item By Quantity >--------------------------";

    cout << "\n\n\t\t\tEnter Quantity of item : ";
    int qty;   cin >> qty;
    fp.Open_read_shop;
    table;
    wh(fp) {
        if (pro.getPquantity() == qty) {
            pro.show_info();
        }

    }
    cout << "\n\n\t\t\t================================================================================";
    fp.close();
    _getch();
    system("cls");
}




// search for user and admin
void DisplayInfo::search_Admin_page()
{
    cout << "\n\n\t\t\t----------------------< Search Page >----------------------------";

    cout << "\n\n\t\t\t1. By Code\n";
    cout << "\n\n\t\t\t2. By Name\n";
    cout << "\n\n\t\t\t3. By Price\n";
    cout << "\n\n\t\t\t4. By Quantity\n";
    cout << "\n\n\t\t\t5. Return To Admin Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-5) :   ";
    char x;   //cin >> x;
    x = _getch();
    
    switch (x)
    {
    case '1':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        search_code();
        break;
    case '2':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        search_name();
        break;
    case '3':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        ;
        search_price();
        break;
    case '4':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        search_quantity();
        break;
    case '5':
        AdminPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    search_Admin_page();
}

void DisplayInfo::search_User_page()
{
    cout << "\n\n\t\t\t----------------------< Search Page >---------------------------";

    cout << "\n\n\t\t\t1. By Code\n";
    cout << "\n\n\t\t\t2. By Name\n";
    cout << "\n\n\t\t\t3. By Price\n";
    cout << "\n\n\t\t\t4. By Quantity\n";
    cout << "\n\n\t\t\t5. Return To User Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-5) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        search_code();
        break;
    case '2':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        search_name();
        break;
    case '3':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        search_price();
        break;
    case '4':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        search_quantity();
        break;
    case '5':
        UserPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    search_User_page();
}

void DisplayInfo::search_code()
{
    cout << "\n\n\t\t\t            < Search Page >";
    cout << "\n\n\t\t\t----------------------< Search Code >--------------------------";

    cout << "\n\n\t\t\tEnter the code to search : \t";    int code;  cin >> code;  //code = _getche();  
    int flag = 0;
    fp.Open_read_shop;                                     //  =  fp.open("shop.txt", ios::in)   //  read
    table;
    wh(fp) {
        if (pro.getPnum() == code) {
            pro.show_info();
            flag = 1;
        }
    }
    fp.close();
    if (flag == 0) {
        cout << "\n\n\n\t\t\t\t--->>> Product not stored <<<--- \t";
    }
    _getch();
    system("cls");
}

void DisplayInfo::search_name()
{
    cout << "\n\n\t\t\t            < Search Page >";
    cout << "\n\n\t\t\t----------------------< Search Name >--------------------------";

    cout << "\n\n\t\t\tEnter the name to search : \t";    string name;   cin >> name;
    int flag = 0;
    fp.Open_read_shop;     //  read
    table;
    wh(fp) {
        if (pro.getPname() == name) {
            pro.show_info();
            flag = 1;
        }
    }
    fp.close();
    if (flag == 0) {
        cout << "\n\n\n\t\t\t\t--->>> Product not stored <<<--- \t";
    }
    _getch();
    system("cls");
}

void DisplayInfo::search_price()
{
    
    cout << "\n\n\t\t\t            < Search Page >";
    cout << "\n\n\t\t\t----------------------< Search Price >--------------------------";

    cout << "\n\n\t\t\tEnter the price to search : \t";    int price;   cin >> price;
    int flag = 0;
    fp.Open_read_shop;     //  read
    table;
    wh(fp) {
        if (pro.getPprice() == price) {
            pro.show_info();
            flag = 1;
        }
    }
    fp.close();
    if (flag == 0) {
        cout << "\n\n\n\t\t\t\t--->>> Product not stored <<<--- \t";
    }
    _getch();
    system("cls");

}

void DisplayInfo::search_quantity()
{
    
    cout << "\n\n\t\t\t            < Search Page >";
    cout << "\n\n\t\t\t----------------------< Search Quantity >--------------------------";

    cout << "\n\n\t\t\tEnter the quantity to search : \t";    int quantity;   cin >> quantity;
    int flag = 0;
    fp.Open_read_shop;            //  read
    table;
    wh(fp) {
        if (pro.getPquantity() == quantity) {
            pro.show_info();
            flag = 1;
        }
    }
    fp.close();
    if (flag == 0) {
        cout << "\n\n\n\t\t\t\t--->>> Product not stored <<<--- \t";
    }
    _getch();
    system("cls");

}


// update for admin only
void DisplayInfo::update_Admin_page()
{
    cout << "\n\n\t\t\t----------------------< Update Page >----------------------------";

    cout << "\n\n\t\t\t1. Update Code\n";
    cout << "\n\n\t\t\t2. Update Name\n";
    cout << "\n\n\t\t\t3. Update Price\n";
    cout << "\n\n\t\t\t4. Update Quantity\n";
    cout << "\n\n\t\t\t5. Update All By CODE\n";
    cout << "\n\n\t\t\t6. Return To Admin Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-6) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        update_code();
        break;
    case '2':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        update_name();
        break;
    case '3':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        update_price();
        break;
    case '4':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        update_quantity();
        break;
    case '5':
        update_All_By_code();
        break;
    case '6':
        system("cls");
        AdminPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    update_Admin_page();
}

void DisplayInfo::update_User_page()
{
    cout << "\n\n\t\t\t----------------------< Update Page >----------------------------";

    cout << "\n\n\t\t\t1. Update Code\n";
    cout << "\n\n\t\t\t2. Update Name\n";
    cout << "\n\n\t\t\t3. Update Price\n";
    cout << "\n\n\t\t\t4. Update Quantity\n";
    cout << "\n\n\t\t\t5. Update All By CODE\n";
    cout << "\n\n\t\t\t6. Return To User Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-6) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        update_code();
        break;
    case '2':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        update_name();
        break;
    case '3':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        update_price();
        break;
    case '4':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        update_quantity();
        break;
    case '5':
        system("cls");
        update_All_By_code();
        break;
    case '6':
        UserPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    update_User_page();
}

void DisplayInfo::update_code()
{
    cout << "\n\n\t\t\t            < Update Page >";
    cout << "\n\n\t\t\t----------------------< Update Code >--------------------------";

    fstream temp;
    int code, flag = 0;
    cout << "\n\n\t\t\tEnter old code of item : ";  cin >> code;
    fp.Open_read_shop;     // read
    temp.Open_write_temp;  // write
    wh(fp) {
        if (pro.getPnum() == code) {
            cout << "\n\t\t\tEnter new code : ";  int newCode;  cin >> newCode;
            pro.setPnum(newCode);
            temp << write;
            flag = 1;
        }
        else {
            temp << write;
        }
    }
    temp.close();
    fp.close();
    remove("shop.txt");
    rename("temp.txt", "shop.txt");

    // move data from temp to fp (shop)
    //fp.Open_write_shop;    // write
    //temp.Open_read_temp;   // read
    //while (temp.read) {
    //    fp.write;
    //}
    //temp.close();
    //fp.close();
    //remove("temp.txt");
    if (flag == 1) {
        cout << "\n\n\t\t\t---> The code of item is updated <---\n";
    }
    else {
        cout << "\n\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    _getch();
    system("cls");
}

void DisplayInfo::update_name()
{
    cout << "\n\n\t\t\t            < Update Page >";
    cout << "\n\n\t\t\t----------------------< Update Name >--------------------------";

    fstream temp;
    string name;   int flag = 0;
    cout << "\n\n\t\t\tEnter old name of item : ";  cin >> name;
    fp.Open_read_shop;     // read
    temp.Open_write_temp;  // write
    wh(fp) {
        if (pro.getPname() == name) {
            cout << "\n\t\t\tEnter new name : ";  string newName;  cin >> newName;
            pro.setPname(newName);
            temp << write;
            flag = 1;
        }
        else {
            temp << write;
        }
    }
    temp.close();
    fp.close();
    remove("shop.txt");
    rename("temp.txt", "shop.txt");

    // move data from temp to fp (shop)
    if (flag == 1) {
        cout << "\n\n\t\t\t---> The name of item is updated <---\n";
    }
    else {
        cout << "\n\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    _getch();
    system("cls");
}

void DisplayInfo::update_price()
{
    cout << "\n\n\t\t\t            < Update Page >";
    cout << "\n\n\t\t\t----------------------< Update Price >--------------------------";

    fstream temp;
    int price, flag = 0;
    cout << "\n\n\t\t\tEnter old price of item : ";  cin >> price;
    fp.Open_read_shop;     // read
    temp.Open_write_temp;  // write
    wh(fp) {
        if (pro.getPprice() == price) {
            cout << "\n\t\t\tEnter new price : ";  int newPrice;  cin >> newPrice;
            pro.setPprice(newPrice);
            temp << write;
            flag = 1;
        }
        else {
            temp << write;
        }
    }
    temp.close();
    fp.close();
    remove("shop.txt");
    rename("temp.txt", "shop.txt");

    // move data from temp to fp (shop)
    //fp.Open_write_shop;    // write
    //temp.Open_read_temp;   // read
    //while (temp.read) {
    //    fp.write;
    //}
    //temp.close();
    //fp.close();
    //remove("temp.txt");
    if (flag == 1) {
        cout << "\n\n\t\t\t---> The price of item is updated <---\n";
    }
    else {
        cout << "\n\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    _getch();
    system("cls");
}

void DisplayInfo::update_quantity()
{
    cout << "\n\n\t\t\t            < Update Page >";
    cout << "\n\n\t\t\t----------------------< Update Quantity >--------------------------";

    fstream temp;
    int quantity, flag = 0;
    cout << "\n\n\t\t\tEnter old quantity of item : ";  cin >> quantity;
    fp.Open_read_shop;     // read
    temp.Open_write_temp;  // write
    wh(fp) {
        if (pro.getPquantity() == quantity) {
            cout << "\n\t\t\tEnter new quantity : ";  int newQuantity;  cin >> newQuantity;
            pro.setPquantity(newQuantity);
            temp << write;
            flag = 1;
        }
        else {
            temp << write;
        }
    }
    temp.close();
    fp.close();
    remove("shop.txt");
    rename("temp.txt", "shop.txt");

    // move data from temp to fp (shop)
    //fp.Open_write_shop;    // write
    //temp.Open_read_temp;   // read
    //while (temp.read) {
    //    fp.write;
    //}
    //temp.close();
    //fp.close();
    //remove("temp.txt");
    if (flag == 1) {
        cout << "\n\n\t\t\t---> The quantity of item is updated <---\n";
    }
    else {
        cout << "\n\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    _getch();
    system("cls");
}

void DisplayInfo::update_All_By_code()
{
    cout << "\n\n\t\t\t            < Update Page >";
    cout << "\n\n\t\t\t----------------------< Update All >--------------------------";

    fstream temp;
    int code, flag = 0;
    cout << "\n\n\t\t\tEnter old code of item : ";  cin >> code;
    fp.Open_read_shop;     // read
    temp.Open_write_temp;  // write
    wh(fp) {
        if (pro.getPnum() == code) {
            cout << "\n\t\t\tEnter New Code : ";        int newCode;      cin >> newCode;
            cout << "\n\t\t\tEnter New Name : ";        string newName;   cin >> newName;
            cout << "\n\t\t\tEnter New Price : ";       int newPrice;     cin >> newPrice;
            cout << "\n\t\t\tEnter New Quantity : ";    int newQty;       cin >> newQty;
            pro.setPnum(newCode);
            pro.setPname(newName);
            pro.setPprice(newPrice);
            pro.setPquantity(newQty);
            temp << write;
            flag = 1;
        }
        else {
            temp << write;
        }
    }
    temp.close();
    fp.close();
    remove("shop.txt");
    rename("temp.txt", "shop.txt");

    if (flag == 1) {
        cout << "\n\n\t\t\t---> The data of item is updated <---\n";
    }
    else {
        cout << "\n\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    _getch();
    system("cls");
}



// delete for admin only
void DisplayInfo::delete_Admin_page()
{
    cout << "\n\n\t\t\t----------------------< Delete Page >----------------------------";
    
    cout << "\n\n\t\t\t1. By Code\n";
    cout << "\n\n\t\t\t2. By Name\n";
    cout << "\n\n\t\t\t3. By Price\n";
    cout << "\n\n\t\t\t4. By Quantity\n";
    cout << "\n\n\t\t\t5. Return To Admin Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-5) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        delete_item_By_code();
        break;
    case '2':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        delete_item_By_name();
        break;
    case '3':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        delete_item_By_price();
        break;
    case '4':
        system("cls");
        cout << "\n\n\t\t\t< Admin Page >";
        
        delete_item_By_quantity();
        break;
    case '5':
        AdminPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    delete_Admin_page();
}

void DisplayInfo::delete_User_page()
{
    cout << "\n\n\t\t\t----------------------< Delete Page >----------------------------";

    cout << "\n\n\t\t\t1. By Code\n";
    cout << "\n\n\t\t\t2. By Name\n";
    cout << "\n\n\t\t\t3. By Price\n";
    cout << "\n\n\t\t\t4. By Quantity\n";
    cout << "\n\n\t\t\t5. Return To User Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-5) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        delete_item_By_code();
        break;
    case '2':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        delete_item_By_name();
        break;
    case '3':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
        
        delete_item_By_price();
        break;
    case '4':
        system("cls");
        cout << "\n\n\t\t\t< User Page >";
       
        delete_item_By_quantity();
        break;
    case '5':
        UserPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    delete_User_page();
}

void DisplayInfo::delete_item_By_code(int code)
{
    int flag = 1;
    fp.Open_read_write_shop;
    fstream fp2;
    fp2.Open_write_replace;  // write
    fp.seekg(0, ios::beg);
    wh(fp) {
        if (pro.getPnum() != code) {
            fp2 << write;
            flag = 0;
        }
        else {
            cout << "\n\n\t\t\t1. to confirm the deleted \n\t\t\t2. to cancel     : ";
            int confirm;  cin >> confirm;
            if (confirm == 1) {
                flag = 1;
                continue;
            }
            else {
                fp2.close();
                fp.close();
                remove("replace.txt");
                //delete_page();                ///////////////////////
            }
        }
    }
    fp2.close();
    fp.close();
    remove("shop.txt");
    rename("replace.txt", "shop.txt");
    if (flag == 0) {
        cout << "\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    else {
        cout << "\n\n\t\t\t---> The Product deleted <---";
    }
    _getch();
    system("cls");
}

void DisplayInfo::delete_item_By_code()
{
    cout << "\n\n\t\t\t            < Delete Page >";
    cout << "\n\n\t\t\t----------------------< Delete Item By Code >--------------------------";

    int code, flag = 1;
    cout << "\n\n\t\t\t Enter the code of item : ";  cin >> code;
    fp.Open_read_write_shop;
    fstream fp2;
    fp2.Open_write_replace;  // write
    fp.seekg(0, ios::beg);
    wh(fp) {
        if (pro.getPnum() != code) {
            fp2 << write;
            flag = 0;
        }
        else {
            cout << "\n\n\t\t\t1. to confirm the deleted \n\t\t\t2. to cancel     : ";
            int confirm;  cin >> confirm;
            if (confirm == 1) {
                flag = 1;
                continue;
            }
            else {
                fp2.close();
                fp.close();
                remove("replace.txt");
                delete_Admin_page();
            }
        }
    }
    fp2.close();
    fp.close();
    remove("shop.txt");
    rename("replace.txt", "shop.txt");
    if (flag == 0) {
        cout << "\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    else {
        cout << "\n\n\t\t\t---> The Product deleted <---";
    }
    _getch();
    system("cls");
}

void DisplayInfo::delete_item_By_name()
{
    cout << "\n\n\t\t\t            < Delete Page >";
    cout << "\n\n\t\t\t----------------------< Delete Item By Name >--------------------------";
   
    string name;  int flag = 1;
    cout << "\n\n\t\t\tEnter the name of item : ";  cin >> name;
    fp.Open_read_write_shop;
    fstream fp2;
    fp2.Open_write_replace;  // write
    fp.seekg(0, ios::beg);
    int confirm;
    wh(fp) {
        if (pro.getPname() != name) {
            fp2 << write;
            flag = 0;
        }
        else {
            cout << "\n\n\t\t\t1. to confirm the deleted \n\t\t\t2. to cancel\t\t: ";    // otherwith to cancel
            cin >> confirm;
            if (confirm == 1) {
                flag = 1;
                continue;
            }
            else {
                fp2.close();
                fp.close();
                remove("replace.txt");
                delete_Admin_page();
            }
        }
    }
    fp2.close();
    fp.close();
    remove("shop.txt");
    rename("replace.txt", "shop.txt");
    if (flag == 0) {
        cout << "\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    else {
        cout << "\n\n\t\t\t---> The Product deleted <---";
    }
    _getch();
    system("cls");
}

void DisplayInfo::delete_item_By_price()
{
    cout << "\n\n\t\t\t            < Delete Page >";
    cout << "\n\n\t\t\t----------------------< Delete Item By Price >--------------------------";

    int price, flag = 1;
    cout << "\n\n\t\t\tEnter the price of item : ";  cin >> price;
    fp.open("shop.txt", ios::in | ios::out);
    fstream fp2;
    fp2.Open_write_replace;  // write
    fp.seekg(0, ios::beg);
    wh(fp) {
        if (pro.getPprice() != price) {
            fp2 << write;
            flag = 0;
        }
        else {
            cout << "\n\n\t\t\t1. to confirm the deleted \n\t\t\t2. to cancel     : ";
            int confirm;  cin >> confirm;
            if (confirm == 1) {
                flag = 1;
                continue;
            }
            else {
                fp2.close();
                fp.close();
                remove("replace.txt");
                delete_Admin_page();
            }
        }
    }
    fp2.close();
    fp.close();
    remove("shop.txt");
    rename("replace.txt", "shop.txt");
    if (flag == 0) {
        cout << "\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    else {
        cout << "\n\n\t\t\t---> The Product deleted <---";
    }
    _getch();
    system("cls");
}

void DisplayInfo::delete_item_By_quantity()
{
    cout << "\n\n\t\t\t            < Delete Page >";
    cout << "\n\n\t\t\t----------------------< Delete Item By Quantity >--------------------------";

    int qty, flag = 1;
    cout << "\n\n\t\t\tEnter the quantity of item : ";  cin >> qty;
    fp.Open_read_write_shop;
    fstream fp2;
    fp2.Open_write_replace;  // write
    fp.seekg(0, ios::beg);
    wh(fp) {
        if (pro.getPquantity() != qty) {
            fp2 << write;
            flag = 0;
        }
        else {
            cout << "\n\n\t\t\t1. to confirm the deleted \n\t\t\t2. to cancel     : ";
            int confirm;  cin >> confirm;
            if (confirm == 1) {
                flag = 1;
                continue;
            }
            else {
                fp2.close();
                fp.close();
                remove("replace.txt");
                delete_Admin_page();
            }
        }
    }
    fp2.close();
    fp.close();
    remove("shop.txt");
    rename("replace.txt", "shop.txt");
    if (flag == 0) {
        cout << "\n\n\t\t\t\t--->>> The Product not stored <<<--- \t";
    }
    else {
        cout << "\n\n\t\t\t---> The Product deleted <---";
    }
    _getch();
    system("cls");
}


//sell for user only
void DisplayInfo::sell_User_page()
{
    cout << "\n\n\t\t\t----------------------< Sell Page >-----------------------------";
    
    cout << "\n\n\t\t\t1. Enter Name Of Item : ";     string name;     cin >> name;
    cout << "\n\n\t\t\t2. Enter Quantity Of Item : ";    int qt;         cin >> qt;

    int flag = 0;
    fp.Open_read_shop;     //  read
    table;
    wh(fp) {
        if (pro.getPname() == name) {
            if (pro.Pqty <= qt) {
                cout << "\n\n\n\t\t\t\t--->>> The Quantity of item is more than exist <<<--- \t";
                cout << "\n\n\n\t\t\t\t--->>> Try to enter small Quantity !!!!!!  <<<--- \t";
                fp.close();
                _getch();
                UserPage();
            }
            else {
                pro.show_info();
                flag = 1;
            }
        }
    }
    fp.close();
    if (flag == 0) {
        cout << "\n\n\n\t\t\t\t--->>> Product not stored <<<--- \t";
        _getch();
        UserPage();
        system("cls");
    }

  
    cout << "\n\n\t\t\t1. to confirm the sell \n\t\t\t2. to cancel\t\t: ";    // otherwith to cancel
    int confirm;   cin >> confirm;
   
    if (confirm == 1) {

        cout << "\n\n\t\t\tEnter the code of item :- ";    int code;     cin >> code;
        fstream temp;
        fp.Open_read_shop;
        temp.Open_write_temp;
        sold.Open_write_app_sold;
        table;
        wh(fp) {

            if (pro.getPnum() == code) {

                cout << "\n\n\t\t\t1. to confirm the sell \n\t\t\t2. to cancel\t\t:- ";    // otherwith to cancel
                int confirm2;   cin >> confirm2;
                if (confirm2 == 1) {
                    int qqqq = pro.Pqty;
                    pro.setPquantity(qt);
                    pro.setPsold(qt);
                    sold << write;
                    pro.setPquantity(qqqq - qt);
                    temp << write;

                    pro.show_info();

                    //cout << "\n\t\t\tthe quantity is updated ";
                    cout << "\n\t\t\tTHE PRODUCT IS SOLD";
                }
                else {
                    sold.close();
                    temp.close();
                    fp.close();
                    remove("temp");
                    UserPage();
                }
            }
            else {
                temp << write;
            }

        }
        sold.close();
        temp.close();
        fp.close();
        remove("shop.txt");
        rename("temp.txt", "shop.txt");
        _getch();
        UserPage();
    


    }
    else
    {
        //remove("temp");
        UserPage();
    }
    
    

}


//sold for user and admin
void DisplayInfo::sold_Admin_page()
{
    cout << "\n\n\t\t\t----------------------< Sold Page >------------------------------";
   
    cout << "\n\n\t\t\t1. Display All\n";
    cout << "\n\n\t\t\t2. Remove All\n";
    cout << "\n\n\t\t\t3. Remove One\n";
    cout << "\n\n\t\t\t4. Return To Admin Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-4) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        //system("color 7");
        cout << "\n\n\t\t\t< Admin Page >";       
        display_All_sold();
        break;
    case '2':
        system("cls");
        //system("color 7");
        cout << "\n\n\t\t\t< Admin Page >";       
        remove_All_sold();
        break;
    case '3':
        system("cls");
        //remove_One_sold();
        break;
    case '4':
        AdminPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    sold_Admin_page();


}

void DisplayInfo::sold_User_page()
{
    cout << "\n\n\t\t\t----------------------< Sold Page >-----------------------------";

    cout << "\n\n\t\t\t1. Display All\n";
    cout << "\n\n\t\t\t2. Remove All\n";
    cout << "\n\n\t\t\t3. Remove One\n";
    cout << "\n\n\t\t\t4. Return To User Page\n";
    cout << "\n\n\t\t\tPlease enter your choice (1-4) :   ";
    char x;   //cin >> x;
    x = _getch();

    switch (x)
    {
    case '1':
        system("cls");
        system("color 7");
        cout << "\n\n\t\t\t< User Page >";
        
        display_All_sold();
        break;
    case '2':
        system("cls");
        system("color 7");
        cout << "\n\n\t\t\t< User Page >";
       
        remove_All_sold();
        break;
    case '3':
        //remove_One_sold();
        break;
    case '4':
        UserPage();
        break;
    default:
        cout << "\t<<< Error >>>";
        _getch();
    }
    sold_User_page();

}

void DisplayInfo::display_All_sold()
{
    cout << "\n\n\t\t\t            < Sold Page >";
    cout << "\n\n\t\t\t----------------------< Display All >--------------------------\n";


    sold.Open_read_sold;
    table;
    wh(sold) {
        if (pro.getPnum() != 0) {
            pro.show_info();
        }
    }
    sold.close();
    _getch();
    system("cls");
    //HomePage();
}

void DisplayInfo::remove_All_sold()
{
    cout << "\n\n\t\t\t            < Sold Page >";
    cout << "\n\n\t\t\t----------------------< Remove All >--------------------------\n";
    

    cout << "\n\n\n\n\t\t\t\t--->>> the sold products are removed <<<---";
    fstream fp2;
    fp2.Open_write_replace;  // write
    fp2.close();
    remove("sold.txt");
    rename("replace.txt", "sold.txt");

   
    _getch();

}





