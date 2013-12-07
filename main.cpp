/*
Author: Nathan Perry
File: main.cpp
Platform built on: Debian (Linux).
Compilation: g++ Book.cpp CD.cpp Item.cpp Magazine.cpp ShoppingCart.cpp main.cpp
Run with: ./a.out

*/

#include "Book.h"
#include "CD.h"
#include "Magazine.h"

#include "ShoppingCart.h"

#include <iostream>
#include <string>
using namespace std;

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
    //Run the menu/core of the program.
    Menu();

    return 0;

}

//The main menu of the program.
void Menu()
{
    int choice;     //Whatever Menu Choice the user chooses.
    string yesno;   //for if they want to continue or not.
    
    cout << "***************************************************************" << endl;
    cout << "Please enter a numeric option below." << endl << endl;
    cout << "1. Add an item to your shopping cart." << endl;;
    cout << "2. Add multiple items to your shopping cart." << endl;;
    cout << "3. Print the contents of your shopping cart to the screen." << endl;;
    cout << "4. Print the contents of your shopping cart to a file." << endl;
    cout << "5. Summarize the contents of your shopping cart." << endl;
    cout << "***************************************************************" << endl << endl;

    //Let the user choose.
    cout << "Please enter your choice here: ";
    cin >> choice;
    
    //Depending on input, do what the Menu says
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
    
    //see if the user wants to continue or quit.
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
    } while (yesno != "yes" && yesno != "no"); //they only have two options of input
    
}

//Add an item to the shopping cart.
bool addItem()
{
    int choice;     //Figure out what type of item the person wants to add.
    char trash;     //Throw away character.

    //See what the User wants to add.
    cout << "***************************************************************" << endl;
    cout << "What type of item would you like to add to your cart?" << endl << endl;
    cout << "1. Book" << endl;;
    cout << "2. CD" << endl;;
    cout << "3. Magazine" << endl;;
    cout << "4. Other" << endl;
    cout << "***************************************************************" << endl << endl;

    //Save the users choice.
    cout << "Please enter your choice here: ";
    cin >> choice;
    
    //Do What the menu says.
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
    
    //Print a confirmation message after the item is added.
    cout << endl << "Item was successfully added to your cart :D" << endl;
    
    return true;
    
}

//If the user wants to add multiple items in quick succession.
bool addMultipleItems()
{
    //Tell the user how to quit the add items.
    char quit;
    cout << "You will now have the ability to add multiple items to your cart." << endl;
    cout << "Enter 'q' to quit where prompted. Otherwise, hit any key." << endl;
    cin.get(quit); //get a single character.
    
    //Add items until user hits 'q'.
    while(quit != 'q')
    {
        addItem();
        
        cout << "Enter 'q' to quit where prompted. Otherwise, hit any key." << endl;
        cin.get(quit);
    } 
    
    return true;
}

//Add an item to the shopping cart that is not a CD, Book, or Magazine.
bool addOther()
{
    //Item Variables
    string title;   
    double price;
    
    char trash;     //Throw away character.
    cin.get(trash);
   
    //Get item info from user.
    cout << "Please enter the Product Name ";
    getline(cin, title);
    cout << "Please enter the Product Price: " ;
    cin >> price;
    
    cin.get(trash);
    
    //Add item to Shopping cart.
    Item * ip = new Item(title, price);
    cart.addItem(ip) ;
    
    return true;
}

//Add a book item to the shopping cart.
bool addBook()
{
    //Variables for book.
    string title, author, isbn, publisher;
    double price;
    int pageLength;
    
    char trash;     //Throw away character.
    cin.get(trash);
    
    //Get user input for fields.
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
    
    //Create a book object with the given info.
    Book *book = new Book(title, price, author, pageLength, isbn, publisher);
    Item *ip = new Item;
    ip = book;
    
    //Push it to the cart.
    cart.addItem(ip) ;
    
    return true;
}

//Add a CD item to the shopping cart.
bool addCD()
{
    //Variables for CD
    string title, artist, label;
    double price;
    int releaseYear, numDisks;
    
    char trash;     //Throwaway character.
    cin.get(trash);
    
    //Get user input for fields.
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
    
    //Create CD object with the given info.
    CD *cd = new CD(title, price, artist, releaseYear, numDisks, label);
    Item *ip = new Item;
    ip = cd;
    
    //Store the CD in the shopping cart.
    cart.addItem(ip) ;
    
    return true;
}

//Add a Magazine item to the shopping cart.
bool addMagazine()
{
    //Variables for Magazine.
    string title, publisher;
    double price;
    int pageCount, volume;
    
    char trash;     //Throw away character.
    cin.get(trash);
    
    //Get user input for field.
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
    
    //Create Magazine object with the given info.
    Magazine *mag = new Magazine(title, price, publisher, pageCount, volume );
    Item *ip = new Item;
    ip = mag;
    
    //Store the Magazine in the shopping cart
    cart.addItem(ip) ;
    
    return true;
}

//Print everything in the Shopping Cart to a screen.
void printCart()
{
    char trash;     //Throw away character.
    cin.get(trash);
    
    //Print the shopping cart.
    cart.displayCart(cout);
    return;
}

//Print everything in the shopping cart to a file.
void printCartToFile()
{
    char trash;     //Throw away character.
    cin.get(trash);

    //Ask the user for a file name.
    string path;
    cout << "Please input the file name you wish to save your Shopping Cart to." << endl;
    cin >> path;
    
    //Create an output file stream.
    ofstream outfile(path.c_str());
    
    //Pass the created stream to the displayCart function.
    cart.displayCart(outfile);
    return;
}

//Summarize all the items in the cart.
void summarizeCart()
{
    char trash;     //Throw away character.
    cin.get(trash);
    
    //Call the summarize method.
    cart.summarizeCart();
    return;
}