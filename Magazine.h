/*
Author: Nathan Perry
File: Book.h

Purpose:  Holds Magazine related methods and members
*/

#include <string>

class Magazine : public Item
{
    public:
        Magazine();
        Magazine(std::string n, double p, std::string t, std::string p, int pc, int vol);
        
        std::string getPublisher();
        bool setPublisher(std::string);
        
        int getPageCount();
        bool setPageCount(int);
        
       int getVolume();
       bool setVolume(int);
       
       void printInfo();
       
    private:
        std::string publisher;
        int pageCount;
        int volume;
};