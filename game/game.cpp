#include <iostream> //Стандартная библиотека ввода-вывода в консоль
#include <string> //Библиотека string
#include <vector> //Библиотека STL, позволяющая работать с векторами
#include <chrono> //Библиотки, позволяющие делать задержку вывода текста
#include <thread> //в консоль
//Подключаю заголовочныйе файлы:
#include "customize_race.h" //Выбор расы
#include "customize_character.h" //Настройка персонажа
#include "choose_prehistory.h" //Выбор предыстории
//Предыстории за человека:
#include "human_noble.h" //Знатный человек
#include "human_citizen.h" //Горожанин
#include "human_villager.h" //Селянин
//Предыстории за эльфа:
#include "elf_noble.h" //Знатный эльф
#include "elf_forest.h" //Лесной эльф
//Предыстории за гнома:
#include "gnome_noble.h" //Знатный гном
#include "gnome_untouchable.h" //Неприкасаемый гном P.S. Тврщ. Неприкасаемые это каста и все её представители самое дно
#include "gnome_overland.h" //Наземный гном
//Предыстории за орка:
#include "orc_citizen.h" //Орк гражданин
#include "orc_tribe.h" //Орк из племени

using namespace std; //Подключаю стандартное пространство имён

string race; //Объявляю глобальную переменную типа string, хранящую в себе
//введённую пользователем расу.
string name; //Объявляю глобальную переменную типа string, хранящую в себе имя
// персонажа, введённое пользователем.
string surname; //Объявляю глобальную переменную типа string, хранящую в себе
//фамилию персонажа, введённую пользователем.
string fathername; //Объявляю глобальную переменную типа string, хранящую в себе
//отчество персонажа, введённое пользователем.
string sex; //Объявляю глобальную переменную типа string, хранящую в себе пол
//персонажа введённый пользователем.
string choose_pre; // Объявляю глобальную переменную
int main(){//Открываю главную функцию
  customize_race();
  customize_character();
  choose_prehistory();
  //this_thread::sleep_for(chrono::milliseconds(1000));
  return 0;//Возвращаю значение 0, в случае успешной работы программы
}//Закрываю главную функцию
