/*
Author: Nathan Perry
File: Magazine.cpp

Purpose:  Implementation file for the Magazine Class
 */

#include "Magazine.h"
#include <iostream>

//Default constructor. Initializing all member data.
Magazine::Magazine()
{
    setName("");
    setPrice(0);
    setType("Magazine");
    publisher = "";
    pageCount = 0;
    volume = 0;
}

//Constructor if provided data, initializing all member data from user input.
Magazine::Magazine(std::string n, double p, std::string pub, int pc, int vol)
{
    setName(n);
    setPrice(p);
    setType("Magazine");
    publisher = pub;
    pageCount = pc;
    volume = vol;

}

//Returns the publisher of the current magazine.
std::string Magazine::getPublisher()
{
    return publisher;
}

//Sets the Publisher of the current magazine.
bool Magazine::setPublisher(std::string p)
{
    publisher = p;
    return true;
}

//Returns the page count of the current magazine.
int Magazine::getPageCount()
{
    return pageCount;
}

//Sets the page count of the current magazine.
bool Magazine::setPageCount(int p)
{
    pageCount = p;
    return true;
}

//Returns the volume number of the current magazine.
int Magazine::getVolume()
{
    return volume;
}

//Sets the volume number of the current magazine.
bool Magazine::setVolume(int v)
{
    volume = v;
    return true;
}

//Print all info about a magazine.
void Magazine::printInfo(std::ostream& out)
{
    out << "Title: " << getName() << std::endl << "Price: " << getPrice() << std::endl <<
        "Type: " << getType() << std::endl << "Publisher: " << publisher << std::endl <<
        "Page Count: " << pageCount << std::endl << "Volume: " << volume << std::endl << std::endl;
}
