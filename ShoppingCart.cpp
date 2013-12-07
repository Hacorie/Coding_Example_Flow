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
	std::cout << "To be determined later" << std::endl;
}

//destructor of the shopping cart
ShoppingCart::~ShoppingCart()
{
    
}
