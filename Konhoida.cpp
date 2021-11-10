#include "Konhoida.h"


Konhoida::Konhoida(double a, double p) {            // передаем параметр а и р - коэффициент перед l
    this->_a = a;
    this->setL(p);                          //относительно p вычисляем l, сеттер вычисляет х и у для угла 60 градусов
}

Konhoida::Konhoida(double a, double p, double x) {
    this->_a = a;
    this->_l = p * a;
    this->setX(x);
}

