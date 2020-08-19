#include <iostream>
#include <string>
#include "cls.h"
using namespace std;
/*Result::Result(){
  show_Result();
}
*/
void Result::show_Result(){


    cout << "Введите пожалуйста своё имя.\n";
    cout << ">>";
      cin >> name;
        if(name == "Ваня"){
          ent = 100;
          grant = "есть";

        }

        if(name == "Рустам"){
          ent = 109;
          grant = "есть";

        }

        if(name == "Гена"){
          ent = 93;
          grant = "есть";

        }

        if(name == "Данил"){
          ent = 68;
          grant = "есть";

        }

        for(int i = 0; i < 40; ++i){
          cout << "=";
        }
        cout << "\n";

}

void Result::read_Result(){
      cout << "Количество набранных баллов на ЕНТ: " << ent << ";" << endl;
      cout << "Грант: " << grant << ";" << endl;
    }
