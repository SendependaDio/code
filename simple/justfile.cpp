#include <iostream>

using namespace std;

void Vano(){
  string name, name1, name2, name3, name4;
  cout << "Введите первое имя: ";
    cin >> name;
  cout << "Введите второе имя: ";
    cin >> name1;
  cout << "Введите третье имя: ";
    cin >> name2;
  cout << "Введите четвёртое имя: ";
    cin >> name3;
  cout << "Введите пятое имя: ";
    cin >> name4;

  cout << "Ваши имена: " << name << " " << name1 << " " << name2 << " " << name3 << " " << name4 << endl;
}

int main(){
  Vano();
  return 0;
}
