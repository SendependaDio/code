#include <iostream>
#include <string>
#include "store.h"

using namespace std;

void store_menu(){
  Weapon_Store.push_back("1)Клинок(4м)");
  Weapon_Store.push_back("2)Меч(6м)");
  Weapon_Store.push_back("3)Острейший клинок(8м)");
  Weapon_Store.push_back("4)Острейший меч(10м)");
  Weapon_Store.push_back("5)Клинок убийцы(12м)");
  Weapon_Store.push_back("6)Меч наёмника(14м)");
  Weapon_Store.push_back("7)Испытанный клинок убийцы(16м)");
  Weapon_Store.push_back("8)Меч удачного наёмника(18м)");

  for(int i = 0; i < 80; ++i){
    cout << "=";
  }
  cout << endl;
  cout << "1)Оружие;\n";
  cout << "2)Здоровье;\n";
  cout << "3)Удача." << endl;
  cout << ">>";
    cin >> choose_product_category;

    switch(choose_product_category){
      case 1:{
        cout << "Список:\n";
        for(s_iter = Weapon_Store.begin(); s_iter != Weapon_Store.end(); ++s_iter){
          cout << *s_iter;
          cout << endl;
        }
        for(int i = 0; i < 80; ++i){
          cout << "-";
        }
        cout << endl;
        cout << "Что хочешь купить?\n";
        cout << ">>";
        cin >> choose_product;
        swtch_weapon_product();
      }
      break;

      //case 2:
      //break;

      //case 3:
      //break;

      default:
      cout << "Ошибка." << endl;
    }
}
