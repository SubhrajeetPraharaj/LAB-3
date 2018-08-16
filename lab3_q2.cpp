//library
#include<iostream>
//using namespace keyword
using namespace std;
//writing main function
int main()
{
//declaring variables
int a,b;
//asign the values 
a=58;
b=5;
//arithmatic part
int sum;
int difference;
int multiply;
float divide;
float divideWithDecimal;
int remainder;
sum = a+b;
difference = a-b;
multiply = a*b;
divide = a/b;
divideWithDecimal = float(a)/float(b);
remainder = 58%5;
//printing things
cout << "The sum of 58 and 5 is " << sum << endl;
cout << "The difference between 58 and 5 is " << difference << endl;
cout << "The product of 58 and 5 is " << multiply << endl;
cout << "The quotient when 58 is divided by 5 is " << divide << endl;
cout << "The remainder we get when 58 is divided by 5 is " << remainder << endl;
cout << "The value we get when 58 is divided by 5 is " << divideWithDecimal << endl;
return 0;
}
