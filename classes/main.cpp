#include <iostream>
#include "rectangle.h"
using namespace std;

int main(){

  Rectangle rectangle;
  rectangle.set_high(10);
  rectangle.set_width(20);
  rectangle.print_rectangle();

  //using constructor
  Rectangle rect(50,30);
  rect.print_rectangle();

  return 0;
}
