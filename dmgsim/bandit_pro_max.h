
using namespace std;

class Bandit_Pro_Max{
public:
  string name = "бандит, который сделает тебя чмом";
  int HP = 75;
  string weapon = "острый меч";
  int dmg = 10;

  void present(){
    cout << "Твой противник: " << name << ";" << endl;
    cout << "Количество HP: " << HP << ";" << endl;
    cout << "Оружие: " << weapon << ";" << endl;
    cout << "Урон: " << dmg << ";" << endl;
  }
};
