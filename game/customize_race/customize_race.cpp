#include <iostream>
#include <string>
#include "customize_race.h"
using namespace std;

void customize_race(){
  for(int i = 0; i < 80; ++i){
    cout << "#";
  }

  cout << endl;
  cout << ">Ты перешёл в меню выбора расы персонажа." << endl;
  cout << ">Ты можешь вписать любую расу." << endl;
  cout << ">Но для полного погружения в сюжет," << endl;
  cout << ">советую обратиться к данному списку:" << endl;

  for(int i = 0; i < 80; ++i){
    cout << "-";
  }

  cout << endl;
  cout << ">человек;" << endl;
  cout << ">эльф;" << endl;
  cout << ">гном;" << endl;
  cout << ">орк;" << endl;

  for(int i = 0; i < 80; ++i){
    cout << "-";
  }

  cout << ">>";
  getline(cin, race);
  cout << ">Выбрана раса: " << race << endl;
}
