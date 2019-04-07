#ifndef __PERCEPTRON_H__
#define __PERCEPTRON_H__

#include <iostream>

//template <typename T>
class Perceptron {
    public:
        Perceptron (int numInputs) { this->numInputs = numInputs; }
        void setId (int Id) { this->Id = Id; }
        int getId  (void) { return this->Id; }
        int getNumInputs (void) { return this->numInputs; }
        virtual int getInputValue (int index) = 0;
        virtual int compute (void) = 0;
    private:
        int numInputs;
        int Id;
};

#endif
