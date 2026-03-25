#include <iostream>
#include <cmath>

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
    double res = sqrt(pow(p -> x, 2) + pow(p -> y, 2) + pow(p -> z, 2));

    return res;
}

Coord3D * fartherFromOrigin(Coord3D * p1, Coord3D * p2){
    double first = length(p1);
    double second = length(p2);

    return (first > second) ? p1 : p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos -> x = ppos -> x + pvel -> x * dt;
    ppos -> y = ppos -> y + pvel -> y * dt;
    ppos -> z = ppos -> z + pvel -> z * dt;
}


std::string * createAPoemDynamically() {
    std::string *p = new std::string;
    *p = "Roses are red, violets are blue";
    return p;
}

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D * create = new Coord3D{x,y,z};

    return create;
}

// free memory
void deleteCoord3D(Coord3D *p){
    delete p;
    p = nullptr;
}

int main() {
    double x, y, z;
    std::cout << "Enter position: ";
    std::cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    std::cout << "Enter velocity: ";
    std::cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    std::cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}