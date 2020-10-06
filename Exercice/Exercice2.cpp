//
//  Exercice2.cpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#include <iostream>
#include "Exercice2.hpp"
//  Define Constructor
PointAxe::PointAxe(float p_A, float p_O) : a_X(p_A), o_Y(p_O) {}

float PointAxe::afficheA(PointAxe pA) {
    return pA.a_X;
}

float PointAxe::afficheO(PointAxe pO) {
    return pO.o_Y;
}
