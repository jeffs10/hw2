#include <iostream>
#include <cstring>
using namespace std;
#include "Rot13.h"
int main()
{
 Rot13 M;
 string A; 
 cout<<"enter name ";
 cin>> A;
 M.setText(A);
M.display();
 return 0;
}