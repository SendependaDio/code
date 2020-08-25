#include <iostream>
#include <string>
#include "customize_character.h"
using namespace std;

void customize_character(){
  for(int i = 0; i < 80; ++i){
    cout << "#";
  }
  cout << endl;
  cout << "Ты перешёл в меню настройки персонажа." << endl;
  cout << ">Введи имя персонажа." << endl;
  cout << ">>";
  getline(cin, name);
  cout << ">Введи фамилию персонажа." << endl;
  cout << ">>";
  getline(cin, surname);
  cout << "Введи отчество персонажа." << endl;
  cout << ">>";
  getline(cin, fathername);
  cout << "Введи пол." << endl;
  cout << ">>";
  getline(cin, sex);
}
