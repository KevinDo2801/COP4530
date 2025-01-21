#include <iostream>
#include <string>

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

class Passenger {
public:
    Passenger();                      // default constructor
    Passenger(const std::string& nm, MealType mp, int ffn = 0);
    Passenger(const Passenger& pass); // copy constructor
    bool isFrequentFlyer() const;
    void makeFrequentFlyer(int newFreqFlyerNo);
    void print() const;               // print function

private:
    std::string name;
    MealType mealPref;
    bool isFreqFlyer;
    int freqFlyerNo;
};

bool Passenger::isFrequentFlyer() const {
    return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(int newFreqFlyerNo) {
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}

void Passenger::print() const {
    std::cout << "Passenger Name: " << name << "\n";
    std::cout << "Meal Preference: ";
    switch (mealPref) {
        case NO_PREF: std::cout << "No Preference"; break;
        case REGULAR: std::cout << "Regular"; break;
        case LOW_FAT: std::cout << "Low Fat"; break;
        case VEGETARIAN: std::cout << "Vegetarian"; break;
    }
    std::cout << "\n";
    std::cout << "Frequent Flyer Status: " << (isFreqFlyer ? "Yes" : "No") << "\n";
    if (isFreqFlyer) {
        std::cout << "Frequent Flyer Number: " << freqFlyerNo << "\n";
    }
}

Passenger::Passenger() {
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNo = 0;
}

Passenger::Passenger(const std::string& nm, MealType mp, int ffn) {
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != 0); // true only if ffn given
    freqFlyerNo = ffn;
}

Passenger::Passenger(const Passenger& pass) {
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}

int main() {
    // default constructor
    Passenger p1;

    // 2nd constructor
    Passenger p2("John Smith", VEGETARIAN, 293145);

    // 2nd constructor
    Passenger p3("Pocahontas", REGULAR);

    // Copy constructor
    Passenger p4(p3);

    // Copy constructor
    Passenger p5 = p2;
    p5.print();

    // default constructor
    Passenger* pp1 = new Passenger;
    delete pp1;

    // 2nd constructor
    Passenger* pp2 = new Passenger("JoeBlow", NO_PREF);
    delete pp2;

    // default constructor
    Passenger pa[20];

    return 0;
}
