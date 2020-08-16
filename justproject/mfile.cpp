#include <iostream>
#include <string>
#include "cls.h"

using namespace std;

int main(){
  string name;
  while(true){
cout << "Введи своё имя, на русском please: ";
  cin >> name;

  Result obj;
  if(name == "Ваня"){
  obj.read_Result();
  }

  if(name == "Рустам"){
  obj.read_Result1();
  }

  if(name == "Гена"){
  obj.read_Result2();
  }

  if(name == "Данил"){
  obj.read_Result3();
  }

  if(name == "Рома"){
  obj.read_Result4();
  }
  }
  return 0;
}
