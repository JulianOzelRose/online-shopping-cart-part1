/***********************************************************************************************
 *   Author:      Julian R.
 *   File:        ItemToPurchase.cpp
 *   Course:      CS 7B
 *   Assignment:  Project 1A: Online Shopping Cart, Part 1
 *   Date:        2-17-2022
 ***********************************************************************************************/

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

void ItemToPurchase::SetName(string t_name) {
    itemName = t_name;
}

string ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetPrice(int t_price) {
    itemPrice = t_price;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int t_quantity) {
    itemQuantity = t_quantity;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}