#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "player.h"
#include "bandit.h"
#include "bandit_pro.h"
#include "bandit_pro_max.h"
#include "ultra_bandit_pro_max.h"
#include "battle1.h"

using namespace std;

Player objP;
Bandit objB;
Bandit_Pro objBP;
Bandit_Pro_Max objBPM;
Ultra_Bandit_Pro_Max objUBPM;
int num;
int lucky_num = 50;
int elucky_num = 50;

vector<int> Wallet;

int main(){
  vector<string> Inventory;

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
        objP.dmg = 5;
        for(int i = 0; i <= 3; ++i){
          if(objP.HP > 0){
            cout << "1)Бандит-чмо;\n";
            cout << "2)Бандит;\n";
            cout << "3)Бандит, который сделает тебя чмом;\n";
            cout << "4)Бандит, который тебя уничтожит;" << endl;
            cout << ">>";
              cin >> num;
              battle_func1();
          }
        }

        if(objP.HP > 0)
        {
          cout << "Ты одолел 3 противников?!\n";
          cout << "Ты заслужил отдых.\n";
          cout << "Мир и без тебя не пропадёт." << endl;
        }
        else{
          cout << "Раненный лев остаётся львом.\n";
          cout << "А днище с мечом продолжает быть днищем." << endl;
        }
      }
      else{
        goto end;
      }
  end:
  return 0;
}
