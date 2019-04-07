#include <iostream>
using namespace std;

int add(int a,int b);
double add(double a,double b);

int main()
{
  cout << add(2,2) << "\n\r";
  cout << add(2.5,2.1) << "\n\r";
  return 0;
}

int add(int a,int b)
{
  return(a+b);
}

double add(double a,double b)
{
  return(a+b);
}
