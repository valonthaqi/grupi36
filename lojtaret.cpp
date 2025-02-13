#include <iostream>
#include <string>
using namespace std;

enum Pozicioni {
    center, 
    power_forward, 
    small_forward, 
    point_guard, 
    shooting_guard,

    goalkeeper,
    defenders,
    midfielders,
    forwards,
};

struct Lojtari {
    string emri;
    string ekipi;
    string sporti;
    Pozicioni pozicioni;
    int viti_lindjes;
};