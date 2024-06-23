#include<iostream>
using namespace std;
class box{
private:
    double height;
    double length;
    double width;
public:
box(double h, double l, double w){
    height=h;
    length=l;
    width=w;
}
    friend void print_dimention(box& b);
    friend class friend_class;

} ;
class friend_class{
public:
    void print_volume(box &b)
    {
        double volume=b.height*b.length*b.width;
        cout <<"\n"<<endl;
        cout<< "volume : " << volume <<endl;

    };
};
void print_dimention(box &b){
     cout<< "Height : " << b.height <<endl;
     cout<< "Length : " << b.length <<endl;
     cout<< "Width : " << b.width <<endl;


}
int main (){
    box b1 (5.6, 7.6, 8);
    print_dimention (b1);
    friend_class fc;
    fc.print_volume(b1);
    return 0;
}


