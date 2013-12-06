#include <iostream>

#include "Book.h"
#include "CD.h"
#include "Magazine.h"

#include "ShoppingCart.h"
using namespace std;

//TODO:
/*
    Make a simple Command Line UI with differnet choices
        add single item
        add multiple items
        delete an item ((maybe))
        print shopping list to screen
        print shopping list to file
        summarize contents of cart

    Add function to add a single item
    Add function to add different item types
    Add function to multiple items at a time
    
    //finish method to print to file
    //finish method to summarize cart (count each type of item, total price)
    //probably need to add in deletes
*/

int main()
{
    //create a shopping cart
    ShoppingCart cart;

    Item item("pewpew", 74.02);
    Item item2("pewpew", 74.02);
    Item item3("pewpew", 74.02);
    Item item4("pewpew", 74.02);
    Item item5("pewpew", 74.02);
    Item item6("pewpew", 74.02);
    
    Book b;
    Item *ip = &b;
    
    CD cd;
    Item *ip2 = &cd;
    
    Magazine mgzn;
    Item *ip3 = &mgzn;

    cart.addItem(&item);
    cart.addItem(&item2);
    cart.addItem(&item3);
    cart.addItem(&item4);
    cart.addItem(&item5);
    cart.addItem(&item6);
    cart.addItem(ip);
    cart.addItem(ip2);
    cart.addItem(ip3);

 
    cart.displayCart();

    return 0;

}
