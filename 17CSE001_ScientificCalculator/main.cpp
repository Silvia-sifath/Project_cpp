#include<iostream>
#include<cmath>
#include<conio.h>
#include<cstdlib>
#include"stand.h"
#include"sci.h"
#include"tri.h"
#include"log.h"
#include<windows.h>
#include<stdlib.h>
#define new_cal 1
#define old_cal 0
#define PI 3.14159265
using namespace std;
///for stander calculation

int main()
{
    double num1,num2,num3,temp;
    long int num4;
    int choice1=0;
    int choice2,flag;
    do{
        ///clrscr();
        system("cls");
        cout<<"========================calculator=====================\n\n";
        cout<<"Type of calculator:\n";
        cout<<"\n";
        cout<<"1. Stander type of calculator\n";
        cout<<"2. scientific type of calculator\n";
        cout<<"3. Exit\n";

       /* if(flag==old_cal){
            cout<<"4.Clear Memory\n";
        }*/
         cout<<"Enter your Choice:";
        cin>>choice1;
        flag=new_cal;
        switch(choice1){
        case 1:
            do{
                ///clrscr();
                system("cls");
                cout<<"\n=====================calculator===================\n";
                cout<<"\t\t Stander calculator\t\t";
                cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.return to previous menu\n7.Quit\n";
                if(flag==old_cal){
                cout<<"8.Clear memory";
                }
                cout<<"\nEnter your choice:";
                cin>>choice2;
                switch(choice2){
                case 1:
                    ///system("cls");
                    if(flag==new_cal){
                            cout<<"Enter 1st number:";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"First number is"<<num1<<endl;
                    }
                    cout<<"Enter second number:";
                    cin>>num2;
                    num3=stand_calc::addition(num1,num2);
                    cout<<"\nAddition of "<<num1<<" and "<<num2<<" is "<<num3;
                    cout<<"\nPress any key to continue ..........\n";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    break;
                case 2:
                    ///system("cls");
                    if(flag==new_cal){
                            cout<<"Enter 1st number:";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"First number is"<<num1<<endl;
                    }
                    cout<<"Enter second number:";
                    cin>>num2;
                    num3=stand_calc::subtraction(num1,num2);
                    cout<<"\nsubtraction of "<<num1<<" and "<<num2<<" is "<<num3;
                    cout<<"\nPress any key to continue ..........\n";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    break;
                case 3:
            if(flag==new_cal){
                            cout<<"Enter 1st number:";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"First number is"<<num1<<endl;
                    }
                    cout<<"Enter second number:";
                    cin>>num2;
                    num3=stand_calc::multiplication(num1,num2);
                    cout<<"\nMultiplication of "<<num1<<" and "<<num2<<" is "<<num3;
                    cout<<"\nPress any key to continue ..........\n";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    break;
                case 4:
                    if(flag==new_cal){
                            cout<<"Enter 1st number:";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"First number is"<<num1<<endl;
                    }
                    cout<<"Enter second number:";
                    cin>>num2;
                    num3=stand_calc::division(num1,&num2);
                    cout<<"\nDivision of "<<num1<<" and "<<num2<<" is "<<num3;
                    cout<<"\nPress any key to continue ..........\n";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    break;
                case 5:
                    if(flag==new_cal){
                            cout<<"Enter 1st number:";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"First number is"<<num1<<endl;
                    }
                    cout<<"Enter second number:";
                    cin>>num2;
                    num3=stand_calc::modulus(&num1,&num2);
                    cout<<"\nModulus of "<<num1<<" by "<<num2<<" is "<<num3;
                    cout<<"\nPress any key to continue ..........\n";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    break;
                case 6:
                    cout<<"\nReturning to previous menu.";
                    cout<<"\nPress any key to continue........";
                    getch();
                    break;
                case 7:
                    cout<<"\nQuitting..........";
                    cout<<"\nPress any key to existing........\n";
                    getch();
                    exit(0);
                case 8:
                    if(flag==new_cal){
                        cout<<"\nInvalid choice.";
                        cout<<"\nPress any key to continue...........";
                        getch();
                    }
                    else{
                        temp=0;
                        flag=new_cal;
                    }
                    break;
                default:
                     cout<<"\nInvalid choice.";
                     cout<<"\nPress any key to continue..............";
                     getch();
                     break;

                }
            }while(choice2!=6);
            break;
                case 2:
                    do{
                    ///clrscr();
                    system("cls");
                    cout<<"=========Scientific Calculator==============\n";
                    cout<<"\n1\tsquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tsin\n6\tcos\n7\ttan\n8\tSqure root\n9\tInverse of sin\n10\tInverse of cos\n11\tInverse of tan\n12\tLog\n13\tLog with base 10\n14\tExponential\n15\tReturn to previous menu\n16\tQuit";
                    if(flag==old_cal)
                        cout<<"\n16.\tclear memory";
                    cout<<"\nchoose the type of calculation:";
                    cin>>choice2;
                    switch(choice2){
                    case 1:
                        if(flag==new_cal){
                            cout<<"\nEnter number to find square:";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"\nnumber is"<<num1<<endl;
                        }
                        num3=scien_calc::square(num1);
                        cout<<"\nSquare of"<<num1<<"is"<<num3;
                        cout<<"\npress any key to continue.........\n";
                        getch();
                        temp=num3;
                        flag=old_cal;
                        break;
                    case 2:
                        if(flag==new_cal){
                            cout<<"Enter number to find cube";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"\nNumber is"<<num1<<endl;
                        }
                        num3=scien_calc::cube(num1);
                        cout<<"\nCube of" <<num1<<" is "<<num3;
                        cout<<"\nPress any key to continue.....\n";
                        getch();
                        temp=num3;
                        flag=old_cal;
                        break;
                    case 3:
                        if(flag==new_cal){
                            cout<<"\nEnter first number for base to find power:";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"\nFirst number is"<<num1<<endl;
                        }
                        cout<<"\nEnter second number for power to find power:";
                        cin>>num2;
                        num3=scien_calc::power(num1,num2);
                        cout<<"\n"<<num1<<" to the power "<<num2<<" is "<<num3;
                        cout<<"\nPress any key to continue...............\n";
                        getch();
                        temp=num3;
                        flag=old_cal;
                        break;
                    case 4:
                        if(flag==new_cal){
                            cout<<"\nEnter number to find factorial:";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"\nNumber to find factorial is"<<num1<<endl;
                        }
                        num4=scien_calc::fact(num1);
                        cout<<"\nFactorial of "<<num1<<" is "<<num4;
                        cout<<"\nPress any key to continue.......\n";
                        getch();
                        temp=num4;
                        flag=old_cal;
                        break;
                    case 5:
                        if(flag==new_cal){
                            cout<<"\nEnter number to find sin value:";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"\nNumber for sin value is"<<num1<<endl;
                        }
                        num3=Trigeo_calc::sin_func(num1);
                        cout<<"\nSin value of "<<num1<<" is "<<num3;
                        cout<<"\nPress any key to continue..........\n";
                        getch();
                        temp=num3;
                        flag=old_cal;
                        break;
                    case 6:
                        if(flag==new_cal){
                            cout<<"\nEnter the number to find cos value:";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"\nNumber for cos value is"<<num1<<endl;
                        }
                        num3=Trigeo_calc::cos_func(num1);
                        cout<<"\nCos value of "<<num1<<" is "<<num3;
                        cout<<"\nPress any key to continue........\n";
                        getch();
                        temp=num3;
                        flag=old_cal;
                        break;
                   /* case 6:
                        if(flag==new_cal){
                            cout<<"Enter number to find cos value:";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"Number for cos value is"<<num1<<endl;
                        }
                        num3=scien_calc::cos_func(num1);
                        cout<<"\nCos value of"<<num1<<"is"<<num3;
                        cout<<"\nPress any ket to continue............";
                        getch();
                        temp=num3;
                        flag=old_cla;
                        break;*/
                    case 7:
                        if(flag==new_cal){
                            cout<<"\nEnter number to find tan value:"<<endl;
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"\nNumber for tan value is"<<num1<<endl;
                        }
                        num3=Trigeo_calc::tan_func(num1);
                            cout<<"\ntan value of "<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;
                    case 8:
                        if(flag==new_cal){
                            cout<<"Enter number to find square root:"<<endl;
                            cin>>num1;
                        }
                         else{
                            num1=temp;
                            cout<<"\nNumber for square root is"<<num1<<endl;
                        }
                        num3=scien_calc::squr_root(num1);
                            cout<<"\nSquare root of "<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;
                    case 9:
                        if(flag==new_cal){
                            cout<<"Enter number to find inverse of sin:"<<endl;
                            cin>>num1;
                        }
                         else{
                            num1=temp;
                            cout<<"\nNumber for inverse of sin is"<<num1<<endl;
                        }
                        num3=Trigeo_calc::Inv_sin(num1);
                            cout<<"\nInverse of sin"<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;
                    case 10:
                            if(flag==new_cal){
                            cout<<"Enter number to find inverse of cos:"<<endl;
                            cin>>num1;
                        }
                         else{
                            num1=temp;
                            cout<<"\nNumber for inverse of cos is"<<num1<<endl;
                        }
                        num3=Trigeo_calc::Inv_cos(num1);
                            cout<<"\nInverse of cos"<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;
                    case 11:
                            if(flag==new_cal){
                            cout<<"Enter number to find inverse of tan:"<<endl;
                            cin>>num1;
                        }
                         else{
                            num1=temp;
                            cout<<"\nNumber for inverse of tan is"<<num1<<endl;
                        }
                        num3=Trigeo_calc::Inv_tan(num1);
                            cout<<"\nInverse of tan"<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;
                    case 12:

                        if(flag==new_cal){
                            cout<<"Enter number to find Log:"<<endl;
                            cin>>num1;
                        }
                         else{
                            num1=temp;
                            cout<<"\nNumber for Log is"<<num1<<endl;
                        }
                        num3=Logari_calc::Log(num1);
                            cout<<"\nLog of "<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;
                    case 13:

                        if(flag==new_cal){
                            cout<<"Enter number to find Log with base 10:"<<endl;
                            cin>>num1;
                        }
                         else{
                            num1=temp;
                            cout<<"\nNumber for  Log with base 10 is"<<num1<<endl;
                        }
                        num3=Logari_calc::Log_base(num1);
                            cout<<"\n Log with base 10 of "<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;
                    case 14:
                            if(flag==new_cal){
                            cout<<"Enter number to find Exponential :"<<endl;
                            cin>>num1;
                        }
                         else{
                            num1=temp;
                            cout<<"\nNumber Exponential is"<<num1<<endl;
                        }
                        num3=scien_calc::exp_fun(num1);
                            cout<<"\nExponential of "<<num1<<" is "<<num3;
                            cout<<"\nPress any key to continue.............\n";
                            getch();
                            temp=num3;
                            flag=old_cal;
                            break;


                    case 15:
                        cout<<"\nReturning to previous menu.";
                        cout<<"\npress any key to continue..........";
                        getch();
                        break;
                    case 16:
                        cout<<"\nQuitting............";
                        cout<<"\nPress any key to terminate......";
                        getch();
                        exit(0);
                    case 17:
                        if(flag==new_cal){
                            cout<<"\nInvalid choice.";
                            cout<<"\nPress any key to continue.......";
                            getch();
                        }
                        else{
                            temp=0;
                            flag=new_cal;
                            }
                            break;
                    default:
                        cout<<"\nInvalid choice.";
                        cout<<"\nPress any key to continue.......";
                        getch();
                        break;
                    }
                    }
                    while(choice2!=15);
                    break;
                    case 3:
                        cout<<"\nQuitting........";
                        cout<<"\nPress any key to terminate......";
                        getch();
                        break;
                    default:
                        cout<<"\nInvalid number";
                        cout<<"\nPress any key to continue............";
                        getch();
                        break;
        }
    }while(choice1!=3);

}

