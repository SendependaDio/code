
using namespace std;

class Bandit_Pro{
public:
  string name = "бандит";
  int HP = 50;
  string weapon = "меч";
  int dmg = 5;

  void present(){
    cout << "Твой противник: " << name << ";" << endl;
    cout << "Количество HP: " << HP << ";" << endl;
    cout << "Оружие: " << weapon << ";" << endl;
    cout << "Урон: " << dmg << ";" << endl;
  }
};
