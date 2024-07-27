#include<iostream>
#include<string>

class vechile{

protected: 
    std::string name;
    std::string model;
    int noOfTyres;

public:
    std::string getName() {
        return this->name;
    }

    vechile(std::string _name, std::string _model, int _noOfTyres) {
        std::cout << "I am inside vechile ctor." << "\n";
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

public:
    void startEngine() {
        std::cout << "Engine is starting " << name << " " << model << "\n";
    }

    void stopEngine() {
        std::cout << "Engine has stopped " << name << " " << model << "\n";
    }

    ~vechile() {
        std::cout << "I am inside vehicle dtor." << "\n";
    }
};

class car : public vechile {
public:
    int noOfDoors;
    std::string transmissionType;

    car(std::string _name, std::string _model, int _noOfTyres, int _noOfDoors, std::string _transmissionType) : vechile(_name, _model, _noOfTyres){
        std::cout << "I am inside a car ctor." << "\n";
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType; 
    }

    void startAC(){
        std::cout << "AC has started of " << getName() << " " << model << "\n";
    } 

    ~car() {
        std::cout << "I am inside car dtor." << "\n";
    }       
};

class motorCycle : public vechile {
protected:
    std::string handleBarStyle;
    std::string suspensionType;

public:
    motorCycle(std::string _name, std::string _model, int _noOfTyres, std::string _handleBarStyle, std::string _suspensionType) : vechile(_name, _model, _noOfTyres) {
        this->handleBarStyle = _handleBarStyle;
        this->suspensionType = _suspensionType;
    };

    void wheelie() {
        std::cout << name << " is performing a wheelie." << "\n";
    }
    
    ~motorCycle() {
        std::cout << "I am inside motorCycle dtor." << "\n";
    }
};

int main() {
    car A("Volvo", " xc90", 4, 4, "Automatic");
    A.startEngine();
    A.startAC();
    A.stopEngine();
    
    // vechile v;
    // v.name;//not accesible because name is protected(can't be accesed by derived class)
    
    motorCycle M("BMW", "VX1", 2, "U", "Hard");
    M.startEngine();
    M.wheelie();
    M.stopEngine();

    return 0;
}