#include <iostream>
#include <string>
#include "swtch_weapon_product.h"

using namespace std;

void swtch_weapon_product(){
  switch(choose_product){
    case 1:{
      if(Wallet[0] >= 4){
        cout << "Ты приобрёл клинок." << endl;
        Inventory.push_back("клинок");
        //weapon = "клинок";
        s_dmg = 5;
        Wallet[0] -=4;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    case 2:{
      if(Wallet[0] >= 6){
        cout << "Ты приобрёл меч." << endl;
        Inventory.push_back("меч");
        //weapon = "меч";
        s_dmg = 7;
        Wallet[0] -=6;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    case 3:{
      if(Wallet[0] >= 8){
        cout << "Ты приобрёл острейший клинок." << endl;
        Inventory.push_back("острейший клинок");
        //weapon = "острейший клинок";
        s_dmg = 10;
        Wallet[0] -= 8;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    case 4:{
      if(Wallet[0] >= 10){
        cout << "Ты приобрёл острейший меч." << endl;
        Inventory.push_back("острейший меч");
        //weapon = "острейший меч";
        s_dmg = 12;
        Wallet[0] -= 10;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    case 5:{
      if(Wallet[0] >= 12){
        cout << "Ты приобрёл клинок убийцы." << endl;
        Inventory.push_back("клинок убийцы");
        //weapon = "клинок убийцы";
        s_dmg = 15;
        Wallet[0] -= 12;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    case 6:{
      if(Wallet[0] >= 14){
        cout << "Ты приобрёл меч наёмника." << endl;
        Inventory.push_back("меч наёмника");
      //weapon = "меч наёмника";
        s_dmg = 17;
        Wallet[0] -=14;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    case 7:{
      if(Wallet[0] >= 16){
        cout << "Ты приобрёл испытанный клинок убийцы." << endl;
        Inventory.push_back("испытанный клинок убийцы");
        //weapon = "испытанный клинок убийцы";
        s_dmg = 20;
        Wallet[0] -= 16;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    case 8:{
      if(Wallet[0] >= 18){
        cout << "Ты приобрёл меч удачного наёмника." << endl;
        Inventory.push_back("меч удачного наёмника");
        //weapon = "меч удачного наёмника";
        s_dmg = 22;
        Wallet[0] -= 18;
      }
      else{
        cout << "У тебя недостаточно денег." << endl;
      }
    }
    break;

    default:
    cout << "Что-то пошло не так." << endl;
  }
}
