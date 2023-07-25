#include<iostream>
#include<cmath>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<stdlib.h>
#define new_cal 1
#define old_cal 0
#define PI 3.14159265
using namespace std;
///for stander calculation
class stand_calc
{
public:
    static double addition(double,double);
    static double subtraction(double,double);///for using static we can call the function with the name of class, no need of object.
    static double multiplication(double,double);
    static double division(double,double*);
    static double modulus(double*,double*);
};

double stand_calc::addition(double a,double b){
    return a+b;
}
double stand_calc::subtraction (double a,double b){
    return a-b;
}
double stand_calc::multiplication(double a,double b){
    return a*b;
}
double stand_calc::division(double a,double *b){
    while(*b==0){
        cout<<"Can not divide by zero.";
        cout<<"\n Enter the number again.";
        cin>>*b;
    }
    return (a/(*b));
}
double stand_calc::modulus(double *a,double *b){
    while(*b==0){
        cout<<"\nCan not divided by zero.";
        cout<<"\nEnter the second number again:";
        cin>>*b;
    }
    ///convert double into integer
   int x=(int)*a;
   int y=(int)*b;
   if(*a-x>0||*b-y>0)
    cout<<"\nconverting Decimal number into an integer to perform modulus.";
        *a=x;
        *b=y;
   return (x%y);
}
