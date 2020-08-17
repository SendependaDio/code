
using namespace std;

class Bandit_Pro_Max{
public:
  string name = "Бандит, который сделает тебя чмом";
  int HP = 40;
  string weapon = "острый меч";
  int dmg = 10;

  void present(){
    cout << "Твой противник: " << name << ";" << endl;
    cout << "Количество HP: " << HP << ";" << endl;
    cout << "Оружие: " << weapon << ";" << endl;
    cout << "Урон: " << dmg << ";" << endl;
  }

  void relife(){
    HP = 40;
  }
};
