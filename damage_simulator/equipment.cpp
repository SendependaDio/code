#include <iostream>
#include "equipment.h"

using namespace std;

void player_equipment(){
  cout << "Выбери, что хочешь экипировать:\n";
  cout << ">>";
  cin >> choose_weapon;

  for(int i = 0; i < Inventory.size(); ++i){
    if(choose_weapon == Inventory[i]){
      objP.weapon = Inventory[i];
      objP.dmg = s_dmg;
      cout << ">>>" << objP.weapon << " " << objP.dmg << "-урон";
      cout << endl;
    }
  }
}
