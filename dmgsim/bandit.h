
using namespace std;

class Bandit{
public:
  string name = "бандит-чмо";
  int HP = 25;
  string weapon = "палка";
  int dmg = 1;

  void present(){
    cout << "Твой противник: " << name << ";" << endl;
    cout << "Количество HP: " << HP << ";" << endl;
    cout << "Оружие: " << weapon << ";" << endl;
    cout << "Урон: " << dmg << ";" << endl;
  }

};
