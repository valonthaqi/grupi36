#include <iostream>
#include <string>
using namespace std;

// Enum për pozicionet
enum Pozicioni {
    center, 
    power_forward, 
    small_forward, 
    point_guard, 
    shooting_guard,

    goalkeeper,
    defenders,
    midfielders,
    forwards
};

// Struktura e lojtarit
struct Lojtari {
    string emri;
    string ekipi;
    string sporti;
    Pozicioni pozicioni;
    int viti_lindjes;
};

// Funksioni për të shtypur lojtarët
void shtypLojtaret(const Lojtari lojtaret[], int n) {
    for (int i = 0; i < n; i++) {
        cout << lojtaret[i].emri << " (" << lojtaret[i].sporti << "), "
             << lojtaret[i].ekipi << ", " << lojtaret[i].viti_lindjes << endl;
    }
}
// Funksioni për të numëruar lojtarët dhe për t'i shtypur ata në një pozitë
void lojtaret_ne_pozite(const Lojtari lojtaret[], int n, const string & pozita) {
    int count = 0;
    cout << "Lojtaret ne poziten: " << pozita << endl;
    for (int i = 0; i < n; i++) {
        string pozicioniStr;
        switch (lojtaret[i].pozicioni) {
            case center: 
             pozicioniStr = "center"; break;
            case power_forward: 
             pozicioniStr = "power forward"; break;
            case small_forward: 
             pozicioniStr = "small forward"; break;
            case point_guard: 
             pozicioniStr = "point guard"; break;
            case shooting_guard: 
             pozicioniStr = "shooting guard"; break;
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
int main() {
    // Deklarimi i lojtarëve
    const int N = 6;
    Lojtari lojtaret[N] = {
        {"LeBron James", "Lakers", "Basketball", power_forward, 1984},
        {"Stephen Curry", "Warriors", "Basketball", point_guard, 1988},
        {"Devin Booker", "Phoenix Suns", "Basketball", shooting_guard, 1996},
        {"Lionel Messi", "Inter Miami", "Football", forwards, 1987},
        {"Cristiano Ronaldo", "Al-Nassr", "Football", forwards, 1985},
        {"Virgil van Dijk", "Liverpool", "Football", defenders, 1991}
    };

    // Shtypja e të gjithë lojtarëve
    cout << "Lista e lojtareve:" << endl;
    shtypLojtaret(lojtaret, N);

    // Input nga përdoruesi
    string pozita;
    cout <<endl<< "Shkruani poziten e lojtarit: ";
    getline(cin, pozita);

    lojtaret_ne_pozite(lojtaret, N, pozita);

    return 0;
}