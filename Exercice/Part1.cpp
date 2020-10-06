//
//  Part1.cpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#include <iostream>
#include "Part1.hpp"

Point::Point(float m_nX, float m_nY) {
    m_X = m_nX;
    m_Y = m_nY;
}

float Point::getX(){
    return m_X;
}

float Point::getY(){
    return m_Y;
}

void Point::deplace(float m_nX, float m_nY) {
    this->m_X += m_nX;
    this->m_Y += m_nY;
}

void Point::affiche(Point p) {
    std::cout << "Value of x-point: " << p.getX() << std::endl;
    std::cout << "Value of y-point: " << p.getY() << std::endl << std::endl;
}
