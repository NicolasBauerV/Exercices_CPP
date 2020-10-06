//
//  main.cpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#include <iostream>
#include "Part1.hpp"
#include "Exercice2.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
//    Declaration
    Point pt1(2.3, 5.23);
    PointAxe pt2(5.5, 6.95);
    
//    Before moving
    pt1.affiche(pt1);
    
    pt1.deplace(3.5, 4.05);
    
//    After moving
    pt1.affiche(pt1);
    
    cout << "Abscisse point: " << pt2.afficheA(pt2) << endl;
    cout << "Ordonnée point: " << pt2.afficheO(pt2) << endl;
    
    return 0;
}
