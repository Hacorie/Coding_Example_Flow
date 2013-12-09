/*
Author: Nathan Perry
File: CD.cpp

Purpose:  Implementation file of CD Class
*/

#include "CD.h"
#include <iostream>

//Default contructor for a CD. Just initializes all values.
CD::CD()
{
    setName("");
    setPrice(0.0);
    setType("CD");
    artist = "";
    releaseYear = 0;
    numDisks = 0;
    label = "";
}

//Constructor for a CD. Initialized values based on user input.
CD::CD(std::string n, double p, std::string a, int y, int num, std::string lab)
{
    setName(n);
    setPrice(p);
    setType("CD");
    artist = a;
    releaseYear = y;
    numDisks = num;
    label = lab;
}

//Returns the artist of the CD
std::string CD::getArtist()
{
    return artist;
}

//Sets the artist of the CD
bool CD::setArtist( std::string a)
{
    artist = a;
    return true;
}

//Returns the Year the CD was released.
int CD::getYear()
{
    return releaseYear;
}

//Sets the year the CD was released.
bool CD::setYear(int y)
{
    releaseYear = y;
    return true;
}

//Returns the number of Disks that pertain to the CD.
int CD::getDisks()
{
    return numDisks;
}

//Sets the number of Disks that pertain to the CD.
bool CD::setDisks(int n)
{
    numDisks = n;
    return true;
}

//Returns the Record Label who produced the CD.
std::string CD::getLabel()
{
    return label;
}

//Sets the record label of the CD.
bool CD::setLabel(std::string l)
{
    label = l;
    return true;
}

//Print all infomration about the CD.
void CD::printInfo(std::ostream& out)
{
    out << "Title: " << getName() << std::endl << "Price: " << getPrice() << std::endl <<
        "Type: " << getType() << std::endl << "Artist: " << artist << std::endl <<
        "Release Year: " << releaseYear << std::endl << "Number of Disks: " << numDisks << std::endl <<
        "Label: " << label << std::endl << std::endl;
}
