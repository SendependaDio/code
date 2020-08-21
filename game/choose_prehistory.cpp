#include <iostream>
#include <string>

using namespace std;
int main(){
  string choose_pre;
  for(int i = 0; i < 80; ++i){
    cout << "#";
  }
  cout << endl;
  if(race == "человек"){
    cout << "Ты можешь выбрать одну из следующих предысторий:" << endl;
    for(int i = 0; i < 80; ++i){
      cout << "-";
    }
    cout << endl;
    cout << ">Знатный человек." << endl;
    cout << ">Горожанин." << endl;
    cout << ">Селянин." << endl;
    cout << ">>";
    getline(cin, choose_pre);
  }

  if(race == "эльф"){
    cout << "Ты можешь выбрать одну из следующих предысторий:" << endl;
    for(int i = 0; i < 80; ++i){
      cout << "-";
    }
    cout << endl;
    cout << ">Знатный эльф." << endl;
    cout << ">Лесной эльф." << endl;
    cout << ">>";
    getline(cin, choose_pre);
  }

  if(race == "гном"){
    cout << "Ты можешь выбрать одну из следующих предысторий:" << endl;
    for(int i = 0; i < 80; ++i){
      cout << "-";
    }
    cout << endl;
    cout << ">Знатный гном." << endl;
    cout << ">Неприкасаемый." << endl;
    cout << ">Наземный гном." << endl;
    cout << ">>";
    getline(cin, choose_pre);
  }

  if(race == "орк"){
    cout << "Ты можешь выбрать одну из следующих предысторий:" << endl;
    for(int i = 0; i < 80; ++i){
      cout << "-";
    }
    cout << endl;
    cout << ">Городской орк." << endl;
    cout << ">Орк из племени." << endl;
    cout << ">>";
    getline(cin, choose_pre);
  }
  return 0;
}
