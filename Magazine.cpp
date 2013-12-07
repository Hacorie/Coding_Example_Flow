#include "Magazine.h"
#include <iostream>

Magazine::Magazine()
{
    setName("");
    setPrice(0);
    setType("Magazine");
    publisher = "";
    pageCount = 0;
    volume = 0;
}

Magazine::Magazine(std::string n, double p, std::string pub, int pc, int vol)
{
    setName(n);
    setPrice(p);
    setType("Magazine");
    publisher = pub;
    pageCount = pc;
    volume = vol;
    
}
std::string Magazine::getPublisher()
{
    return publisher;
}

bool Magazine::setPublisher(std::string p)
{
    publisher = p;
    return true;
}

int Magazine::getPageCount()
{
    return pageCount;
}

bool Magazine::setPageCount(int p)
{
    pageCount = p;
}

int Magazine::getVolume()
{
    return volume;
}

bool Magazine::setVolume(int v)
{
    volume = v;
}

void Magazine::printInfo(std::ostream& out)
{
    out << "Title: " << getName() << std::endl << "Price: " << getPrice() << std::endl <<
        "Type: " << getType() << std::endl << "Publisher: " << publisher << std::endl <<
        "Page Count: " << pageCount << std::endl << "Volume: " << volume << std::endl << std::endl;
}