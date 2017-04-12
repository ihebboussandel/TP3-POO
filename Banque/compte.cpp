/* 
 * File:   compte.cpp
 * Author: iheb
 * 
 * Created on March 16, 2017, 11:37 AM
 */

#include <stdlib.h>

#include "compte.h"

void saisireCompte(int S_numCompte,string S_nomProprirtaire,double S_solde)
{
    
};
    bool compte::retirerArgent(double ret_solde){
        if(this->solde<ret_solde){
            return false;
        }else{
            this->solde-=ret_solde;
            return true ;
        }
        
    };
    void compte::deposerArgent(double somme){
        this->solde+=somme;
    };
    void compte::consulterSolde(){
        cout<<"________________"<<endl;
        cout<<"solde :"<< this->solde<<endl;
        cout<<"nom utilisateur :"<<this->nomProprirtaire<<endl;
        cout<<"________________"<<endl;
    };
    void compte::transfererArgent(compte *com,double somme_d){
        bool a=
        a= this->retirerArgent(somme_d);
        if(a==false){
            cout<<"solde unsufisant"<<endl;
        }else{
        com->deposerArgent(somme_d);
        }
    };
compte::compte() {
}
compte::compte(int c_int,string c_name,double c_solde) {
    this->nomProprirtaire= c_name;
    this->solde=c_solde;
    this->numCompte=c_int;
}


compte::compte(const compte& orig) {
}

compte::~compte() {
}

