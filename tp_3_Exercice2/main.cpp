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
    temps *a = new temps();
    a->lire_temp();
    a->affichetimeFR();
    a->convertfr_en();
    a->affichetime();
    int choix; 
    switch(choix){
        case 1: 
            break;
        case 2 :
            break;
        default: 
            break;
    }
    return 0;
}

