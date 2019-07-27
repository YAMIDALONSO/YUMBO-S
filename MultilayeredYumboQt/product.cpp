#include <iostream>

using namespace std;

class Product {
private:

    string name;
    long barcode;
    double value;
    string expirationDate;

public:

    Product(string name, long barcode, double value, string expirationDate) :
    name(name), barcode(barcode), value(value), expirationDate(expirationDate) {
    }

    string getName() const {
        return name;
    }
};
