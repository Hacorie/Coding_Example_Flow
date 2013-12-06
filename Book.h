/*
Author: Nathan Perry
File: Book.h

Purpose:  Holds Book related methods and members
*/

#include <string>

class Book : public Item
{
    public:
        Book();
        Book(std::string n, double p, std::string t, std::string a, int p, std::string is, std::string pub);
        
        std::string getAuthor();
        bool setAuthor(std::string);
        
        int getPages();
        bool setPages(int);
        
        std::string getISBN();
        bool setISBN(std::string);
        
        std::string getPublisher();
        bool setPublisher(std::string);
        
        void printInfo();
    
    private:
        std::string author;
        int pageLength;
        std::string isbn;
        std::string publisher;
};