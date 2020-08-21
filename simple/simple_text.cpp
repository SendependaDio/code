/*#include <iostream>
#include <string>

using namespace std;
int main(){
  char z;
  cout << "Первое сообщение." << endl;
  cin >> z;
  if(z == 'n')
  cout << "Второе ообщение." << endl;
  cin >> z;
  if(z == 'n')
  cout << "Третье сообщение." << endl;
  return 0;
}*/
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
  for(int i = 0; i < 20; ++i){
    cout << "#";
  }
  cout << endl;
  cout << "Первое сообщение." << endl;
    this_thread::sleep_for(chrono::milliseconds(3000));
  cout << "Второе сообщение." << endl;
    this_thread::sleep_for(chrono::milliseconds(3000));
  cout << "Третье сообщение." << endl;
  for(int i = 0; i < 20; ++i){
    cout << "#";
  }
  cout << endl;

  return 0;
}
