/*
Author: Nathan Perry
File: ShoppingCart.h

Purpose: Class that holds operation of all Shopping Cart operations.
*/

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "Item.h"

class ShoppingCart
{
	public:
		//default constructor
		ShoppingCart();

		//add a single item to the shopping cart
		bool addItem(Item *item);

		//display the contents of the shopping cart to the screen
		void displayCart();

		//write the contents to of the shopping cart to a file. 
		//input: sting containing file name to write to
		void writeCartToFile(std::string filename);

		//print out a brief summary of cart to the screen
		void summarizeCart();

		//destructor of the shopping cart
		~ShoppingCart();

	private:
		std::vector<Item *> cart;
};
#endif