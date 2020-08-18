using namespace std;

extern vector<string> Inventory;
extern vector<string>::iterator inv_c;
extern vector<string>::const_iterator inv;

void player_inventory(){
  for(int i = 0; i < 80; ++i){
    cout << "=";
  }
  cout << endl;

  cout << "Инвентарь:\n";
  for(inv = Inventory.begin(); inv != Inventory.end(); ++inv){
    cout << *inv;
    cout << endl;
  }

  for(int i = 0; i < 80; ++i){
    cout << "=";
  }
}
