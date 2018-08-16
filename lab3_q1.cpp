// library
#include<iostream>
//including keyword or namespace
using namespace std;
//writing main function
int main()
{
//declaring variables 
int p= 823;
float q= 62.3122;
bool b= false;
char g= 'h';
double a=961.3652121;
//printing the size of variables
cout << "Size of integer= " << sizeof(p) <<" bytes" << endl;
cout << "Size of floating number= " << sizeof(q) <<" bytes" << endl;
cout << "Size of boolean= " << sizeof(b) <<" byte" << endl;
cout << "Size of character= " << sizeof(g) <<" byte" << endl;
cout << "Size of double= " << sizeof(a) <<" bytes" << endl;
return 0;

}
