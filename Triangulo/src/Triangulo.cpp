#include "Triangulo.h"

//template <typename T, typename U, typename V>
//Triangulo<T, U, V>::Triangulo() = default;
//
//template <typename T, typename U, typename V>
//Triangulo<T, U, V>::Triangulo(T ladoA, U ladoB, V ladoC)
//{
//    this->setLadoA(ladoA);
//    this->setLadoB(ladoB);
//    this->setLadoC(ladoC);
//}
//
//template <typename T, typename U, typename V>
//Triangulo<T, U, V>::Triangulo(const Triangulo &o)
//{
//    this->ladoA = o.ladoA;
//    this->ladoB = o.ladoB;
//    this->ladoC = o.ladoC;
//}
//
//template <typename T, typename U, typename V>
//void Triangulo<T, U, V>::setLadoA(const T ladoA)
//{
//    this->ladoA = ladoA;
//}
//
//template <typename T, typename U, typename V>
//T Triangulo<T, U, V>::getLadoA() const
//{
//    return (this->ladoA);
//}
//
//template <typename T, typename U, typename V>
//void Triangulo<T, U, V>::setLadoB(const U ladoB)
//{
//    this->ladoB = ladoB;
//}
//
//template <typename T, typename U, typename V>
//U Triangulo<T, U, V>::getLadoB() const
//{
//    return (this->ladoB);
//}
//
//template <typename T, typename U, typename V>
//void Triangulo<T, U, V>::setLadoC(const V ladoC)
//{
//    this->ladoC = ladoC;
//}
//
//template <typename T, typename U, typename V>
//V Triangulo<T, U, V>::getLadoC() const
//{
//    return (this->ladoC);
//}
//
//template <typename T, typename U, typename V>
//void Triangulo<T, U, V>::setLados(const T ladoA, const U ladoB, const V ladoC)
//{
//    this->setLadoA(ladoA);
//    this->setLadoB(ladoB);
//    this->setLadoC(ladoC);
//}
//
//template <typename T, typename U, typename V>
//bool Triangulo<T, U, V>::esValido() const
//{
//    if((this->getLadoA() + this->getLadoB() > this->getLadoC()) &&
//       (this->getLadoA() + this->getLadoC() > this->getLadoB()) &&
//       (this->getLadoB() + this->getLadoC() > this->getLadoA()))
//        return true;
//    else
//        return false;
//}
//
//template <typename T, typename U, typename V>
//bool Triangulo<T, U, V>::esEquilatero() const
//{
//    if((this->esValido()) &&
//       (this->getLadoA() == this->getLadoB()) &&
//       (this->getLadoB() == this->getLadoC()))
//        return true;
//    else
//        return false;
//}
//
//template <typename T, typename U, typename V>
//bool Triangulo<T, U, V>::esIsosceles() const
//{
//    if((this->esValido()) &&
//       (!this->esEquilatero()) &&
//       ((this->getLadoA() == this->getLadoB()) ||
//        (this->getLadoA() == this->getLadoC()) ||
//        (this->getLadoB() == this->getLadoC())))
//        return true;
//    else
//        return false;
//}
//
//template <typename T, typename U, typename V>
//bool Triangulo<T, U, V>::esEscaleno() const
//{
//    if((this->esValido()) &&
//       (this->getLadoA() != this->getLadoB()) &&
//       (this->getLadoB() != this->getLadoC()))
//        return true;
//    else
//        return false;
//}
