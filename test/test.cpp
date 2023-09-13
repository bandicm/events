#include "../lib/events.hpp"

int funkcija(int c) {
    return c*c;
}


int main() {

    event myev;
    int a = 5;
    myev.on("Hey!", [&] () {
        cout << "Hej: " << funkcija(a) << endl;
    });

    myev.emit("Hey!");

}
