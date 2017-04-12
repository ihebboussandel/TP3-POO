/* 
 * File:   main.cpp
 * Author: iheb
 *
 * Created on March 16, 2017, 11:35 AM
 */

#include <cstdlib>
#include "compte.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    compte *a = new compte(6548,"masoud ben masoud",3.14);
    compte *b = new compte(3666,"Jhon doe",0);
    a->consulterSolde();
    b->consulterSolde();
    a->deposerArgent(368);
    a->consulterSolde();
    b->transfererArgent(b,20);
    b->consulterSolde();

    return 0;
}

