#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "player.h"
#include "bandit.h"
#include "bandit_pro.h"
#include "bandit_pro_max.h"
#include "ultra_bandit_pro_max.h"


using namespace std;

Player objP;

int num;
int lucky_num = 50;

void battle_func1();

int main(){
  vector<string> Inventory;
  vector<int> Wallet;
  cout << "Добро пожаловать в Damage simulator!!!\n";
  cout << "Азъ есмъ бог всея этого симулятора.\n";
  cout << "Можешь. Шучу. Будешь называть меня - Мастер." << endl;
  cout << "Я даю тебе возможность ввести своё имя или ник.\n";
  cout << "Воспользуйся ей. В ином случае тебе ничего не остаётся,\n";
  cout << "кроме как закрыть это окно.\n";
  cout << ">>";
    cin >> objP.name;
    objP.HP = 20;
  cout << "Молодец, " << objP.name << "." << endl;
  cout << objP.name << ", ты объективно днище." << endl;

    if(objP.name == "Данил"){
      cout << "Сома посуди. Ты только вошёл в игру.\n";
      cout << "Оружия у тебя нет. Жизней не много. Кефир умер." << endl;
    }
    else{
      cout << "Сам посуди. Ты только вошёл в игру.\n";
      cout << "Оружия у тебя нет. Жизней не много." << endl;
    }

  cout << "Чтобы ты в битве с первым противником не отправился к праотцам,\n";
  cout << "Я дам тебе эту дубинку.\n";

    Inventory.push_back("дубинка");
    objP.weapon = "дубинка";

    if(Inventory[0] == "дубинка"){
      objP.dmg = 2;
      cout << ">>";
      cout << "*Ты получил дубинку*" << endl;
    }

  cout << "Потом ты сможешь купить себе новое оружие.\n";
  cout << "С противников падают монетки. Чем сильнее противник,\n";
  cout << "тем больше шансов у тебя получить больше монеток." << endl;
  cout << "Так как ты нищие днище, Я пожертвую тебе 5 монеток." << endl;

    Wallet.push_back(5);
    if(Wallet[0] == 5){
      cout << ">>";
      cout << "*У тебя " << Wallet[0] << " монет*" << endl;
    }

    cout << "Ладно, " << objP.name << " не будем забывать, что ты всё ещё днище.\n";
    cout << "Для начала, Я дам тебе самого слабейшего противника из этой части.";
    num = 1;
      battle_func1();

      if(objP.HP > 0){
        cout << "Ладно, днище. Для первого раза не плохо." << endl;
        cout << "Смотри, что могу. Вжух и у тебя уже полное HP." << endl;
        objP.HP = 20;
        cout << "HP: " << objP.HP << endl;
      }

      if(objP.HP <=0){
        cout << "Ну днище и днище. Зачем растраиваться." << endl;
        cout << "Смотри, что могу. Вжух и у тебя уже полное HP." << endl;
        objP.HP = 20;
        cout << "HP: " << objP.HP << endl;
      }

      cout << "\nЯ полагаю ты хочешь, чтобы тебя унизили.\n";
      cout << "Что же, не смею препятствовать." << endl;
      cout << "Только позволь, я повышу тебе удачу.\n";
      cout << "Твой Мастер всё же существует, пока сущестуешь ты - днище." << endl;
      lucky_num = 0;
      cout << "1)Бандит-чмо\n";
      cout << "2)Бандит\n";
      cout << "3)Бандит, который сделает тебя чмом\n";
      cout << "4)Бандит, который тебя уничтожит" << endl;
      cout << ">>";
      cin >> num;
      battle_func1();
  return 0;
}

//Функция, которая выводит процесс боя:


