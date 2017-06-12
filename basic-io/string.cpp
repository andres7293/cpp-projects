/*
 cin  -- standard input stream (keyboard)
 cout -- standard output stream (display)
 cerr -- standard error (output) stream
 clog -- standard loggin (output)
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  cout << "Inserte su nombre : ";
  //read name from user
  getLine(cin,name);
   
  cout << "Su nombre es : " << name << "\n\r." ;
  return 0; 
}


