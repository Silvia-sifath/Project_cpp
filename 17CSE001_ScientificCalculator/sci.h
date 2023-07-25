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
class scien_calc
{
public:
    static double square(double);
    static double cube(double);
    static double power(double,double);
    static double sq_root(double);
    static long int fact(double);
    static double squr_root(double);
    static double exp_fun(double);
};
double scien_calc::exp_fun(double x){
    return(exp(x));
}
double scien_calc::square(double a){
    return (pow(a,2));
}
double scien_calc::cube(double a){
    return (pow(a,3));
}
double scien_calc::power(double x,double y){
return (pow(x,y));
}
double scien_calc::squr_root(double a){
    return (sqrt(a));
}
long int scien_calc::fact(double x){
    int n=(int)x;
    long int f=1;
    while(n>1){
        f=f*n;
        n--;
    }
    return f;
}
