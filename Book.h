/*
Author: Nathan Perry
File: Book.h

Purpose:  Holds Book related methods and members
*/
#ifndef BOOK_H
#define BOOK_H

#include "Item.h"

#include <string>
#include <fstream>

class Book : public Item
{
    public:
        //Constructors
        Book();
        Book(std::string n, double p, std::string a, int pl, std::string is, std::string pub);
        
        //Methods
        std::string getAuthor();
        bool setAuthor(std::string);
        
        int getPages();
        bool setPages(int);
        
        std::string getISBN();
        bool setISBN(std::string);
        
        std::string getPublisher();
        bool setPublisher(std::string);
        
        virtual void printInfo(std::ostream& out);
    
    //Member data
    private:
        std::string author;
        int pageLength;
        std::string isbn;
        std::string publisher;
};
#endif