#include <iostream>
#include <string>
#include "player_inventory.h"

using namespace std;

void player_inventory(){
  for(int i = 0; i < 80; ++i){
    cout << "=";
  }
  cout << endl;

  cout << "Инвентарь:\n";
  for(s_iter = Inventory.begin(); s_iter != Inventory.end(); ++s_iter){
    cout << *s_iter;
    cout << endl;
  }

  for(int i = 0; i < 80; ++i){
    cout << "=";
  }
}
