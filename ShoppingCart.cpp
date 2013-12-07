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
void ShoppingCart::displayCart()
{
    if(cart.size() == 0)
    {
        std::cout << "You currently have no items in your cart." << std::endl << std::endl;
        return;
    }
	for(int i = 0; i < cart.size(); i++)
	{
            cart[i]->printInfo();
    }
}

//write the contents to of the shopping cart to a file. 
//input: sting containing file name to write to
void ShoppingCart::writeCartToFile(std::string filename)
{
	std::ofstream ofs;
	ofs.open(filename.c_str());
	for(int i = 0; i < cart.size(); i++)
    {
        ofs  << cart[i]->getName() << std::endl <<
	        ofs << cart[i]->getPrice()  << std::endl <<
		    ofs << cart[i]->getType() << std::endl << std::endl;
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
