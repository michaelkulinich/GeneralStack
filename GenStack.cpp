#include "GenStack.h"
#include <iostream>

using namespace std;

GenStack::GenStack()
{
  //initialization of default values
  myArray = new char[128];
  size = 128;
  top = -1;
}

GenStack::GenStack(int maxSize)
{
  myArray = new char[maxSize];
  size = maxSize;
  top = -1;
}

GenStack::~GenStack()
{
  //lets build some character
  //your job to research this
  delte[]myArray;
}

void GenStack::push(char d)
{
  /*
  if(isFull()){
    error stack full bro
  }
  */
  //need to check error/boundary check
  //this is your job
  myArray[++top] = d;
}

void GenStack::pop()
{
  //error check, make sure its not isEmpty
  return myArray[top--];
}

char GenStack::peek()
{
  /*
  if(isEmpty())
  {
  //check if isEmpty
  }
  */
  return myArray[top];
}

bool GenStack::isFull()
{
  reutrn(top == size -1);
}

bool GenStack::isEmpty()
{
  return (top == -1);
}
