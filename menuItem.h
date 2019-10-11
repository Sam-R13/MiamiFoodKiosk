/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   menuItem.h
 * Author: Sam Rabe
 * Email: rabesj@miamioh.edu, CoolJ_OW@outlook.com
 * This file is to be used in conjunction with runKiosk.cpp, to successfully perform the logic of ordering food at Miami campus food locations
 * Created on October 9, 2019, 11:10 AM
 */

#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

class menuItem {
    // print data for a menu item on a given output stream
    friend std::ostream& operator<<(std::ostream& os, const menuItem& mi) {
        os << mi.name << ", " << mi.price;
        return os;
    }
    
    // Read data for a menu item from some input
    friend std::istream& operator>>(std::istream& is, menuItem& mi) {
        is >> std::quoted(mi.name) >> mi.price;
        return is;
    }
    
    friend bool operator== (const menuItem& menuItem1, const menuItem& menuItem2);
    friend bool operator!= (const menuItem& menuItem1, const menuItem& menuItem2);

public:
    // Default constructor would be needed for use with vectors etc. as 
    // a convenience.
    // The constructor
    menuItem(std::string name = "invalid", float price = -1) { 
        this->name = name; this->price = price; 
    }
    
    // Basic getter for the name variable
    std::string getName() const { return name; }
    
    // Basic getter for the price variable
    float getPrice() const { return price; }
        
private:
    // The name of the menuItem
    std::string name;
    
    // Float value of price of the menuItem
    float price;
};

bool operator==(const menuItem& menuItem1, const menuItem& menuItem2) {
    return(menuItem1.getPrice() == menuItem2.getPrice() && menuItem1.getName() == menuItem2.getName());
}

bool operator!=(const menuItem& menuItem1, const menuItem& menuItem2) {
    return !(menuItem1 == menuItem2);
}
#endif /* MENUITEM_H */

