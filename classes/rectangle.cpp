#include <iostream>
#include "rectangle.h"
using namespace std;

void Rectangle::set_high(int high)
{
 this->High=high;
}

void Rectangle::set_width(int width)
{
  this->Width=width;
}

void Rectangle::print_rectangle(void)
{
  cout << "Size of rectangle :\n\r";
  cout <<  "High = " << this->High << " ";
  cout <<  "Width = " << this->Width << "\n\r";
}

//Constructor
Rectangle::Rectangle (int high,int width)
{
  this->High = high;
  this->Width = width;
}

//empty constructor
Rectangle::Rectangle ()
{
  //empty constructor
}
