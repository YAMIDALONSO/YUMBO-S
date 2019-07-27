#include <iostream>
#include <list>
#include "product.cpp"

using namespace std;

class Client {
private:

    long id;
    string name;
    long cellphone;
    list<Product> purchasedProducts;
    int litersMilkSold;

public:

    const double PRICE_LITER_MILK = 1050;

    void createClient(int id, string name, long cellPhone, list<Product> purchasedProducts,int litersMilkSold){
        this->id = id;
        this->name = name;
        this->cellphone = cellPhone;
        this->purchasedProducts = purchasedProducts;
        this->litersMilkSold = litersMilkSold;
    }
};
