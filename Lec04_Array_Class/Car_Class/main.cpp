#include <iostream>
#include "Car.h" 
using namespace std;

class SportsCar : public Car {
public:
    bool bTurbo;

    SportsCar(int s, const char* n, int g, bool bTur) : Car(s, n, g) {
        bTurbo = bTur;
    }

    void setTurbo(bool bTur) { bTurbo = bTur; }
    void speedUp() {
        if (bTurbo) speed += 20;
        else Car::speedUp();
    }
};


int main() {
    SportsCar myCar(0, "하늘자동차", 3, false);

    cout << "--- 일반 주행 모드 ---" << endl;
    myCar.speedUp(); 
    myCar.display();

    cout << "\n--- 터보 주행 모드 ---" << endl;
    myCar.setTurbo(true); 
    myCar.speedUp();      
    myCar.display();

    return 0;
}