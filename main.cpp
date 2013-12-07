#include <iostream>

#include "Book.h"
#include "CD.h"
#include "Magazine.h"

#include "ShoppingCart.h"

#include <string>
using namespace std;

//TODO:
/*
    Print success messages after an item is added
    finish method to summarize cart (count each type of item, total price)
*/

//Function Prototypes
void Menu();
bool addItem();
bool addBook();
bool addCD();
bool addMagazine();
bool addMultipleItems();
void printCart();
void printCartToFile();
void summarizeCart();
bool addOther();

//create a shopping cart
ShoppingCart cart;

int main()
{

    Menu();

    //Book book("nomnom", 1234.44, "pewpew", 1234, "a343dfaadas", "adfadf");
    //Item *ip = &book;
    //cart.addItem(ip);
     
     //printCart();

    return 0;

}

void Menu()
{
    int choice;
    string yesno;
    char trash;
    
    cout << "***************************************************************" << endl;
    cout << "Please enter a numeric option below." << endl << endl;
    cout << "1. Add an item to your shopping cart." << endl;;
    cout << "2. Add multiple items to your shopping cart." << endl;;
    cout << "3. Print the contents of your shopping cart to the screen." << endl;;
    cout << "4. Print the contents of your shopping cart to a file." << endl;
    cout << "5. Summarize the contents of your shopping cart." << endl;
    cout << "***************************************************************" << endl << endl;

    cout << "Please enter your choice here: ";
    cin >> choice;
    
    switch(choice)
    {
        case 1: 
            addItem();
            break;
        case 2:
            addMultipleItems();
            break;
        case 3:
            printCart();
            break;
        case 4:
            printCartToFile();
            break;
        case 5:
            summarizeCart();
            break;
        default:
            cout << "You entered an incorrect choice. Please choose again." << endl;
            Menu();
    }
    
    do
    {
        cout << endl << endl << "Would you like to continue? (Please enter 'yes' or 'no' without quotation marks): ";
        getline(cin, yesno);
    
        if(yesno == "yes")
            Menu();
        else if(yesno == "no")
            return;
        else
            cout << "You entered an incorrect input; Please enter 'yes' or 'no' only" << endl;
    } while (yesno != "yes" && yesno != "no");
    
}

bool addItem()
{
    //figure out what type of item the person wants to add.
    int choice;
    char trash;

    
    cout << "***************************************************************" << endl;
    cout << "What type of item would you like to add to your cart?" << endl << endl;
    cout << "1. Book" << endl;;
    cout << "2. CD" << endl;;
    cout << "3. Magazine" << endl;;
    cout << "4. Other" << endl;
    cout << "***************************************************************" << endl << endl;

    cout << "Please enter your choice here: ";
    cin >> choice;
    
     switch(choice)
    {
        case 1: 
            addBook();
            break;
        case 2:
            addCD();
            break;
        case 3:
            addMagazine();
            break;
        case 4:
            addOther();
            break;
        default:
            cout << "Please Enter a correct numeric value of 1-4: ";
            addItem();
    }
    
    cout << endl << "Item was successfully added to your cart :D" << endl;
    
    return true;
    
}

bool addMultipleItems()
{
    char quit;
    cout << "You will now have the ability to add multiple items to your cart." << endl;
    cout << "Enter 'q' to quit where prompted. Otherwise, hit any key." << endl;
    cin.get(quit);
    
    while(quit != 'q')
    {
        addItem();
        
        cout << "Enter 'q' to quit where prompted. Otherwise, hit any key." << endl;
        cin.get(quit);
    } 
    
    return true;
}

bool addOther()
{
    string title;
    char trash;
    double price;
   
    cin.get(trash);
    cout << "Please enter the Product Name ";
    getline(cin, title);
    cout << "Please enter the Product Price: " ;
    cin >> price;
    cin.get(trash);
    
    Item * ip = new Item(title, price);
    cart.addItem(ip) ;
    return true;
}

bool addBook()
{
    string title, author, isbn, publisher;
    double price;
    int pageLength;
    char trash;
    
    cin.get(trash);
    cout << "Please enter the Book Title: ";
    getline(cin, title);
    cout << "Please enter the Author's Name: " ;
    getline(cin, author);
    cout << "Please enter the ISBN: ";
    getline(cin, isbn);
    cout << "Please enter the Publisher: ";
    getline(cin, publisher);
    cout << "Please enter the Price: ";
    cin >> price;
    cout << "Please enter the Page Length: ";
    cin >> pageLength;
    cin.get(trash);
    
    //create a book object with the given info
    Book *book = new Book(title, price, author, pageLength, isbn, publisher);
    Item *ip = new Item;
    ip = book;
    
    //push it to the cart
    cart.addItem(ip) ;
    
    return true;
}

bool addCD()
{
    string title, artist, label;
    double price;
    int releaseYear, numDisks;
    char trash;
    
    cin.get(trash);
    cout << "Please enter the CD Title: ";
    cin >> title;
    cout << "Please enter the Artist Name: " ;
    cin >> artist;
    cout << "Please enter the Label Name: ";
    cin >> label;
    cout << "Please enter the Price: ";
    cin >> price;
    cout << "Please enter the Release Year: ";
    cin >> releaseYear;
    cout << "Please enter the Number of Disks: ";
    cin >> numDisks;
    cin.get(trash);
    
    CD *cd = new CD(title, price, artist, releaseYear, numDisks, label);
    Item *ip = new Item;
    ip = cd;
    
    cart.addItem(ip) ;
    
    return true;
}

bool addMagazine()
{
    string title, publisher;
    double price;
    int pageCount, volume;
    char trash;
    
    cin.get(trash);
    cout << "Please enter the Magazine Title: ";
    cin >> title;
    cout << "Please enter the Publisher Name: " ;
    cin >> publisher;
    cout << "Please enter the Price: ";
    cin >> price;
    cout << "Please enter the Page Count: ";
    cin >> pageCount;
    cout << "Please enter the Volume Number: ";
    cin >> volume;
    cin.get(trash);
    
    Magazine *mag = new Magazine(title, price, publisher, pageCount, volume );
    Item *ip = new Item;
    ip = mag;
    
    cart.addItem(ip) ;
    
    return true;
}


void printCart()
{
    char trash;
    cin.get(trash);
    cart.displayCart(cout);
    return;
}

void printCartToFile()
{
    char trash;
    cin.get(trash);

    string path;
    cout << "Please input the file name you wish to save your Shopping Cart to." << endl;
    cin >> path;
    
    ofstream outfile(path.c_str());
    cart.displayCart(outfile);
    return;
}

void summarizeCart()
{
    char trash;
    cin.get(trash);
    cart.summarizeCart();
    return;
}