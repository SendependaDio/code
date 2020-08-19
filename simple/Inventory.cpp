#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  string answer;
  //Объявляю вектор. В угловых скобках пишу его тип. Следом название вектора:
  vector<string> inventory;
  //Добавляю в вектор новый... что-то новое:
  inventory.push_back("меч");
  inventory.push_back("карта");
  inventory.push_back("зелье");
  inventory.push_back("старая монета");
  //Вывожу строку, в которой сообщается количество предметов в инвентаре:
  cout << "В твоём инвентаре " << inventory.size() << " предмета." << endl;
  cout << "Твоё барахло:\n";
  //Цикл, который будет исполняться пока объявленная переменная соответствует требованию. ++i увеличивает значение переменноё на 1:
  for(unsigned int i = 0; i < inventory.size(); ++i){
    //Если что объясню текстом в телеграме:
    cout << inventory[i] << endl;
  }
  //Предлагаю выбор:
  cout << "Ты хочешь поменять меч на боевой топор?(yes/no)" << endl;
  cout << ">>";
    cin >> answer;

    if(answer == "yes"){
        cout << "Ты поменял свой меч на боевой топор." << endl;
        //Меч был первым, а следовательно под цифрой 0. Здесь присвоили новое значение и меч заменился боевым топором:
        inventory[0] = "боевой топор";
        cout << "Твоё барахло:\n";
        for(unsigned int i = 0; i < inventory.size(); ++i){
          cout << inventory[i] << endl;
        }
      }
      else{
        cout << "Ты отказался устраивать обмен." << endl;
        cout << "Твоё барахло:\n";
        for(unsigned int i = 0; i < inventory.size(); ++i){
          cout << inventory[i] << endl;
        }
      }

      cout << "Ты потерял старую монету. Куда деваться, как говориться." << endl;
      //Удаляется самый последний предмет в инвентаре:
      inventory.pop_back();

      cout << "Твоё барахло:\n";
      for(unsigned int i = 0; i < inventory.size(); ++i){
        cout << inventory[i] << endl;
      }

      cout << "Ты попался как дешёвая ДЕШЁВКА!!!\n";
      cout << "Всё твоё барахло украли.\n";
      //Колесо сломалось! Проклятущее колесо сломалось!!! P.S. Цицерон из Скайрима
      cout << "Барахло украли! Проклятущее барахло украли!!!" << endl;
      //Инвентарь очищается:
      inventory.clear();
      //Если инвентарь пустой, то:
      if(inventory.empty()){
        cout << "Переиграли и уничтожили." << endl;
      }
      //Если почему-то нет, то:
      else{
        cout << "Переиграли, но не уничтожили." << endl;
      }
  return 0;
}
