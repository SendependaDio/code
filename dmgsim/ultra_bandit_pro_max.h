
using namespace std;

class Ultra_Bandit_Pro_Max{
public:
  string name = "Бандит, который тебя уничтожит";
  int HP = 50;
  string weapon = "обосраться, какой острый меч";
  int dmg = 15;

  void present(){
    cout << "Твой противник: " << name << ";" << endl;
    cout << "Количество HP: " << HP << ";" << endl;
    cout << "Оружие: " << weapon << ";" << endl;
    cout << "Урон: " << dmg << ";" << endl;
  }

  void relife(){
    HP = 50;
  }
};
//Если вы сюда зашли, тврщ. Значит вам стало любопытно. Тврщ, вы машина.
//Тврщ, вы таки снова здесь.
//Тврщ, я смотрю вы решили сюда заглянуть
