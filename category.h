/* 
 * File:   category.h
 * Author: Sam Rabe
 * Email: rabesj@miamioh.edu, CoolJ_OW@outlook.com
 * The purpose of this file is to create ItemLists of menuItems, titled categories.
 * Created on October 9, 2019, 2:39 PM
 */

#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>
#include <vector>
#include <algorithm>
#include "menuItem.h"

using ItemList = std::vector<menuItem>;

class Category {
public:
    Category(const std::string& catName = "") : name(catName) {}
    
    ItemList getCategory() { return items; }
    
    void addItem(menuItem item) { 
        if(std::find(items.begin(), items.end(), item) != items.end()) {
            items.push_back(item); 
        } else {
            std::cout << "Item already in category";
            return;
        }
    }
    
    bool removeItem(menuItem item) {
        if(contains(item)) {
            items.
        }
    }
private:
    std::string name;
    ItemList items;
};

#endif /* CATEGORY_H */