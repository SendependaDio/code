using namespace std;

 extern Player objP;
 extern Enemy obj_evil1;
 extern Enemy obj_evil2;
 extern Enemy obj_evil3;
 extern Enemy obj_evil4;
/*extern Bandit objB;
extern Bandit_Pro obj_evil2;
extern Bandit_Pro_Max obj_evil3;
extern Ultra_Bandit_Pro_Max obj_evil4;
*/

extern int num;
extern int lucky_num;
extern int elucky_num;

extern vector<int> Wallet;

void battle_func1(){
  random_device rd{};
  default_random_engine e{rd()}; //Создание генератора случайности
  uniform_int_distribution<int> d{1,100}; //Создание распределения с минимальным и максимальным значениями

  switch(num){
    case 1:{
      obj_evil1.present_bandit();
    }
    break;

    case 2:{
      obj_evil2.present_bandit_pro();
    }
    break;

    case 3:{
      obj_evil3.present_bandit_pro_max();
    }
    break;

    case 4:{
      obj_evil4.present_ultra_bandit_pro_max();
    }
    break;

    default:
      cout << "Ошибка" << endl;
    }

    for(int i = 0; i < 80; ++i){
      cout << "=";
    }

    cout << endl;
    cout << "Количество твоего HP: " << objP.HP << ";" << endl;
    cout << "Твоё оружие: " << objP.weapon << ";" << endl;
    cout << "Твой урон: " << objP.dmg << ";" << endl;
    cout << endl;

    string answer;
      if(num == 1){
        while(obj_evil1.HP > 0 && objP.HP > 0){
          cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
          cout << ">>";
            cin >> answer;

            if(answer == "п"){
              cout << "Ты пропустил ход. Ты идиот?" << endl;

              if(d(e) < elucky_num){
                objP.HP -= obj_evil1.dmg;
                cout << "У тебя осталось " << objP.HP << " HP" << endl;
              }
              else{
                cout << "Промах противника." << endl;
              }
            }

            if(answer == "у"){
              if(d(e) < lucky_num){
                obj_evil1.HP -= objP.dmg;
                cout << "У противника осталось " << obj_evil1.HP << " HP" << endl;
              }
              else{
                cout << "Промах." << endl;
              }

              if(d(e) < elucky_num){
                objP.HP -= obj_evil1.dmg;
                cout << "У тебя осталось " << objP.HP << " HP" << endl;
              }
              else{
                cout << "Промах противника." << endl;
              }
            }

            if(objP.HP <= 0){
              cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
              cout << obj_evil1.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
            }

            if(obj_evil1.HP <= 0){
              cout << obj_evil1.name << " отошёл в мир иной." << endl;
              cout << "Просто повезло, не зазнавайся." << endl;
              cout << "Ты получил монетку." << endl;
              Wallet[0] +=1;
              cout << ">>";
              cout << "*У тебя " << Wallet[0] << " монет*" << endl;
            }
          }
          obj_evil1.relife_bandit();
        }

        if(num ==2){
          while(obj_evil2.HP > 0 && objP.HP > 0){
            cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
            cout << ">>";
              cin >> answer;

              if(answer == "п"){
                cout << "Ты пропустил ход. Ты идиот?" << endl;

                if(d(e) < elucky_num){
                  objP.HP -= obj_evil2.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(answer == "у"){
                if(d(e) < lucky_num){
                  obj_evil2.HP -= objP.dmg;
                  cout << "У противника осталось " << obj_evil2.HP << " HP" << endl;
                }
                else{
                  cout << "Промах." << endl;
                }

                if(d(e) < elucky_num){
                  objP.HP -= obj_evil2.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(objP.HP <= 0){
                cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
                cout << obj_evil2.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
              }

              if(obj_evil2.HP <= 0){
                cout << obj_evil2.name << " отошёл в мир иной." << endl;
                cout << "Просто повезло, не зазнавайся." << endl;
                cout << "Ты получил 5 монеток." << endl;
                Wallet[0] +=5;
                cout << ">>";
                cout << "*У тебя " << Wallet[0] << " монет*" << endl;
              }
            }
            obj_evil2.relife_bandit_pro();
          }

          if(num == 3){
            while(obj_evil3.HP > 0 && objP.HP > 0){
              cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
              cout << ">>";
              cin >> answer;

              if(answer == "п"){
                cout << "Ты пропустил ход. Ты идиот?" << endl;

                if(d(e) < elucky_num){
                  objP.HP -= obj_evil3.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(answer == "у"){
                if(d(e) < lucky_num){
                  obj_evil3.HP -= objP.dmg;
                  cout << "У противника осталось " << obj_evil3.HP << " HP" << endl;
                }
                else{
                  cout << "Промах." << endl;
                }

                if(d(e) < elucky_num){
                  objP.HP -= obj_evil3.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(objP.HP <= 0){
                cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
                cout << obj_evil3.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
              }

              if(obj_evil3.HP <= 0){
                cout << obj_evil3.name << " отошёл в мир иной." << endl;
                cout << "Просто повезло, не зазнавайся." << endl;
                cout << "Ты получил 10 монеток." << endl;
                Wallet[0] +=10;
                cout << ">>";
                cout << "*У тебя " << Wallet[0] << " монет*" << endl;
              }
            }
            obj_evil3.relife_bandit_pro_max();
          }

          if(num == 4){
            while(obj_evil4.HP > 0 && objP.HP > 0){
              cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
              cout << ">>";
              cin >> answer;

              if(answer == "п"){
                cout << "Ты пропустил ход. Ты идиот?" << endl;

                if(d(e) < elucky_num){
                  objP.HP -= obj_evil4.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(answer == "у"){
                if(d(e) < lucky_num){
                  obj_evil4.HP -= objP.dmg;
                  cout << "У противника осталось " << obj_evil4.HP << " HP" << endl;
                }
                else{
                  cout << "Промах." << endl;
                }

                if(d(e) < elucky_num){
                  objP.HP -= obj_evil4.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(objP.HP <= 0){
                cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
                cout << obj_evil4.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
              }

              if(obj_evil4.HP <= 0){
                cout << obj_evil4.name << " отошёл в мир иной." << endl;
                cout << "Просто повезло, не зазнавайся." << endl;
                cout << "Ты получил 15 монеток." << endl;
                Wallet[0] +=15;
                cout << ">>";
                cout << "*У тебя " << Wallet[0] << " монет*" << endl;
              }
            }
            obj_evil4.relife_ultra_bandit_pro_max();
          }


        }
