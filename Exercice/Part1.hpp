//
//  Part1.hpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#ifndef Part1_hpp
#define Part1_hpp

#include <stdio.h>

class Point {
//    Private
//member_coord
    float m_X;
    float m_Y;
    
public:
//    Constructor
    Point(float m_nX, float m_nY);
    
//    Method member
    void deplace(float m_nX, float m_nY);
    void affiche(Point p);

    float getX();
    float getY();
    
};

#endif /* Part1_hpp */
