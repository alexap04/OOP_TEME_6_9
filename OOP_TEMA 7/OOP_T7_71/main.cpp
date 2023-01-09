#include <iostream>
#include <vector>
using namespace std;
class Wheel {
public:
    Wheel(double raza, double width) : razacerc(raza), widthcerc(width) {}

    double raza() const { return razacerc; }
    double Width() const { return widthcerc; }

private:
    double razacerc;
    double widthcerc;
};

class Carriage {
public:
    Carriage(const vector<Wheel>& wheels) : wheelscerc(wheels) {}

    void ReplaceWheel(int index, const Wheel& newWheel) {
        if (index >= 0 && index < wheelscerc.size()) {
            wheelscerc[index] = newWheel;
        } else {
            cout << "Invalid wheel index." << endl;
        }
    }

    void RemoveWheel(int index) {
        if (index >= 0 && index < wheelscerc.size()) {
            wheelscerc.erase(wheelscerc.begin() + index);
        } else {
            cout << "Invalid wheel index." <<endl;
        }
    }

private:
    vector<Wheel> wheelscerc;
};

class Hummer : public Carriage {
public:
    Hummer(const vector<Wheel>& wheels) : Carriage(wheels) {}
};

int main() {
    vector<Wheel> wheels = { Wheel(1.0, 2.0), Wheel(1.5, 3.0), Wheel(2.0, 4.0), Wheel(2.5, 5.0) };
    Hummer hummer(wheels);
    hummer.ReplaceWheel(2, Wheel(3.0, 6.0));

    hummer.RemoveWheel(3);

    return 0;
}
