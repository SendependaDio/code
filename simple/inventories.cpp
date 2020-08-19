#include <iostream>
#include <string>
#include <vector>

using namespace std;

void sendependa_dio(){
  vector<string> Inventory;
  Inventory.push_back("Манифест коммунистической партии");
  Inventory.push_back("Пролетарский компьютер");
  Inventory.push_back("Пролетарский интернет");

  for(int i = 0; i < Inventory.size(); ++i){
    cout << i+1 << ")" << Inventory[i] << endl;
  }
}

void gakawarstone(){
  vector<string> Inventory;
  Inventory.push_back("ВБА");
  Inventory.push_back("МБИ");
  Inventory.push_back("Буржуйский компьютер");
  Inventory.push_back("Пролетарский интернет");

  for(int i = 0; i < Inventory.size(); ++i){
    cout << i+1 << ")" << Inventory[i] << endl;
  }
}

void mi6gun(){
  vector<string> Inventory;
  Inventory.push_back("Манифест коммунистической партии");
  Inventory.push_back("Капитал");
  Inventory.push_back("Пролетарский компьютер");
  Inventory.push_back("Буржуйский интернет");

  for(int i = 0; i < Inventory.size(); ++i){
    cout << i+1 << ")" << Inventory[i] << endl;
  }
}

void Gena(){
  vector<string> Inventory;
  Inventory.push_back("Какие-то книги");
  Inventory.push_back("Буржуйский компьютер");
  Inventory.push_back("Буржуйский интернет");

  for(int i = 0; i < Inventory.size(); ++i){
    cout << i+1 << ")" << Inventory[i] << endl;
  }
}

int main(){
  int answer;
  while(true){
  cout << "\nЧей инвентарь ты хочешь просмотреть?" << endl;
  cout << "1)@sendependa_dio;\n";
  cout << "2)@gakawarstone;\n";
  cout << "3)@mi6gun;\n";
  cout << "4)@Гена." << endl;
  cout << ">>";
    cin >> answer;

    switch(answer){
      case 1:
      sendependa_dio();
      break;

      case 2:
      gakawarstone();
      break;

      case 3:
      mi6gun();
      break;

      case 4:
      Gena();
      break;

      default:
      cout << "Что-то пошло не так." << endl;
    }
  }
  return 0;
}
