#include <iostream>

using namespace std;

int main(){
  int a = 0;
  int c = 0;
  int d = 0;
  char b;
    cout << "Привет. Ты открыл калькулятор." << endl;
    cout << "Калькулятор поможет тебе складывать, вычитать, умножать и делить числа." << endl;
    cout << "Введи первое число, нужный тебе знак и второе число,\n";
    cout << "после чего нажми Enter." << endl;
    while(d != 0){
    cout << ">>";
      cin >> a;
      cin >> b;
      cin >> c;
        if(b == '+'){
          d = a+c;
          cout << ">>" << d << endl;
        }

        if(b == '-'){
          d = a-c;
          cout << ">>" << d << endl;
        }
        if(b == '*'){
          d = a*c;
          cout << ">>" << d << endl;
        }

        if(b == '/'){
          d = a/c;
          cout << ">>" << d << endl;
        }
      }
return 0;
}
