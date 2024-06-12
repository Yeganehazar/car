#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int mileage;
    
    Car() : brand(""), model(""), mileage(0) {}

    
    void drive(int distance) {
        if (distance > 0) {
            mileage += distance;
        } else {
            cout << "Distance must be positive." << endl;
        }
    }

    
    void showData() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Distance driven: " << mileage << "km" << endl;
    }
};

int main() {
    Car car;

    
    cout << "Enter the brand of the car: ";
    getline(cin, car.brand);
    cout << "Enter the model of the car: ";
    getline(cin, car.model);
    cout << "Enter the current mileage of the car: ";
    cin >> car.mileage;

    
    cout << "\nInitial car data:" << endl;
    car.showData();


    int distance;
    cout << "\nEnter the distance to drive: ";
    cin >> distance;
    car.drive(distance);

    
    cout << "\nUpdated car data:" << endl;
    car.showData();

    return 0;
}
