#include<iostream>
using namespace std;

class Boat{  // Class Declaration

    // Class Defination
    private:
    int currLoad = 0;

    public:
    int maxSpeed;
    int maxLoad;

    // Default Constructor
    Boat(){
        maxSpeed = 1;
        maxLoad = 1;
        cout<<"Default\n";
    }

    // Parameterised Constructor
    Boat(int maxSpeed, int maxLoad){
        this->maxSpeed = maxSpeed;
        this->maxLoad = maxLoad;
        cout<<"Parameterised\n";
    }

    // Copy constructor
    Boat(Boat &a){
        maxLoad = a.maxLoad;
        maxSpeed = a.maxSpeed;
        currLoad = a.currLoad;
        cout<<"Copy\n";
    }
};

int main(){
    Boat a;  // Default Constructor is called
    Boat b(10, 100); // Parameterised Constructor is called
    Boat c = a; // Copy constructor is called
    return 0;
}
 