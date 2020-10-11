//
//  Exercice2.hpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#ifndef Exercice2_hpp
#define Exercice2_hpp

#include <iostream>

class PointAxe {
//    Abscisse, ordonnée
    float r;
    float t;
    static int cpt;
    
public:
    static int compteur();
    
//    Constructeur
    PointAxe(float p_A, float p_O);
    
//    Destructeur
    ~PointAxe();
//    Methodes
    float afficheA();
    float afficheO();
    void deplace(float, float);
    
    void homotethie(float hm);
    void rotation(float th);
    float rho();
    float theta();
};

#endif /* Exercice2_hpp */
