using namespace std;

void show_Result(){
  while(true){
    Result obj;
    cout << "Введите пожалуйста своё имя.\n";
    cout << ">>";
      cin >> obj.name;
        if(obj.name == "Ваня"){
          obj.ent = 100;
          obj.grant = "есть";
          obj.read_Result();
        }

        if(obj.name == "Рустам"){
          obj.ent = 109;
          obj.grant = "есть";
          obj.read_Result();
        }

        if(obj.name == "Гена"){
          obj.ent = 93;
          obj.grant = "есть";
          obj.read_Result();
        }

        if(obj.name == "Данил"){
          obj.ent = 68;
          obj.grant = "есть";
          obj.read_Result();
        }

        for(int i = 0; i < 40; ++i){
          cout << "=";
        }
        cout << "\n";
  }
}
