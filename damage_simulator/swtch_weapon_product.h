#ifndef SWTCH_WEAPON_PRODUCT
#define SWTCH_WEAPON_PRODUCT
#include <iostream>
#include <string>
#include <vector>

using namespace std;

extern vector<int> Wallet;
extern vector<string> Inventory;
extern vector<string> Weapon_Store;
extern vector<string>::iterator WepS;
extern vector<string>::const_iterator s_iter;
extern int choose_product;
extern int choose_product_category;
extern int s_dmg;
extern string weapon;

void swtch_weapon_product();
#endif
