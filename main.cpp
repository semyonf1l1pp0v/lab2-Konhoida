#include <iostream>
#include "Konhoida.h"


int main() {
    double a, p, d, x;
    std::cout << "Введите параметр а: ";
    std::cin >> a;
    std::cout << "Введите параметр p - множитель для l: ";
    std::cin >> p;
    Konhoida k(a, p);

    std::cout << "Вы ввели:" << std::endl;
    k.printInfo();
    std::cout << "Площадь петли конхоиды: ";
    if (k.getL() >= k.getA()) {
        std::cout << k.area() << std::endl;     //  если  l < a - петли нет
    } else
        std::cout << "у конхоиды нет петли" << std::endl;

    std::cout << "Введите угол d: ";
    std::cin >> d;
    std::cout << "Расстояние до центра в полярных координатах: ";
    std::cout << k.getRbyD(d) << std::endl;

    std::cout << "Радиусы кривизны в характерных точках конхоиды: " << std::endl;
    std::cout << k.R1() << std::endl;
    std::cout << k.R2() << std::endl;
    std::cout << k.R3() << std::endl;

    std::cout << "Введите х: ";
    std::cin >> x;
    Konhoida k1(a, p, x);
    std::cout << "Вы ввели:" << std::endl;
    k1.printInfo();
    return 0;
}
