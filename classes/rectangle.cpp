#include <iostream>
#include "rectangle.h"
using namespace std;

void Rectangle::set_high(int high){
  High=high;
}

void Rectangle::set_width(int width){
  Width=width;
}

void Rectangle::print_rectangle(void){
  cout << "Size of rectangle :\n\r";
  cout <<  "High = " << High << " ";
  cout <<  "Width = " << Width << "\n\r";
}

//Constructor
Rectangle::Rectangle (int high,int width)
{
  High = high;
  Width = width;
}

//empty constructor
Rectangle::Rectangle ()
{
  //empty constructor
}
