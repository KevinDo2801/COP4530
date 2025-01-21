#include <iostream>
#include <ostream>
#include <queue>
#include <string>
class Vehicle
{
public:
    Vehicle(); // default constructor
    Vehicle(std::string owr, int y_old);
    virtual void print_info();
    void setOwner(std::string owner) { this->owner = owner; }

protected:
    std::string owner;
    int years_old;
};
Vehicle::Vehicle() : owner(""), years_old(-1) {}
Vehicle::Vehicle(std::string owr, int y_old) : owner(owr), years_old(y_old) {}
void Vehicle::print_info()
{
    std::cout << "Owner: " << owner << std::endl;
    std::cout << "Years old: " << years_old << std::endl;
}
class Car : public Vehicle
{
public:
    Car();
    Car(std::string owr, int y_old, std::string modl, double m_driven);
    virtual void print_info();

protected:
    std::string model;
    double mile_driven;
};
Car::Car() : Vehicle("", -1), model(""), mile_driven(-1) {}
Car::Car(std::string owr, int y_old, std::string modl, double m_driven)
    : Vehicle(owr, y_old), model(modl), mile_driven(m_driven) {}
void Car::print_info()
{
    Vehicle::print_info();
    std::cout << "Model: " << model << std::endl;
    std::cout << "Miles driven: " << mile_driven << std::endl;
}
int main()
{
    Vehicle v1("Bob", 3);
    Vehicle v2;
    v1.print_info();
    std::cout << std::endl;
    v2.print_info();
    std::cout << std::endl;
    Car c1("Bill", 4, "Audi", 12394);
    c1.print_info();
    std::cout << std::endl;
    // object pointers!
    Vehicle *v3 = new Vehicle();
    v3->setOwner("Kevin");
    v3->print_info();
    Car *c2 = new Car("Dan", 9, "Honda", 150389);
    c2->print_info();
    return 0;
}