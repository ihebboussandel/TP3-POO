/* 
 * File:   compte.h
 * Author: iheb
 *
 * Created on March 16, 2017, 11:37 AM
 */

#ifndef COMPTE_H
#define	COMPTE_H
#include<iostream>
using namespace std;
#include <string>
class compte {
public:
    int numCompte ;
    string nomProprirtaire;
    double solde; 
    compte();
    compte(int c_int,string c_name,double c_solde);
    compte(const compte& orig);
    virtual ~compte();
    void saisireCompte(int S_numCompte,string S_nomProprirtaire,double S_solde);
    bool retirerArgent(double ret_solde);
    void deposerArgent(double somme);
    void consulterSolde();
    void transfererArgent(compte *com,double somme_d);
private:

};

#endif	/* COMPTE_H */

