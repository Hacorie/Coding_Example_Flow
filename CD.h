/*
Author: Nathan Perry
File: Book.h

Purpose:  Holds CDrelated methods and members
*/
#ifndef CD_H
#define CD_H
#include <string>
#include "Item.h"

class CD : public Item
{
    public:
        CD();
        CD(std::string n, double p, std::string a, int y, int num, std::string lab);
        
        std::string getArtist();
        bool setArtist( std::string);
        
        int getYear();
        bool setYear(int);
        
        int getDisks();
        bool setDisks(int);
        
        std::string getLabel();
        bool setLabel(std::string);
        
        virtual void printInfo();
        
    private:
        std::string artist;
        int releaseYear;
        int numDisks;
        std::string label;
 };
 #endif