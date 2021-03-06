#include <iostream>
#include <string>
#include "enemy.h"

void Enemy::present_bandit(){
  name = "Бандит-чмо";
  HP = 20;
  weapon = "палка";
  dmg = 1;
  cout << "Твой противник: " << name << ";" << endl;
  cout << "Количество HP: " << HP << ";" << endl;
  cout << "Оружие: " << weapon << ";" << endl;
  cout << "Урон: " << dmg << ";" << endl;
}

void Enemy::present_bandit_pro(){
  name = "Бандит";
  HP = 30;
  weapon = "меч";
  dmg = 5;
  cout << "Твой противник: " << name << ";" << endl;
  cout << "Количество HP: " << HP << ";" << endl;
  cout << "Оружие: " << weapon << ";" << endl;
  cout << "Урон: " << dmg << ";" << endl;
}

void Enemy::present_bandit_pro_max(){
  name = "Бандит, который сделает тебя чмом";
  HP = 40;
  weapon = "острый меч";
  dmg = 10;
  cout << "Твой противник: " << name << ";" << endl;
  cout << "Количество HP: " << HP << ";" << endl;
  cout << "Оружие: " << weapon << ";" << endl;
  cout << "Урон: " << dmg << ";" << endl;
}

void Enemy::present_ultra_bandit_pro_max(){
  name = "Бандит, который тебя уничтожит";
  HP = 50;
  weapon = "обосраться, какой острый меч";
  dmg = 15;
  cout << "Твой противник: " << name << ";" << endl;
  cout << "Количество HP: " << HP << ";" << endl;
  cout << "Оружие: " << weapon << ";" << endl;
  cout << "Урон: " << dmg << ";" << endl;
}

void Enemy::relife_bandit(){
  HP = 20;
}

void Enemy::relife_bandit_pro(){
  HP = 30;
}

void Enemy::relife_bandit_pro_max(){
  HP = 40;
}

void Enemy::relife_ultra_bandit_pro_max(){
  HP = 50;
}
