/*
Author: Nathan Perry
File: Book.h

Purpose:  Holds CDrelated methods and members
*/

#include <string>

class CD : public Item
{
    public:
        CD();
        Book(std::string n, double p, std::string t, std::string a, int y, int num, std::string lab);
        
        std::string getArtist();
        bool setArtist( std::string);
        
        int getYear();
        bool setYear(int);
        
        int getDisks();
        bool setDisks(int);
        
        std::string getLabel();
        bool setLabel(std::string);
        
        void printInfo();
        
    private:
        std::string artist;
        int releaseYear;
        int numDisks;
        std::string label
 };