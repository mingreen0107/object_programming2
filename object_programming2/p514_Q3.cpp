#include <iostream>

using namespace std;

class HomeAppliance {
protected:
    int price;

public:
    HomeAppliance(int p) : price(p) {}
    virtual double getPrice() = 0;
};
class Television : public HomeAppliance {
public:
    Television(int p) : HomeAppliance(p) {}
    double getPrice() {
        return price * 0.9;
    }
};

class Refrigerator : public HomeAppliance {
public:
    Refrigerator(int p) : HomeAppliance(p) {}
    double getPrice() {
        return price * 0.95;
    }
};

int main() {

    Television tv(100);
    Refrigerator fridge(200);

    cout << "Television Price: " << tv.getPrice() << endl;
    cout << "Refrigerator Price: " << fridge.getPrice() << endl;

    return 0;
}