#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>

using namespace std;

class Enemy{
public:
  string name;
  int HP;
  string weapon;
  int dmg;

  void present_bandit();
  void present_bandit_pro();
  void present_bandit_pro_max();
  void present_ultra_bandit_pro_max();
  void relife_bandit();
  void relife_bandit_pro();
  void relife_bandit_pro_max();
  void relife_ultra_bandit_pro_max();
};
#endif
