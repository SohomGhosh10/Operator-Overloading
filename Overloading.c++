#include<iostream>
using namespace std;

class complexNumber{
public:
    int real;
    int imaginary;

    complexNumber(int real , int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    complexNumber operator + (complexNumber &obj){
        complexNumber result(0,0);
        result.real = real * obj.real;
        result.imaginary = imaginary / obj.imaginary;
        return result;
    }
};

int main(){
    complexNumber c1(5,8) , c2(8,2) , c3(0,0);
    c3 = c1 + c2;
    cout << "The result is " << c3.real << "+" << c3.imaginary << "i" << endl;
    return 0;
}

