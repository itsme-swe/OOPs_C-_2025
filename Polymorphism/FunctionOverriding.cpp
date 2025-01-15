#include <iostream>

using namespace std;

class Base
{

public:
  void display()
  {
    cout << "Display of base " << endl;
  }
};

class Derived : public Base
{
public:
  void display()
  {
    cout << "Display of Derived Class";
  }
};

int main()
{

  Derived b;
  b.display();

  return 0;
}