#include <iostream>
#include <vector>
using namespace std;
class Product{
protected:
    int productID;
    string productName;
    double productPrice;
public:
    Product(int id , string name , double price) 
    : productID(id) , productName(name) , productPrice(price){}

    virtual double calculateDiscount() = 0;

    virtual void display()
    {
        cout << "Product ID: " << productID << endl ;
        cout << "Name: " << productName << endl;
        cout << "Price: " << productPrice << endl ; 
    }

    int getID()
    {
        return productID;
    }
};

class Electronics : public Product{
private:
    int warrantyYears;

public: 
    Electronics(int id , string name , double price , int warranty)
    :Product(id,name,price), warrantyYears(warranty){}

    double calculateDiscount() override 
    {
        if(productPrice > 50000)
        {
            return productPrice*0.1;
        }
        else 
        {
            return productPrice*0.05;
        }
    }

    void display() override
    {
        Product::display();
        cout << "Warranty: " << warrantyYears << endl ;
        cout <<"Discount: " << calculateDiscount() << endl ; 
        cout << "Final price: " << productPrice - calculateDiscount() << endl ;
        cout << "---------------------------" << endl;  
    }
};
class Clothing: public Product{
private: 
    string size;
public:
    Clothing(int id , string name , double price , string s)
    :Product(id,name,price),size(s){}

    double calculateDiscount() override
    {
        return productPrice*0.2;
    }

    void display() override
    {
        Product::display();
        cout << "Size: " << size << endl ;
        cout <<"Discount: " << calculateDiscount() << endl ; 
        cout << "Final price: " << productPrice - calculateDiscount() << endl ;
        cout << "---------------------------" << endl; 
    }
};

class ShoppingCart{
private: 
    vector<Product*> products;
public:
    void addProduct(Product* p)
    {
        products.push_back(p);
    }

    void removeProduct(int id)
    {
        for(int i = 0 ; i < products.size(); i++)
        {
            if(products[i]->getID() == id)
            {
                delete products[i];
                products.erase(products.begin() + i );
                break;
            }
        }
    }

    void displayCart()
    {
        for(int i = 0 ; i < products.size() ; i++)
        {
            products[i]->display();
        }
    }

    ~ShoppingCart()
    {
        for(int i = 0 ; i < products.size() ; i++)
        {
            delete products[i];
        }
    }
};
int main()
{
    ShoppingCart cart;

    cart.addProduct(new Electronics(101,"Laptop",50000,2));
    cart.displayCart();
    cart.addProduct(new Clothing(102,"Shirt",2000,"large"));
    cart.displayCart();
    
    return 0;
}