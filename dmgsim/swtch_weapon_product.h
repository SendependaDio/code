using namespace std;

extern vector<int> Wallet;
extern vector<string> Inventory;
extern vector<string>::const_iterator inv;
extern vector<string> Weapon_Store;
extern vector<string>::iterator WepS;
extern vector<string>::const_iterator CWepS;

extern int choose_product;
extern int choose_product_category;
extern int s_dmg;

void swtch_weapon_product(){
  switch(choose_product){
    case 1:{
      if(Wallet[0] >= 4){
        cout << "Ты приобрёл клинок." << endl;
        Inventory.push_back("клинок");
        s_dmg = 5;
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
        s_dmg = 7;
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
        s_dmg = 10;
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
        s_dmg = 12;
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
        s_dmg = 15;
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
        s_dmg = 17;
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
        s_dmg = 20;
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
        s_dmg = 22;
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
