/*
Author: Nathan Perry
File: Item.h

Purpose:  Base class for all item types.
          Holds methods and members that apply
          to all Item types
 */
#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <fstream>

class Item
{
    public:

        //default constructor
        Item();

        //constructor if provided data
        Item(std::string, double);

        //get the name of the current item
        std::string getName();

        //set the name of the current item
        bool setName(std::string);

        //get the price of the current item
        double getPrice();

        //set the price of the current object
        bool setPrice(double);

        std::string getType();

        bool setType(std::string);

        virtual void printInfo(std::ostream& out);

    private:
        std::string name;	//name of the item
        double price;       //price of the item
        std::string type;
};
#endif