void battle_func1(){
  random_device rd{};
  default_random_engine e{rd()}; //Создание генератора случайности
  uniform_int_distribution<int> d{1,100}; //Создание распределения с минимальным и максимальным значениями

Bandit objB;
Bandit_Pro objBP;
Bandit_Pro_Max objBPM;
Ultra_Bandit_Pro_Max objUBPM;

  switch(num){
    case 1:{
      objB.present();
    }
    break;

    case 2:{
    objBP.present();
    }
    break;

    case 3:{
    objBPM.present();
    }
    break;

    case 4:{
    objUBPM.present();
    }
    break;

    default:
    cout << "Ошибка" << endl;
  }

  for(int i = 0; i < 35; ++i){
    cout << "=";
  }

  cout << "\n";
  cout << "Количество твоего HP: " << objP.HP << ";" << endl;
  cout << "Твоё оружие: " << objP.weapon << ";" << endl;
  cout << "Твой урон: " << objP.dmg << ";" << endl;
  cout << endl;

  string answer;

  if(num == 1){
  while(objB.HP > 0 && objP.HP > 0){
  cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
  cout << ">>";
    cin >> answer;

    if(answer == "п"){
      cout << "Ты пропустил ход. Ты идиот?" << endl;

      if(d(e) > 50){
        objP.HP -= objB.dmg;
        cout << "У тебя осталось " << objP.HP << " HP" << endl;
      }
      else{
        cout << "Промах противника." << endl;
      }
    }
    else
    if(answer == "у"){
      if(d(e) > lucky_num){
        objB.HP -= objP.dmg;
        cout << "У противника осталось " << objB.HP << " HP" << endl;
      }
      else{
        cout << "Промах." << endl;
      }

      if(d(e) > 50){
        objP.HP -= objB.dmg;
        cout << "У тебя осталось " << objP.HP << " HP" << endl;
      }
      else{
        cout << "Промах противника." << endl;
      }
    }

    if(objP.HP <= 0){
      cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
      cout << objB.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
    }

    if(objB.HP <= 0){
      cout << objB.name << " отошёл в мир иной." << endl;
      cout << "Просто повезло, не зазнавайся." << endl;
    }
  }
}
  if(num ==2){
  while(objBP.HP > 0 && objP.HP > 0){
  cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
  cout << ">>";
    cin >> answer;

    if(answer == "п"){
      cout << "Ты пропустил ход. Ты идиот?" << endl;

      if(d(e) > 50){
        objP.HP -= objBP.dmg;
        cout << "У тебя осталось " << objP.HP << " HP" << endl;
      }
      else{
        cout << "Промах противника." << endl;
      }
    }
    else
    if(answer == "у"){
      if(d(e) > lucky_num){
        objBP.HP -= objP.dmg;
        cout << "У противника осталось " << objBP.HP << " HP" << endl;
      }
      else{
        cout << "Промах." << endl;
      }

      if(d(e) > 50){
        objP.HP -= objBP.dmg;
        cout << "У тебя осталось " << objP.HP << " HP" << endl;
      }
      else{
        cout << "Промах противника." << endl;
      }
    }

    if(objP.HP <= 0){
      cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
      cout << objBP.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
    }

    if(objBP.HP <= 0){
      cout << objBP.name << " отошёл в мир иной." << endl;
      cout << "Просто повезло, не зазнавайся." << endl;
    }
  }
}

if(num == 3){
while(objBPM.HP > 0 && objP.HP > 0){
cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
cout << ">>";
  cin >> answer;

  if(answer == "п"){
    cout << "Ты пропустил ход. Ты идиот?" << endl;

    if(d(e) > 50){
      objP.HP -= objBPM.dmg;
      cout << "У тебя осталось " << objP.HP << " HP" << endl;
    }
    else{
      cout << "Промах противника." << endl;
    }
  }
  else
  if(answer == "у"){
    if(d(e) > lucky_num){
      objBPM.HP -= objP.dmg;
      cout << "У противника осталось " << objBPM.HP << " HP" << endl;
    }
    else{
      cout << "Промах." << endl;
    }

    if(d(e) > 50){
      objP.HP -= objBPM.dmg;
      cout << "У тебя осталось " << objP.HP << " HP" << endl;
    }
    else{
      cout << "Промах противника." << endl;
    }
  }

  if(objP.HP <= 0){
    cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
    cout << objBPM.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
  }

  if(objBPM.HP <= 0){
    cout << objBPM.name << " отошёл в мир иной." << endl;
    cout << "Просто повезло, не зазнавайся." << endl;
  }
}
}

if(num == 4){
while(objUBPM.HP > 0 && objP.HP > 0){
cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
cout << ">>";
  cin >> answer;

  if(answer == "п"){
    cout << "Ты пропустил ход. Ты идиот?" << endl;

    if(d(e) > 50){
      objP.HP -= objUBPM.dmg;
      cout << "У тебя осталось " << objP.HP << " HP" << endl;
    }
    else{
      cout << "Промах противника." << endl;
    }
  }
  else
  if(answer == "у"){
    if(d(e) > lucky_num){
      objUBPM.HP -= objP.dmg;
      cout << "У противника осталось " << objUBPM.HP << " HP" << endl;
    }
    else{
      cout << "Промах." << endl;
    }

    if(d(e) > 50){
      objP.HP -= objUBPM.dmg;
      cout << "У тебя осталось " << objP.HP << " HP" << endl;
    }
    else{
      cout << "Промах противника." << endl;
    }
  }

  if(objP.HP <= 0){
    cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
    cout << objUBPM.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
  }

  if(objUBPM.HP <= 0){
    cout << objUBPM.name << " отошёл в мир иной." << endl;
    cout << "Просто повезло, не зазнавайся." << endl;
  }
}
}

}
