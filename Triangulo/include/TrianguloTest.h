#ifndef TRIANGULOTEST_H
#define TRIANGULOTEST_H

#include "string"
#include "Triangulo.h"
//#include "src/Triangulo.cpp"
#include <gtest/gtest.h>

using namespace std;

class TrianguloTest : public testing::Test
{
    protected:

        void SetUp() override
        {
            std::cout << "SetUp.\n";
        }
        void TearDown() override
        {
            std::cout << "TearDown.\n";
        }

        Triangulo<int,int,int> t1;
        Triangulo<int,float,float> t2;
        Triangulo<float,int,double> t3;
};

TEST_F(TrianguloTest, esValido)
{
    t1.setLados(7, 7, 7);
    t2.setLados(5, 6.35, 6.35);
    t3.setLados(9.8, 6, 12.6754385676);
    bool n{t1.esValido()};
    EXPECT_EQ(true, n);
    n = t2.esValido();
    EXPECT_EQ(true, n);
    n = t3.esValido();
    EXPECT_EQ(true, n);
}

TEST_F(TrianguloTest, esEquilatero)
{
    t1.setLados(21, 21, 21);
    t2.setLados(12, 12, 12);
    t3.setLados(9, 9, 9);
    bool n{t1.esEquilatero()};
    EXPECT_EQ(true, n);
    n = t2.esEquilatero();
    EXPECT_EQ(true, n);
    n = t3.esEquilatero();
    EXPECT_EQ(true, n);
}

TEST_F(TrianguloTest, esIsosceles)
{
    t1.setLados(7, 11, 11);
    t2.setLados(10, 12.49, 12.49);
    t3.setLados(13, 9, 13);
    bool n{t2.esIsosceles()};
    EXPECT_EQ(true, n);
    n = t2.esIsosceles();
    EXPECT_EQ(true, n);
    n = t3.esIsosceles();
    EXPECT_EQ(true, n);
}

TEST_F(TrianguloTest, esEscaleno)
{
    t1.setLados(5, 7, 8);
    t2.setLados(5, 6.35, 9.35);
    t3.setLados(19.6, 12, 24.6754385676);
    bool n{t3.esEscaleno()};
    EXPECT_EQ(true, n);
    n = t2.esEscaleno();
    EXPECT_EQ(true, n);
    n = t3.esEscaleno();
    EXPECT_EQ(true, n);
}

TEST_F(TrianguloTest, Equilatero)
{
    t1.setLados(5, 5, 5);
    std::string n{t1.tipo()};
    EXPECT_EQ("EQUILATERO", n);
}

TEST_F(TrianguloTest, Isosceles)
{
    t2.setLados(6, 8.58, 8.58);
    std::string n{t2.tipo()};
    EXPECT_EQ("ISOSCELES", n);
}

TEST_F(TrianguloTest, Escaleno)
{
    t3.setLados(7.36, 8, 6.4576876673);
    std::string n{t3.tipo()};
    EXPECT_EQ("ESCALENO", n);
}

TEST_F(TrianguloTest, Invalido)
{
    t1.setLados(5, 5, 12);
    std::string n{t1.tipo()};
    EXPECT_EQ("INVALIDO", n);
}

#endif // TRIANGULOTEST_H

