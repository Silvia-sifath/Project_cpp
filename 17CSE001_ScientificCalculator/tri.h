#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<stdlib.h>
#define new_cal 1
#define old_cal 0
#define PI 3.14159265
using namespace std;
class Trigeo_calc
{
    public:
    static double sin_func(double);
    static double cos_func(double);
    static double tan_func(double);
    static double Inv_sin(double);
    static double Inv_cos(double);
    static double Inv_tan(double);
};
double Trigeo_calc::sin_func(double a){

    return (sin(a*PI/180.0));
}
double Trigeo_calc::cos_func(double a){
    return (cos(a*PI/180.0));
}
double Trigeo_calc::tan_func(double a){
    //if(a!=90)
    return (tan(a*PI/180.0));
   // else{
     //  cout<<"Math error"<<endl;
    //}
}
double Trigeo_calc::Inv_sin(double a){

    return ((asin(a)*180.0)/PI);
}
double Trigeo_calc::Inv_cos(double a){
    return (acos(a)*(180.0/PI));
}
double Trigeo_calc::Inv_tan(double a){

    return (atan(a)*(180.0/PI));
}
