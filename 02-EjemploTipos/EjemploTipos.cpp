
/*
 * EjemploTipos.cpp
 * Ejemplificación de tipos de datos
 * Ariel Silva
 * 20180420
 */

#include <cassert>
#include <cmath>
#include <string>

int main()
{
    // bool
    bool interruptor{ false };
    interruptor = interruptor and true;
    assert(interruptor == false);

    interruptor = interruptor or true;
    assert(interruptor == true);

    interruptor = not interruptor;
    assert(interruptor == false);

    // char
    char alpha{ 64 };
    assert(alpha == '@');

    alpha = 'a' + 5;
    assert(alpha == 'f');

    alpha = '0' + 7;
    assert(alpha == '7');

    alpha = 'z' - 'a' + 1;
    assert(alpha == 26);

    // unsigned
    unsigned natural{ 9899984 };
    natural = natural % 3;
    assert(natural == 2);

    natural = 16 * 8;
    assert(natural == 128);

    natural = natural - 120;
    assert(natural == 8);

    // int
    int entero{ -88 };
    entero = entero + 128;
    assert(entero == 40);

    entero = entero / natural;
    assert(entero == 5);

    // double
    double pi{ 4.0 * std::atan(1.0) };
    assert(std::fabs(pi - 3.14159265) <= 1e-5);

    double raizdos{ std::sqrt(2.0) };
    assert(std::fabs(raizdos - 1.41421356) <= 1e-5);

    raizdos = raizdos / 2.0;
    assert(std::fabs(raizdos - 0.70710678) <= 1e-5);

    double seno = std::sin(pi);
    assert(std::fabs(seno - 0.0) <= 1e-5);

    double coseno = std::cos(pi / 4.0);
    assert(std::fabs(coseno - raizdos) <= 1e-5);

    // string
    std::string hola{ "Hola " };
    assert(hola.length() == 5);

    hola = hola + "Mundo";
    assert(hola.length() == 10);
    assert(hola == "Hola Mundo");
}
