#include <iostream>

#include "ShoppingCart.h"
using namespace std;

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

    cart.addItem(item);
    cart.addItem(item2);
    cart.addItem(item3);
    cart.addItem(item4);
    cart.addItem(item5);
    cart.addItem(item6);

    cart.displayCart();

    return 0;

}
