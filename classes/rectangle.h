#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{

private:
  int High;
  int Width;

  public:
    Rectangle(int,int);
    Rectangle();
    void set_high(int);
    void set_width(int);
    void print_rectangle(void);
};

#endif
