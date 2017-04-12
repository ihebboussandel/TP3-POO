/* 
 * File:   temps.h
 * Author: iheb
 *
 * Created on March 16, 2017, 12:45 PM
 */

#ifndef TEMPS_H
#define	TEMPS_H

class temps {
public:
    int hour,min,second;
    char pm;
    temps();
    temps(const temps& orig);
    virtual ~temps();
    int ConvertTimeToMinutes();
    bool ComputeTime(temps *time2);
    void lire_temp();
    void convertfr_en();
    void affichetime();
    void affichetimeFR();
private:

};

#endif	/* TEMPS_H */

