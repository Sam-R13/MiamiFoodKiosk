/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   specialItem.cpp
 * Author: Sam Rabe
 * Email: rabesj@miamioh.edu, CoolJ_OW@outlook.com
 * This file is to be used in conjunction with menuItem.h, to successfully perform the logic of ordering food at Miami campus food locations
 */

#ifndef SPECIALITEM_CPP
#define SPECIALITEM_CPP

#include <cstdlib>
#include <string>
#include "menuItem.h"


class specialItem : public menuItem {
    

 specialItem(std::string name, float price)
    : menuItem(name, price) { }

private:
    
    
};

#endif