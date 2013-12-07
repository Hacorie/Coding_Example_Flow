#include "Book.h"
#include <iostream>

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
        
std::string Book::getAuthor()
{
    return author;
}

bool Book::setAuthor(std::string a)
{
    author = a;
    return true;
}

int Book::getPages()
{
    return pageLength;
}

bool Book::setPages(int p)
{
    pageLength = p;
    return true;
}

std::string Book::getISBN()
{
    return isbn;
}

bool Book::setISBN(std::string i)
{
    isbn = i;
}

std::string Book::getPublisher()
{
    return publisher;
}

bool Book::setPublisher(std::string p)
{
    publisher = p;
    return true;
}

void Book::printInfo(std::ostream& out)
{
        out << "Title: " << getName() << std::endl << "Price: " << getPrice() << std::endl <<
        "Type: " << getType() << std::endl << "Author: " << author << std::endl <<
        "Page Length: " << pageLength << std::endl << "ISBN: " << isbn << std::endl <<
        "Publisher: " << publisher << std::endl << std::endl;
}

