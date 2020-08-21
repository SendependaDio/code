#include <iostream>
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
}
