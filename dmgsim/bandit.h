
using namespace std;

class Bandit{
public:
  string name = "Бандит-чмо";
  int HP = 20;
  string weapon = "палка";
  int dmg = 1;

  void present(){
    cout << "Твой противник: " << name << ";" << endl;
    cout << "Количество HP: " << HP << ";" << endl;
    cout << "Оружие: " << weapon << ";" << endl;
    cout << "Урон: " << dmg << ";" << endl;
  }

  void relife(){
    HP = 20;
  }

};
