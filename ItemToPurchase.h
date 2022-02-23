/***********************************************************************************************
 *   Author:      Julian R.
 *   File:        ItemToPurchase.h
 *   Course:      CS 7B
 *   Assignment:  Project 1A: Online Shopping Cart, Part 1
 *   Date:        2-17-2022
 ***********************************************************************************************/

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(string t_name);
    string GetName() const;
    void SetPrice(int t_price);
    int GetPrice() const;
    void SetQuantity(int t_quantity);
    int GetQuantity() const;
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif