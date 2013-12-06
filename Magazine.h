/*
Author: Nathan Perry
File: Book.h

Purpose:  Holds Magazine related methods and members
*/
#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <string>
#include "Item.h"

class Magazine : public Item
{
    public:
        Magazine();
        Magazine(std::string n, double p, std::string pub, int pc, int vol);
        
        std::string getPublisher();
        bool setPublisher(std::string);
        
        int getPageCount();
        bool setPageCount(int);
        
       int getVolume();
       bool setVolume(int);
       
       virtual void printInfo();
       
    private:
        std::string publisher;
        int pageCount;
        int volume;
};
#endif