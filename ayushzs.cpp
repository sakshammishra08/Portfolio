#include <iostream>
using namespace std;

class Parent
{
	
  int a=1;
  public:

  int b=2;
 protected:

int c=3;
};



class Child1: public Parent
{
 public:

int c1 = 1;

}; 
 class Child2: protected Parent
{
 public:
 int c2 = 1;

};

 class Child3: private Parent
{
 public:

int c3 =1;

};

int main()

{
Child1 cd1;

Child2 cd2;


Child3 cd3;

cout<<cd1.a; //Statement 1

cout<<cd1.b; //Statement 2

cout<<cd1.c; //Statement 


cout<<cd2.a; //Statement 4

cout<<cd2.b; //Statement 5

cout<<cd2.c;

 //Statement 6
cout<<cd3.a; //Statement 4

cout<<cd3.b; //Statement 5

cout<<cd3.c;
}
