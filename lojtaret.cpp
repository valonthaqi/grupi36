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

void shtypLojtaret(const Lojtari lojtaret[], int n) {
    for (int i = 0; i < n; i++) {
        cout << lojtaret[i].emri << " (" << lojtaret[i].sporti << "), "
             << lojtaret[i].ekipi << ", " << lojtaret[i].viti_lindjes << endl;
    }
}


void lojtaret_ne_pozite(const Lojtari lojtaret[], int n, const string & pozita) {
    int count = 0;
    cout << "Lojtaret ne poziten: " << pozita << endl;
    for (int i = 0; i < n; i++) {
        string pozicioniStr;
        switch (lojtaret[i].pozicioni) {
            case center: 
             pozicioniStr = "center"; break;
            case power_forward: 
             pozicioniStr = "power_forward"; break;
            case small_forward: 
             pozicioniStr = "small_forward"; break;
            case point_guard: 
             pozicioniStr = "point_guard"; break;
            case shooting_guard: 
             pozicioniStr = "shooting_guard"; break;
            case goalkeeper: 
             pozicioniStr = "goalkeeper"; break;
            case defenders: 
             pozicioniStr = "defenders"; break;
            case midfielders: 
             pozicioniStr = "midfielders"; break;
            case forwards: 
             pozicioniStr = "forwards"; break;
        }
        if (pozicioniStr == pozita) {
            cout << "- " << lojtaret[i].emri << " (" << lojtaret[i].ekipi << ")" << endl;
            count++;
        }
    }
    cout << "Numri i lojtareve ne kete pozite: " << count << endl;
}