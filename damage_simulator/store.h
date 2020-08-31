#ifndef STORE_H
#define STORE_H
#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "swtch_weapon_product.h"
#include "swtch_HP_product.h"

using namespace std;

extern vector<int> Wallet;
extern vector<string> Inventory;
extern vector<string> Weapon_Store;
extern vector<string>::const_iterator s_iter;
extern int choose_product;
extern int choose_product_category;
extern Player objP;

void store_menu();
#endif
