#include "Item.h"
#include <iostream>

//default constructor
Item::Item()
{
	name = "";
	price = 0.0;
	type = "default item";
}

//constructor if provided data
Item::Item(std::string n, double p)
{
	name = n;
	price = p;
	type = "default item";
}

//get the name of the current item
std::string Item::getName()
{
	return name;
}

//set the name of the current item
bool Item::setName(std::string n)
{
	name = n;
	return true;
}

//get the price of the current item
double Item::getPrice()
{
	return price;
}

//set the price of the current object
bool Item::setPrice(double p)
{
	price = p;
}

std::string Item::getType()
{
	return type;
}

bool Item::setType(std::string t)
{
	type = t;
}

void Item::printInfo()
{
    std::cout << "Item Name: " << name << std::endl <<
			"Item Price: "<< price  << std::endl <<
			"Item Type: " << type << std::endl << std::endl;
}

//destructor
Item::~Item()
{

}
