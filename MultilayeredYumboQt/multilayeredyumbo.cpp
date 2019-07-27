#include <iostream>
#include <list>
#include "bill.cpp"

using namespace std;

class MultilayeredYumbo {
private:

    list<Bill> billList;
    list<Product> productList;
    list<Client> clientList;

public:

   Product createProduct(string name, long barcode, double value, string expirationDate) {
        return Product(name, barcode, value, expirationDate);
   }

    void addProduct(Product product) {
        productList.push_back(product);
    }

    void showWinList(){
        for (std::list<Product>::iterator it = productList.begin(); it != productList.end(); ++it) {
            Product productIn = *it;
            cout << productIn.getName();
        }
    }
};
