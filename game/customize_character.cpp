#include <iostream>
#include <string>

using namespace std;

int main(){
  for(int i = 0; i < 80; ++i){
    cout << "#";
  }
  cout << endl;
  cout << "Ты перешёл в меню настройки персонажа." << endl;
  cout << ">Введи имя персонажа." << endl;
  cout << ">>";
  string name;
  getline(cin, name);
  cout << ">Введи фамилию персонажа." << endl;
  cout << ">>";
  string surname;
  getline(cin, surname);
  cout << "Введи отчество персонажа." << endl;
  string fathername;
  cout << ">>";
  getline(cin, fathername);
  cout << "Введи пол." << endl;
  string sex;
  cout << ">>";
  getline(cin, sex);
  return 0;
}
