//
//  Exercice2.hpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#ifndef Exercice2_hpp
#define Exercice2_hpp

#include <stdio.h>

class PointAxe {
//    Abscisse, ordonnée
    float a_X;
    float o_Y;
    
public:
    PointAxe(float p_A, float p_O);
    
    float afficheA(PointAxe pA);
    float afficheO(PointAxe pO);
};

#endif /* Exercice2_hpp */
