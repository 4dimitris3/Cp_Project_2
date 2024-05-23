#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Car
{
    public:
        string carModel;
        string carColor;
        int carSpeed;
        int carMaxSpeed;
};

int main()
{
    int tempspeed;
    Car car1, car2;
    cout << "Type your first car model: " << endl;
    cin >> car1.carModel;
    cout << "Type your first car color: " << endl;
    cin >> car1.carColor;
    cout << "Type your first car max speed" << endl;
    cin >> car1.carMaxSpeed;
    cout << "Type your second car model" << endl;
    cin >> car2.carModel;
    cout << "Type your second car color: " << endl;
    cin >> car2.carColor;
    cout << "Type your second car max speed" << endl;
    cin >> car2.carMaxSpeed;
    if(car1.carMaxSpeed>=car2.carMaxSpeed)
    {
        tempspeed = car1.carMaxSpeed;
    }
    else
    {
        tempspeed = car2.carMaxSpeed;
    }
    srand(car2.carMaxSpeed+car1.carMaxSpeed);
    car1.carSpeed =(rand() %tempspeed-40) + 40;
    if(car1.carMaxSpeed<=car2.carMaxSpeed)
    {
        cout << "Slower is the:\n" << car2.carModel << "\n" << car2.carColor << "\n" << car2.carMaxSpeed << endl;
    }
    else
    {
        cout << "Slower is the:\n" << car1.carModel << "\n" << car1.carColor << "\n" << car1.carMaxSpeed << endl;
    }
    return 0;
}