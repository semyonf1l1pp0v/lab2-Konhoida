#pragma once

#include <gtest/gtest.h>
#include "../Konhoida.cpp"

TEST(Constructor, with_two_param) {
    double a = 4, p = 2;
    myNameSpace::Konhoida k(a, p);
    ASSERT_EQ(a, k.getA());
    ASSERT_EQ(p * a, k.getL());
}

TEST(Constructor, with_three_param) {
    double a = 4, p = 2, x = 1;
    myNameSpace::Konhoida k(a, p, x);
    ASSERT_EQ(a, k.getA());
    ASSERT_EQ(p * a, k.getL());
    ASSERT_EQ(x, k.getX());
}

TEST(Setters, setX) {
    double a = 4, p = 2;
    myNameSpace::Konhoida k1(a, p);
    k1.setX(1);
    ASSERT_EQ(1, k1.getX());
    k1.setX(-1);
    ASSERT_EQ(-1, k1.getX());
    k1.setX(0);
    ASSERT_EQ(0, k1.getX());
    k1.setX(100000000);
    ASSERT_EQ(100000000, k1.getX());
    k1.setX(-100000000);
    ASSERT_EQ(-100000000, k1.getX());
}

TEST(Setters, setA) {
    double a = 4, p = 2;
    myNameSpace::Konhoida k1(a, p);
    k1.setA(1);
    ASSERT_EQ(1, k1.getA());
    k1.setA(-1);
    ASSERT_EQ(-1, k1.getA());
    k1.setA(0);
    ASSERT_EQ(0, k1.getA());
    k1.setA(100000000);
    ASSERT_EQ(100000000, k1.getA());
    k1.setA(-100000000);
    ASSERT_EQ(-100000000, k1.getA());
}

TEST(Setters, setL) {
    double a = 4, p = 2;
    myNameSpace::Konhoida k1(a, p);
    k1.setL(p);
    ASSERT_EQ(8, k1.getL());
}

TEST(Radius, R1) {
    double a = 4, p = 2;
    myNameSpace::Konhoida k1(a, p);
    k1.R1();
    ASSERT_EQ(72, k1.R1());
}

TEST(Radius, R2) {
    double a = 4, p = 2;
    myNameSpace::Konhoida k1(a, p);
    k1.R1();
    ASSERT_EQ(8, k1.R2());
}

TEST(Radius, R3) {
    double a = 4, p = 2;
    myNameSpace::Konhoida k1(a, p);
    k1.R3();
    ASSERT_NEAR(6.9282, k1.R3(), 0.0001);
}

TEST(Square, area){
    double a = 4, p = 2;
    myNameSpace::Konhoida k1(a, p);
    k1.area();
    ASSERT_NEAR(10.4482, k1.area(), 0.0001);
}

TEST(Getters, getRByD){
    double a = 4, p = 2, d = 60;
    myNameSpace::Konhoida k1(a, p);
    ASSERT_NEAR(16, k1.getRbyD(d), 0.0001);
}
