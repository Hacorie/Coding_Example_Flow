/*
Author: Nathan Perry
File: CD.h

Purpose:  Holds CD related methods and members
*/
#ifndef CD_H
#define CD_H

#include "Item.h"

#include <string>
#include <fstream>

class CD : public Item
{
    public:
        //Constructors
        CD();
        CD(std::string n, double p, std::string a, int y, int num, std::string lab);
        
        //Methods
        std::string getArtist();
        bool setArtist( std::string);
        
        int getYear();
        bool setYear(int);
        
        int getDisks();
        bool setDisks(int);
        
        std::string getLabel();
        bool setLabel(std::string);
        
        virtual void printInfo(std::ostream& out);
    
    //Member Data
    private:
        std::string artist;
        int releaseYear;
        int numDisks;
        std::string label;
 };
 #endif