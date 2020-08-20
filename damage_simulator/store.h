#ifndef STORE_H
#define STORE_H
#include <iostream>
#include <vector>
#include "swtch_weapon_product.h"

using namespace std;

extern vector<int> Wallet;
extern vector<string> Inventory;
extern vector<string> Weapon_Store;
extern vector<string>::const_iterator s_iter;
extern int choose_product;
extern int choose_product_category;

void store_menu();
#endif
