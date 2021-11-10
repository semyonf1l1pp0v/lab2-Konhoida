#ifndef LAB2_KONHOIDA_H
#define LAB2_KONHOIDA_H

#include <iostream>
#include <cmath>

class Konhoida {
private:
    double _x, _y, _a, _l;

    double getYByD(double d) {
        return this->_a * tan(d * M_PI / 180) + this->_l * sin(d * M_PI / 180);
    }

    double getXByD(double d) {
        return this->_a + this->_l * cos(d * M_PI / 180);
    }

    double getDByX() {
        return acos(((this->_x - this->_a) / this->_l)) * 180 / M_PI;
    }

public:

    Konhoida(double a, double p);               // передаем параметр а и р - коэффициент перед l

    Konhoida(double a, double p, double x);

    ~Konhoida() {}

    double area() {
        double firstPart = (this->_a) * sqrt(pow(this->_l, 2) - pow(this->_a, 2));
        double secondPart =
                2 * this->_a * this->_l * log((this->_l + sqrt(pow(this->_l, 2) - pow(this->_a, 2))) / this->_a);
        double thirdPart = pow(this->_l, 2) * (acos(this->_a / this->_l));
        return firstPart - secondPart + thirdPart;
    }

    double R1() {
        return pow(this->_l + this->_a, 2) / 2;
    }

    double R2() {
        return pow(this->_l - this->_a, 2) / 2;
    }

    double R3() {
        return (this->_l * sqrt(pow(this->_l, 2) - pow(this->_a, 2))) / (2 * this->_a);
    }

    void printInfo() {
        std::cout << "a = " << this->getA() << std::endl;
        std::cout << "l = " << this->getL() << std::endl;
        std::cout << "x = " << this->getX() << std::endl;
        std::cout << "y = " << this->getY() << std::endl;
    }

    double getRbyD(double d) {
        return this->_a / cos(d * M_PI / 180) + this->_l;
    }

    //геттеры
    double getX() {
        return this->_x;
    }

    double getY() {
        return this->_y;
    }

    double getA() {
        return this->_a;
    }

    double getL() {
        return this->_l;
    }

    //сеттеры
    void setX(double x) {
        this->_x = x;
        this->_y = getYByD(getDByX());
    }

    void setA(double a) {
        this->_a = a;
        this->setX(getXByD(60));
    }

    void setL(double p) {
        this->_l = p * this->_a;
        this->setX(getXByD(60));
    }

};


#endif //LAB2_KONHOIDA_H
