#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string m, int y) {
        model = m;
        year = y;
        cout << "Car object created.\n";
    }

    void show() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }

    ~Car() {
        cout << "Car object destroyed.\n";
    }
};

int main() {
    // Dynamic allocation
    Car* myCar = new Car("Honda City", 2022);
    myCar->show();

    // Free memory
    delete myCar;

    return 0;
}

