#include <iostream>
#include <string>
#include <vector>
#include "swtch_HP_product.h"

void swtch_hp(){
  cout << "1)Купить 1 ед. здоровья(1м)" << endl;
  cout << "2)Купить 5 ед. здоровья(5м)" << endl;
  cout << "3)Купить 10 ед. здоровья(10м)" << endl;
  cout << ">>";
  cin >> choose_product;

  switch(choose_product){
    case 1:{
      objP.HP += 1;
      Wallet[0] -= 1;
    }
    break;

    case 2:{
      objP.HP += 5;
      Wallet[0] -= 5;
    }
    break;

    case 3:{
      objP.HP +=10;
      Wallet[0] -= 10;
    }
    break;

    default:
    cout << "Что-то не так." << endl;
  }
}
