#include<math.h>
#include<iostream>
using namespace std;

 double SUMSEQUENCE(double x, int n)
 { int f=1;
   double s=1;
  for(int i=1;i<=n;++i)
  {
  	f=f*(i+1);
  	s=s+ pow(x,i)/f;	  
  }
 	return s;
 }
 
 int main()
 {
 	double a;
 	int b;
 	
 	cout<<"\n\tFor the series 1+x/2+x^2/3+...... enter the value of x : ";
 	cin>>a;
 	cout<<"\n\tEnter the limit n  : ";
 	cin>>b; 	
 	cout<<"\n\tThe sum of the given series is : "<<SUMSEQUENCE(a,b);
 	return 0;
 }