#ifndef PLAYER_INVENTORY_H
#define PLAYER_INVENTORY_H
#include <iostream>
#include <vector>

using namespace std;

extern vector<string> Inventory;
extern vector<string>::const_iterator s_iter;

void player_inventory();
#endif
