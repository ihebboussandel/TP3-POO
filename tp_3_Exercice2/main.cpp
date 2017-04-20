/* 
 * File:   main.cpp
 * Author: iheb
 *
 * Created on March 16, 2017, 12:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "temps.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int value;
    temps *a = new temps();
    temps *b = new temps();
    cout<<"give the first time A"<<endl; 
    a->lire_temp();
    cout<<"give the second time B"<<endl; 
    b->lire_temp();
    cout<<"SHow time in French [hit 1] or ENGLISH?[hit0] "<<endl;
    cin>>value;
    
    if (value ==1){
    a->affichetimeFR();
    }else if (value==0){
    a->convertfr_en();
    a->affichetime();
    }else{
        cout<<"oups wrong choice "<<endl;
    }
   if( b->comparetime(b,a)==1){
       cout <<" le temp A inferieur que B"<<endl; 
   }else{
       cout<<" le temp A et superiour QuE B"<<endl;
   }
    
  
    return 0;
}

