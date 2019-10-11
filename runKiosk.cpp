/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   runKiosk.cpp
 * Author: Sam Rabe
 * Email: rabesj@miamioh.edu, CoolJ_OW@outlook.com
 * The purpose of this project is to create a properly working program for the kiosks at my school's food halls to use for ordering
 * The ones that are currently in place have several semantic errors which I hope to fix
 * As of this version, I do not have access to the current source code for the kiosks, but I am looking into gaining access to said code
 * Created on October 9, 2019, 10:57 AM
 */

#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include "menuItem.h"

// typedef vector<menuItem> order;
// typedef map<category, menuItem> fullMenu;
using namespace std;

int main(int argc, char** argv) {
/* Start: waiting for user input to start an order
 * User started order, please enter name
 * Attach name to order, open menu (could take name from miami ID card)
 * From menu, user can:
 * -> addToOrder; -> removeItems; -> switchCategory; -> cancelOrder; -> pay
 *  addToOrder:
 *      -- This method has two cases: regularItem and specialItem
 *          -- regularItem: adds item to order, no customizations necessary
 *          -- specialItem: adds item to order, prompts user to choose from customizations, potentially of several categories
 *              -- The user shouldn't be able to add two of the same customization type, although it may be able to add two customizations from one category
 *              -- e.g., cannot add two onion toppings, but can add two customizations of the topping category
 *      -- This method should be able to handle both regularItems and specialItems from the same method call
 *  removeItems:
 *      -- This method has three cases: regularItem, specialItem, and customization
 *          -- regularItem: removes entire item from order
 *          -- specialItem: removes entire specialItem(including customizations) from order
 *          -- customization: removes a specific customization from the order, and returns to the ordering screen so user can pick a different customization
 *      -- This method should be able to handle regularItems, specialItems, and customizations from the same method call
 *  switchCategory:
 *      -- This method should change the category of the menu that is being printed to the screen, only at user request
 *      -- e.g., user selects "Breakfast Entrees", this method should remove the category that is currently outputted to the screen, and output the
 *         "Breakfast Entrees" instead.
 *  cancelOrder:
 *      -- This is essentially a reset method. It should clear the order of all items, and return to the start of the program
 *      -- This should automatically be done after a certain amount of inactivity (with a user prompt beforehand) to ensure that open orders don't stay open
 *         longer than they should
 *  pay:
 *      -- This method should take the user to the payment screen, where they have the option to pay with a credit card, with a Miami card, or with cash
 *          -- Credit card: hopefully can use the already implemented security logic, if not, this could take a while
 *          -- Miami card: see credit card
 *          -- Cash: Transfers order to cashier's computer, alerts staff that manual assistance is required. User can pay cashier and cashier can manually
 *             finish the check
 *      -- Upon successful completion of the pay method, the order should be sent to the kitchen and a receipt should be printed to the user
 *      -- The program should then return to the start
 */
   //  order currentOrder;
    // when(user.clicksMenuItem)
    
    // currentOrder.push_back(menuItem);
    
    return 0;
}

