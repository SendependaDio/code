using namespace std;

class Result{
public:
  string name;
  int ent;
  string grant;

  void read_Result(){
      ent = 100;
      grant = "есть";
      cout << "Количество выбранных баллов на ЕНТ: " << ent << ";" << endl;
      cout << "Грант: " << grant << ";" << endl;
    }

    void read_Result1(){
      ent = 109;
      grant = "есть";
      cout << "Количество выбранных баллов на ЕНТ: " << ent << ";" << endl;
      cout << "Грант: " << grant << ";" << endl;
    }

    void read_Result2(){
      ent = 93;
      grant = "есть";
      cout << "Количество выбранных баллов на ЕНТ: " << ent << ";" << endl;
      cout << "Грант: " << grant << ";" << endl;
    }

    void read_Result3(){
      ent = 68;
      grant = "есть";
      cout << "Количество выбранных баллов на ЕНТ: " << ent << ";" << endl;
      cout << "Грант: " << grant << ";" << endl;
    }

    void read_Result4(){
      ent = 60;
      grant = "нет, не подавал";
      cout << "Количество выбранных баллов на ЕНТ: " << ent << ";" << endl;
      cout << "Грант: " << grant << ";" << endl;
    }
};
