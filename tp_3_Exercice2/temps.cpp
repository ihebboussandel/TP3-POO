/* 
 * File:   temps.cpp
 * Author: iheb
 * 
 * Created on March 16, 2017, 12:45 PM
 */

#include "temps.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
temps::temps() {
}

temps::temps(const temps& orig) {
}

temps::~temps() {
}
int temps::ConvertTimeToMinutes(){
    
    if (this->hour == 12)
        hour = 0;
    int calc = hour*60 + min;
    if (this->pm=='p')
        calc += 12*60;
    return calc;
}
void temps::convertfr_en(){
    if(this->hour<12){
    this->hour=this->hour;
    this->pm='a';
    }else if(this->hour>12){
        this->hour-=12;
        this->pm='p';
    }
}
void temps::affichetime(){
    if(this->pm=='f'){
        cout<<"time in french "<<this->hour<<":"<<this->min<<":"<<this->second<<endl;
    }else{
        if(this->pm=='p'){
        cout<<"time in english "<<this->hour<<":"<<this->min<<":"<<this->second<<"PM"<<endl;
    
        }else if(this->pm=='a'){
            cout<<"time in english "<<this->hour<<":"<<this->min<<":"<<this->second<<"AM"<<endl;
        }
    }
}
void temps::affichetimeFR(){
    
        cout<<"time in french "<<this->hour<<":"<<this->min<<":"<<this->second<<endl;
  
}
//void temps::converten_fr(){
  //  this->hour-=12;
    
//}
bool temps::ComputeTime(temps *time2){
    int calc1 = time2->ConvertTimeToMinutes();
   calc1 =calc1 + time2->min;
    int calc2 = ConvertTimeToMinutes();
    if (calc2 > calc1)
    {
        //return calc2 - calc1;
        return 0;
    }
    else
    {
        //return calc1 - calc2;
        return 1;
    }
}
     void  temps::lire_temp(){
         int f_hours,f_min,f_seconds;
         
         cout <<"give hours :"<<endl;
         cin>> f_hours;
         cout <<"give minuts :"<<endl;
         cin>> f_min;
         cout <<"seconds :"<<endl;
         cin>> f_seconds;
         if(f_hours>24){
             cout<<"error hours out of range"<<endl;
         }else if(f_min>60| f_min<0){
              cout<<"error minuts out of range"<<endl;
         }else{
         this->hour=f_hours;
         this->min=f_min;
         this->second=f_seconds;
             this->pm='f';
         }
     
     }


bool temps::comparetime(temps *time2, temps *time1){
    int seconds1;
    int seconds2;
    seconds1=(time2->hour*3600)+(time2->min *60)+time2->second;
    seconds2=(time1->hour*3600)+(time1->min *60)+time1->second;
    cout<<seconds1<<endl;
    cout<<seconds2<<endl;
    if(seconds1>seconds2)
    {return 0;
}else{
      return 1;
}
}
