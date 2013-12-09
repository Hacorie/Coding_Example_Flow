/*
Author: Nathan Perry
File: Book.cpp

Purpose:  Implementation of the Book Class
*/

#include "Book.h"
#include <iostream>

//Default Constructor for a Book Object; Just initializing all member data
Book::Book()
{
    setName("");
    setPrice(0.0);
    setType("Book");
    author = "";
    pageLength = 0;
    isbn = "";
    publisher = "";
}

//Constructor for a Book object initializing all values from input from user 
Book::Book(std::string n, double p,  std::string a, int pl, std::string is, std::string pub)
{
    setName(n);
    setPrice(p);
    setType("Book");
    author = a;
    pageLength = pl;
    isbn = is;
    publisher = pub;
}

//Return the author of this book to the user
std::string Book::getAuthor()
{
    return author;
}

//Set the Author of the current book.
bool Book::setAuthor(std::string a)
{
    author = a;
    return true;
}

//Return the number of pages in the book to the user.
int Book::getPages()
{
    return pageLength;
}

//Set the number of pages of the current book.
bool Book::setPages(int p)
{
    pageLength = p;
    return true;
}

//Return the ISBN of the book back to the user.
std::string Book::getISBN()
{
    return isbn;
}

//Set the ISBN of the book.
bool Book::setISBN(std::string i)
{
    isbn = i;
    return true;
}

//Return the publisher of the book back to the user.
std::string Book::getPublisher()
{
    return publisher;
}

//Set the publisher of the current book.
bool Book::setPublisher(std::string p)
{
    publisher = p;
    return true;
}

//Print all information about the book.
void Book::printInfo(std::ostream& out)
{
    out << "Title: " << getName() << std::endl << "Price: " << getPrice() << std::endl <<
        "Type: " << getType() << std::endl << "Author: " << author << std::endl <<
        "Page Length: " << pageLength << std::endl << "ISBN: " << isbn << std::endl <<
        "Publisher: " << publisher << std::endl << std::endl;
}

