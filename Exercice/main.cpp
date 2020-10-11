//
//  main.cpp
//  Exercice
//
//  Created by Nicolas BAUER on 06/10/2020.
//

#include <iostream>
#include "Part1.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
//    Declaration
    PointAxe pt1(2.3, 5.23);
    PointAxe pt2(5.5, 6.95);
    
//    Before moving
    cout << "Abscisse point: " << pt2.afficheA() << endl;
    cout << "Ordonnée point: " << pt2.afficheO() << endl << endl;
    
    pt1.deplace(3.5, 4.05);
    
//    After moving
    
    cout << "Abscisse point: " << pt2.afficheA() << endl;
    cout << "Ordonnée point: " << pt2.afficheO() << endl;
    
    
    
    
    
    return 0;
}
