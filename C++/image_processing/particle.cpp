#include <iostream>
#include <cmath> 

class Coord3D {
public:
    double x;
    double y;
    double z;
};

class Particle{
    public:
        // position 
        double x, y , z;
        
        // velocity 
        double vx, vy, vz;
};

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, 
                         double vx, double vy, double vz){
    Particle* creation = new Particle{x,y,z,vx,vy, vz};
    return creation;
}
// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz){
    p -> vx = vx;
    p -> vy = vy;
    p -> vz = vz;
}
// get its current position
Coord3D getPosition(Particle *p){
    Coord3D instance = {p -> x, p -> y , p -> z};
    return instance;
}
// update particle's position after elapsed time dt
void move(Particle *p, double dt){
    p -> x = p -> x + p -> vx * dt;
    p -> y = p -> y + p -> vy * dt;
    p -> z = p -> z + p -> vz * dt;
}
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){
    delete p;
    p = nullptr;
}

int main() {
    // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        std::cout << "Time: " << time << " \t";
        std::cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << std::endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
}