#include "CD.h"
#include <iostream>

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

std::string CD::getArtist()
{
    return artist;
}

bool CD::setArtist( std::string a)
{
    artist = a;
    return true;
}

int CD::getYear()
{
    return releaseYear;
}

bool CD::setYear(int y)
{
    releaseYear = y;
    return true;
}

int CD::getDisks()
{
    return numDisks;
}

bool CD::setDisks(int n)
{
    numDisks = n;
}

std::string CD::getLabel()
{
    return label;
}

bool CD::setLabel(std::string l)
{
    label = l;
}

void CD::printInfo()
{
    std::cout << "Title: " << getName() << std::endl << "Price: " << getPrice() << std::endl <<
        "Type: " << getType() << std::endl << "Artist: " << artist << std::endl <<
        "Release Year: " << releaseYear << std::endl << "Number of Disks: " << numDisks << std::endl <<
        "Label: " << label << std::endl << std::endl;
}