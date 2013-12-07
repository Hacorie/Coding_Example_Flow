/*
Author: Nathan Perry
File: ShoppingCart.h

Purpose: Class that holds operation of all Shopping Cart operations.
*/

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include <fstream>
#include "Item.h"

class ShoppingCart
{
	public:
		//Default constructor.
		ShoppingCart();

		//Add a single item to the shopping cart.
		bool addItem(Item *item);

		//Display the contents of the shopping cart to the screen.
		void displayCart(std::ostream &out);


		//Print out a brief summary of cart to the screen.
		void summarizeCart();

		//Destructor of the shopping cart.
		~ShoppingCart();

	private:
		std::vector<Item *> cart;   //shopping cart.
};
#endif