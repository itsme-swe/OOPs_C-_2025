#include <iostream> 

#include "Base.h"
#include "DerivedClass.h"

using namespace std; 

int main(){

  //🔸 Base class pointer and Derived class object to access Base class members
  Base *p = new Derived();

  p -> func1();

  return 0;
}