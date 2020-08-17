
using namespace std;

class Bandit_Pro{
public:
  string name = "Бандит";
  int HP = 30;
  string weapon = "меч";
  int dmg = 5;

  void present(){
    cout << "Твой противник: " << name << ";" << endl;
    cout << "Количество HP: " << HP << ";" << endl;
    cout << "Оружие: " << weapon << ";" << endl;
    cout << "Урон: " << dmg << ";" << endl;
  }

  void relife(){
    HP = 30;
  }
};
