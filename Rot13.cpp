#include "Rot13.h"
#include <iostream>
using namespace std;
Rot13::Rot13()
{
name = "" ;
}
void Rot13::setText (string a)
{
  name= a;
}
void Rot13::display() 
{
  cout<<name<<endl;
}

