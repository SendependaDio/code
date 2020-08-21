#include <iostream> //подключаю стандартную библиотеку, позволяющую выводить и вводить текст в консоли
#include <string> //подключаю стандартную библиотеку, позволяющую объявлять переменную типа string
#include <vector> //подключаю библиотеку STL, позволяющую работать с векторами
#include <random> //подключаю библиотеку, позволяющую добавить рандомчик
#include <chrono>
#include <thread>
#include "player.h" //подключаю собственную библиотеку
#include "enemy.h"
#include "battle1.h"
#include "store.h"
#include "player_inventory.h"
#include "equipment.h"

using namespace std;

Player objP;
Enemy obj_evil1;
Enemy obj_evil2;
Enemy obj_evil3;
Enemy obj_evil4;

int num;
int lucky_num = 50;
int elucky_num = 50;
int choose_product;
string choose_weapon;
int choose_product_category;
int s_dmg;
string weapon;
vector<int> Wallet;
vector<string> Inventory;
vector<string>::const_iterator s_iter;
vector<string> Weapon_Store;

int main(){
  Wallet.push_back(20);
  store_menu();
  player_inventory();
  player_equipment();

  cout << "Добро пожаловать в Damage simulator!!!\n";
  this_thread::sleep_for(chrono::milliseconds(2000));
  cout << "Азъ есмъ бог всея этого симулятора.\n";
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << "Можешь. Шучу. Будешь называть меня - Мастер." << endl;
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << "Я даю тебе возможность ввести своё имя или ник.\n";
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << "Воспользуйся ей. В ином случае тебе ничего не остаётся,\n";
  this_thread::sleep_for(chrono::milliseconds(3000));
  cout << "кроме как закрыть это окно.\n";
  cout << ">>";
    cin >> objP.name;
    objP.HP = 20;
    cout << "Молодец, " << objP.name << "." << endl;
    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << objP.name << ", ты объективно днище." << endl;

    if(objP.name == "Данил"){
      cout << "Сома посуди. Ты только вошёл в игру.\n";
      this_thread::sleep_for(chrono::milliseconds(3000));
      cout << "Оружия у тебя нет. Жизней не много. Кефир умер." << endl;
    }
    else{
      cout << "Сам посуди. Ты только вошёл в игру.\n";
      //cout << "Оружия у тебя нет. Жизней не много." << endl;
    }

    //cout << "Чтобы ты в битве с первым противником не отправился к праотцам,\n";
    //cout << "Я дам тебе эту дубинку.\n";
    //Inventory.push_back("дубинка");
    //objP.weapon = "дубинка";

    if(Inventory[0] == "дубинка"){
      objP.dmg = 2;
      cout << ">>";
      cout << "*Ты получил дубинку*" << endl;
    }

    cout << "Потом ты сможешь купить себе новое оружие.\n";
    cout << "С противников падают монетки. Чем сильнее противник,\n";
    cout << "тем больше шансов у тебя получить больше монеток." << endl;
    cout << "Так как ты нищие днище, Я пожертвую тебе 5 монеток." << endl;
    Wallet[0] += 5;
    cout << ">>";
    cout << "*У тебя " << Wallet[0] << " монет*" << endl;
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

    if(objP.HP <= 0){
      cout << "Ну днище и днище. Зачем растраиваться." << endl;
      cout << "Смотри, что могу. Вжух и у тебя уже полное HP." << endl;
      objP.HP = 20;
      cout << "HP: " << objP.HP << endl;
    }

    cout << "\nЯ полагаю ты хочешь, чтобы тебя унизили.\n";
    cout << "Что же, не смею препятствовать." << endl;
    cout << "Только позволь, я повышу тебе удачу.\n";
    cout << "Твой Мастер всё же существует, пока существуешь ты - днище." << endl;
    lucky_num = 100;
    cout << "Твоя удача: " << lucky_num << ";" << endl;
    cout << "1)Бандит-чмо;\n";
    cout << "2)Бандит;\n";
    cout << "3)Бандит, который сделает тебя чмом;\n";
    cout << "4)Бандит, который тебя уничтожит;" << endl;
    cout << ">>";
      cin >> num;
      battle_func1();

      if(objP.HP > 0){
        cout << "Хорошо. Теперь, бой на выживание. 3 раунда." << endl;
        cout << "Но, сперва понизим удачу, до начального уровня." << endl;
        lucky_num = 50;
        cout << "Твоя удача: " << lucky_num << ";" << endl;
        cout << "Ты смог победить двух противников.\n";
        cout << "Ты заслуживаешь поощрения.\n";
        cout << "Я даю тебе этот меч." << endl;
        Inventory.push_back("Зачарованный меч");
        cout << ">>";
        cout << "*Ты получил зачарованный меч.*" << endl;
        objP.weapon = "зачарованный меч";
        objP.HP = 25;
        objP.dmg = 20;
        for(int i = 0; i < 3; ++i){
          if(objP.HP > 0){
            cout << "1)Бандит-чмо;\n";
            cout << "2)Бандит;\n";
            cout << "3)Бандит, который сделает тебя чмом;\n";
            cout << "4)Бандит, который тебя уничтожит;" << endl;
            cout << ">>";
              cin >> num;
              battle_func1();
          }
          if(i == 3){
          cout << "Ты одолел 3 противников?!\n";
          cout << "Ты заслужил отдых.\n";
          cout << "Мир и без тебя не пропадёт." << endl;
          }
        }
      }
  return 0;
}
