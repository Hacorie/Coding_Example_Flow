/*
Author: Nathan Perry
File: Item.cpp

Purpose:  Implementation file for Item Class
 */

#include "Item.h"
#include <iostream>

//Default constructor.
Item::Item()
{
    name = "";
    price = 0.0;
    type = "default item";
}

//Constructor if provided data.
Item::Item(std::string n, double p)
{
    name = n;
    price = p;
    type = "unknown";
}

//Returns the name of the current item.
std::string Item::getName()
{
    return name;
}

//Sets the name of the current item.
bool Item::setName(std::string n)
{
    name = n;
    return true;
}

//Returns the price of the current item.
double Item::getPrice()
{
    return price;
}

//Sets the price of the current item.
bool Item::setPrice(double p)
{
    price = p;
    return true;
}

//Returns the type of the current item.
std::string Item::getType()
{
    return type;
}

//Sets the type of the current item.
bool Item::setType(std::string t)
{
    type = t;
    return true;
}

//Prints all info about an item.
void Item::printInfo(std::ostream& out)
{
    out << "Item Name: " << name << std::endl <<
        "Item Price: "<< price  << std::endl <<
        "Item Type: " << type << std::endl << std::endl;
}
