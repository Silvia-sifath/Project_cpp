#include<cmath>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<stdlib.h>
#define new_cal 1
#define old_cal 0
#define PI 3.14159265
using namespace std;
class Logari_calc{
    public:
    static double Log(double);
    static double Log_base(double);
};
double Logari_calc::Log(double a){

    return (log(a));
}
double Logari_calc::Log_base(double a){
    return (log10(a));
}

