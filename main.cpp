#include <iostream>
#include <vector>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE

void orderedValues(int &a, int &b, int &c);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  // <-- ADD YOUR FUNCTION CALL HERE
  orderedValues(red,green,blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void orderedValues(int &a, int &b, int &c)
{
 int most=0;
 int secondMost=0;
 int last=0;


 if((a>b) && (a>c))
 {
   most=a;
   if(b>c)
   {
     secondMost=b;
     last=c;
   }
   else
   {
    secondMost=c;
    last=b;
   }
 }
 else if((b>a) && (b>c))
 {
  most=b;
  if(a>c)
  {
   secondMost=a;
   last=c;
  }
  else
  {
   secondMost=c;
   last=a;
  }
 }
 else if((c>a) && (c>b))
 {
  most=c;
  if(a>b)
  {
   secondMost=a;
   last=b;
  }
  else
  {
   secondMost=b;
   last=a;
  }
 }
 a=most;
 b=secondMost;
 c=last;
 return;
}
