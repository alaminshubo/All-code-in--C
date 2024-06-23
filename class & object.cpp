#include<iostream>
using namespace std;
class Book{
private:
    string title;
    string author;
    int page;
    float price;
public:
    Book (string t,string au, int pn, float p){
    title=t;
    author=au;
    page=pn;
    price=p;
    }
    void displayInfo(){
    cout<<"Title of the book name : "<<title<<endl;
    cout<<"Name of the author name : "<<author<<endl;
    cout<<"Number of page : "<<page<<endl;
    cout<<"Price : "<<price<<endl;

    }
    void applyDiscount(float d){
    price=price-price*(d/100);
    }

};

int main(){

Book b1("Intro to cpp","Akib",200,300);
Book b2("Intro to DS","Emon",500,400);
Book b3("Intro to DM","AlAmin",100,600);
Book b4("Intro to Math","Rifat",300,500);
b1.displayInfo();
cout <<"<==== Discount Price ====>"<<endl;
b1.applyDiscount(50);
b1.displayInfo();
cout <<"\n"<<endl;
b2.displayInfo();
cout <<"<==== Discount Price ====>"<<endl;
b2.applyDiscount(20);
b2.displayInfo();
cout <<"\n"<<endl;
b3.displayInfo();
cout <<"<==== Discount Price ====>"<<endl;
b3.applyDiscount(0);
b3.displayInfo();
cout <<"\n"<<endl;
b4.displayInfo();
cout <<"<==== Discount Price ====>"<<endl;
b4.applyDiscount(80);
b4.displayInfo();

return 0;
}

