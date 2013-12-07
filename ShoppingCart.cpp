#include "ShoppingCart.h"
#include <iostream>
#include <fstream>

//default constructor
ShoppingCart::ShoppingCart()
{
	cart.clear();	//just in case :D
}

//add a single item to the shopping cart
bool ShoppingCart::addItem(Item *item)
{
	cart.push_back(item);
	return true;
}

//display the contents of the shopping cart to the screen
void ShoppingCart::displayCart(std::ostream& out)
{
    if(cart.size() == 0)
    {
        out << "You currently have no items in your cart." << std::endl << std::endl;
        return;
    }
	for(int i = 0; i < cart.size(); i++)
	{
            cart[i]->printInfo(out);
    }
}

//print out a brief summary of cart to the screen
void ShoppingCart::summarizeCart()
{
    //loop over vector
    //add up total of books, mags, and cds individual and total count
    //also add up prices
    int book = 0;
    int mag = 0;
    int cd = 0;
    int other = 0;
    double total = 0;
    
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
            
        total += cart[i]->getPrice();
    }
	
    std::cout << "The total number of items in your cart: " << book+mag+cd+other << std::endl;
    std::cout << "The total number of Books in your cart: " << book << std::endl;
    std::cout << "The total number of CDs in your cart: " << cd << std::endl;
    std::cout << "The total number of Magazines in your cart: " << mag << std::endl;
    std::cout << "The total number of Other items in your cart: " << other << std::endl << std::endl;
    
    std::cout << "The total price of all these items combines is: " << total << std::endl;
}

//destructor of the shopping cart
ShoppingCart::~ShoppingCart()
{
    
}
