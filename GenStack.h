#include <iostream>

using namespace std;
//MAKE THIS INTO A TEMPLATE CLASS
class GenStack
{
  public:
    GenStack();//constructor
    GenStack(int maxSize);//overloaded constructor
    ~GenStack();//destructor

    void push(char d);
    char pop();
    char peek();

    bool isFull();
    bool isEmpty();

    int size;
    int top;

    char *myArray;  //or char* myArray      this is a pointer to a character

}
