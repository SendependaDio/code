#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "customize_race.h"
#include "customize_character.h"
#include "chapter_1.h"
using namespace std;
void chapter_1(){
  for(int i = 0; i < 80; ++i){
    cout << "#";
  }
  cout << endl;
  cout << ">Ты прибыл в отдалённый город N." << endl;
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << ">Неделю назад, вампиры устроили внутри его стен\n";
  this_thread::sleep_for(chrono::milliseconds(2000));
  cout << ">кровавую жатву." << endl;
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << ">Горожане теперь относятся очень настороженно к каждому,\n";
  this_thread::sleep_for(chrono::milliseconds(2000));
  cout << ">кого лично не знают." << endl;
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << ">Я советую тебе вести себя так,\n";
  this_thread::sleep_for(chrono::milliseconds(2000));
  cout << ">словно ты ничего не знаешь о случившемся здесь." << endl;
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << ">В город уже прибыло доверенное лицо императора." << endl;
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << ">Если узнаешь что-то важное, советую рассказать ему." << endl;
  this_thread::sleep_for(chrono::milliseconds(3000));
}
