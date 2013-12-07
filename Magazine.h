/*
Author: Nathan Perry
File: Magazine.h

Purpose:  Holds Magazine related methods and members
*/
#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "Item.h"

#include <string>
#include <fstream>

class Magazine : public Item
{
    public:
    
        //Constructors
        Magazine();
        Magazine(std::string n, double p, std::string pub, int pc, int vol);
        
        //Methods
        std::string getPublisher();
        bool setPublisher(std::string);
        
        int getPageCount();
        bool setPageCount(int);
        
        int getVolume();
        bool setVolume(int);
       
        virtual void printInfo(std::ostream& out);
    
    //Member Data
    private:
        std::string publisher;
        int pageCount;
        int volume;
};
#endif