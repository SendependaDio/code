using namespace std;

class Result{
public:
  string name;
  int ent;
  string grant;

  void read_Result(){
      cout << "Количество набранных баллов на ЕНТ: " << ent << ";" << endl;
      cout << "Грант: " << grant << ";" << endl;
    }
};
