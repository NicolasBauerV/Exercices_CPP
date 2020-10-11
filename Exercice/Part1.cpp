//
//  Exercice2.cpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#include <iostream>
#include <cmath>
#include "Part1.hpp"

//Variable Globales
int PointAxe::cpt = 0; //Déclaration OBLIGATOIRE !
const float pi = 3.141592653;

//Prototype
float angle(float, float); //angle function

//  Define Constructor
PointAxe::PointAxe(float p_A, float p_O) {
    r = sqrt(p_A * p_A + p_O * p_O);
    t = atan(p_A / p_O);
    //PointAxe::cpt++;    //Avant
}

PointAxe::~PointAxe() {
   //PointAxe::cpt--; //Avant
}
 
float PointAxe::afficheA() {
    return this->r;
}

float PointAxe::afficheO() {
    return this->t;
}

void PointAxe::deplace (float dx, float dy)
{ float x = r * cos (t) + dx ; float y = r * sin (t) + dy ; r = sqrt (x*x + y*y) ;
t = angle (x, y) ;
}

void PointAxe::homotethie(float hm) {
    r *= hm;
    t *= hm;
}

void PointAxe::rotation(float th) {
//    Passage en coordonée polaire
    float x = sqrt(r * r + t * t);
    float y = angle(r, t);
    
    y += th; //rotation
    
//    Retour de coordonnée cartésienne
    r = x * cos(y);
    y = x * sin(y);
}

float PointAxe::rho() {
    return sqrt(r * r + t * t);
}

float PointAxe::theta() {
    return angle(r, t);
}

//Définition de Angle()
float angle(float x, float y) {
    float a = x ? atan(y / x) : 0;
    if (y < 0 && x >= 0)
        return a + pi;
    else return a - pi;
}

//Après
int PointAxe::compteur() {
    return cpt;
}
