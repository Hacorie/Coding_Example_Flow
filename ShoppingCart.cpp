#include "ShoppingCart.h"
#include <iostream>
#include <fstream>

//Default constructor.
ShoppingCart::ShoppingCart()
{
    cart.clear();	//Just in case :D
}

//Add a single item to the shopping cart.
bool ShoppingCart::addItem(Item *item)
{
    cart.push_back(item);
    return true;
}

//Display the contents of the shopping cart to the screen.
void ShoppingCart::displayCart(std::ostream& out)
{
    //Send out a simple line if the vector is empty.
    if(cart.size() == 0)
    {
        out << "You currently have no items in your cart." << std::endl << std::endl;
        return;
    }

    //Loop over vector and call print.
    for(int i = 0; i < cart.size(); i++)
    {
        cart[i]->printInfo(out);
    }
}

//print out a brief summary of cart to the screen.
void ShoppingCart::summarizeCart()
{

    //Set all the values of counters.
    int book = 0;
    int mag = 0;
    int cd = 0;
    int other = 0;
    double total = 0;

    //Loop over entire vector and count the number of items.
    for(int i = 0; i < cart.size(); i++)
    {
        if(cart[i]->getType() == "Book")
            book++;
        else if(cart[i]->getType() == "CD")
            cd++;
        else if(cart[i]->getType() == "Magazine")
            mag++;
        else
            other++;

        //Add up cost of all items
        total += cart[i]->getPrice();
    }

    //print out all the summary information.
    std::cout << "The total number of items in your cart: " << book+mag+cd+other << std::endl << std::endl;
    std::cout << "The Above total is broken up into parts below: " << std::endl;
    std::cout << "The total number of Books in your cart: " << book << std::endl;
    std::cout << "The total number of CDs in your cart: " << cd << std::endl;
    std::cout << "The total number of Magazines in your cart: " << mag << std::endl;
    std::cout << "The total number of Other items in your cart: " << other << std::endl << std::endl;

    std::cout << "The total price of all these items combines is: " << total << std::endl;
}

//Destructor of the shopping cart
ShoppingCart::~ShoppingCart()
{
    //Check to see if the cart is empty.
    if(cart.size() == 0)
        return;

    for(int i = 0; i < cart.size(); i++)
    {
        cart[i] = NULL;
        delete cart[i];
    }

    cart.clear();

}
