using namespace std;

extern Player objP;
extern Bandit objB;
extern Bandit_Pro objBP;
extern Bandit_Pro_Max objBPM;
extern Ultra_Bandit_Pro_Max objUBPM;
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
      objB.present();
    }
    break;

    case 2:{
      objBP.present();
    }
    break;

    case 3:{
      objBPM.present();
    }
    break;

    case 4:{
      objUBPM.present();
    }
    break;

    default:
      cout << "Ошибка" << endl;
    }

    for(int i = 0; i < 35; ++i){
      cout << "=";
    }

    cout << endl;
    cout << "Количество твоего HP: " << objP.HP << ";" << endl;
    cout << "Твоё оружие: " << objP.weapon << ";" << endl;
    cout << "Твой урон: " << objP.dmg << ";" << endl;
    cout << endl;

    string answer;
      if(num == 1){
        while(objB.HP > 0 && objP.HP > 0){
          cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
          cout << ">>";
            cin >> answer;

            if(answer == "п"){
              cout << "Ты пропустил ход. Ты идиот?" << endl;

              if(d(e) < elucky_num){
                objP.HP -= objB.dmg;
                cout << "У тебя осталось " << objP.HP << " HP" << endl;
              }
              else{
                cout << "Промах противника." << endl;
              }
            }

            if(answer == "у"){
              if(d(e) < lucky_num){
                objB.HP -= objP.dmg;
                cout << "У противника осталось " << objB.HP << " HP" << endl;
              }
              else{
                cout << "Промах." << endl;
              }

              if(d(e) < elucky_num){
                objP.HP -= objB.dmg;
                cout << "У тебя осталось " << objP.HP << " HP" << endl;
              }
              else{
                cout << "Промах противника." << endl;
              }
            }

            if(objP.HP <= 0){
              cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
              cout << objB.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
            }

            if(objB.HP <= 0){
              cout << objB.name << " отошёл в мир иной." << endl;
              cout << "Просто повезло, не зазнавайся." << endl;
              cout << "Ты получил монетку." << endl;
              Wallet[0] +=1;
              cout << ">>";
              cout << "*У тебя " << Wallet[0] << " монет*" << endl;
            }
          }
          objB.relife();
        }

        if(num ==2){
          while(objBP.HP > 0 && objP.HP > 0){
            cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
            cout << ">>";
              cin >> answer;

              if(answer == "п"){
                cout << "Ты пропустил ход. Ты идиот?" << endl;

                if(d(e) < elucky_num){
                  objP.HP -= objBP.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(answer == "у"){
                if(d(e) < lucky_num){
                  objBP.HP -= objP.dmg;
                  cout << "У противника осталось " << objBP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах." << endl;
                }

                if(d(e) < elucky_num){
                  objP.HP -= objBP.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(objP.HP <= 0){
                cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
                cout << objBP.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
              }

              if(objBP.HP <= 0){
                cout << objBP.name << " отошёл в мир иной." << endl;
                cout << "Просто повезло, не зазнавайся." << endl;
                cout << "Ты получил 5 монеток." << endl;
                Wallet[0] +=5;
                cout << ">>";
                cout << "*У тебя " << Wallet[0] << " монет*" << endl;
              }
            }
            objBP.relife();
          }

          if(num == 3){
            while(objBPM.HP > 0 && objP.HP > 0){
              cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
              cout << ">>";
              cin >> answer;

              if(answer == "п"){
                cout << "Ты пропустил ход. Ты идиот?" << endl;

                if(d(e) < elucky_num){
                  objP.HP -= objBPM.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(answer == "у"){
                if(d(e) < lucky_num){
                  objBPM.HP -= objP.dmg;
                  cout << "У противника осталось " << objBPM.HP << " HP" << endl;
                }
                else{
                  cout << "Промах." << endl;
                }

                if(d(e) < elucky_num){
                  objP.HP -= objBPM.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(objP.HP <= 0){
                cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
                cout << objBPM.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
              }

              if(objBPM.HP <= 0){
                cout << objBPM.name << " отошёл в мир иной." << endl;
                cout << "Просто повезло, не зазнавайся." << endl;
                cout << "Ты получил 10 монеток." << endl;
                Wallet[0] +=10;
                cout << ">>";
                cout << "*У тебя " << Wallet[0] << " монет*" << endl;
              }
            }
            objBPM.relife();
          }

          if(num == 4){
            while(objUBPM.HP > 0 && objP.HP > 0){
              cout << "Ты хочешь нанести удар(у) или пропустить(п) ход?" << endl;
              cout << ">>";
              cin >> answer;

              if(answer == "п"){
                cout << "Ты пропустил ход. Ты идиот?" << endl;

                if(d(e) < elucky_num){
                  objP.HP -= objUBPM.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(answer == "у"){
                if(d(e) < lucky_num){
                  objUBPM.HP -= objP.dmg;
                  cout << "У противника осталось " << objUBPM.HP << " HP" << endl;
                }
                else{
                  cout << "Промах." << endl;
                }

                if(d(e) < elucky_num){
                  objP.HP -= objUBPM.dmg;
                  cout << "У тебя осталось " << objP.HP << " HP" << endl;
                }
                else{
                  cout << "Промах противника." << endl;
                }
              }

              if(objP.HP <= 0){
                cout << objP.name <<" к успеху шёл. Не получилось, не фортануло." << endl;
                cout << objUBPM.name << " уничтожил тебя, как дешёвую дешёвку." << endl;
              }

              if(objUBPM.HP <= 0){
                cout << objUBPM.name << " отошёл в мир иной." << endl;
                cout << "Просто повезло, не зазнавайся." << endl;
                cout << "Ты получил 15 монеток." << endl;
                Wallet[0] +=15;
                cout << ">>";
                cout << "*У тебя " << Wallet[0] << " монет*" << endl;
              }
            }
            objB.relife();
          }
        }
