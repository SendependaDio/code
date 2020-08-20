#ifndef BATTLE1_H
#define BATTLE1_H
#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "enemy.h"

using namespace std;

extern Player objP;
extern Enemy obj_evil1;
extern Enemy obj_evil2;
extern Enemy obj_evil3;
extern Enemy obj_evil4;
extern int num;
extern int lucky_num;
extern int elucky_num;
extern vector<int> Wallet;

void battle_func1();
#endif
