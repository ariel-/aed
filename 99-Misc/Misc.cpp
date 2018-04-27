
/*
 * Misc.cpp
 * Funciones y tests de funciones no abarcadas en los TPs
 * Ariel Silva
 * 20180427
 */

#include <cassert>

double abs(double);
double f(double);
bool fuzzyEq(double, double, double);
double celsius(double);

int main()
{
    double const eps{ 0.001 };

    assert(4 == abs(-4));
    assert(0 == abs(0));
    assert(42 == abs(42));

    assert(-8 == f(-8));
    assert(-2 == f(2));
    assert(1 == f(-1));
    assert(90 == f(90));

    assert(fuzzyEq(0, celsius(32), eps));
    assert(fuzzyEq(100, celsius(212), eps));
    assert(fuzzyEq(-17.778, celsius(0), eps));
}

double abs(double x)
{
    return x >= 0 ? x : -x;
}

double f(double x)
{
    return x > -3 and x < 3 ? -x : x;
}

bool fuzzyEq(double a, double b, double epsilon)
{
    return abs(a - b) <= epsilon;
}

double celsius(double f)
{
    return 5.0 / 9.0 * (f - 32);
}
