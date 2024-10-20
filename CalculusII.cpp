// ﷽
// CalculusII.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad


#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

// 1. Definite Integral using the Trapezoidal Rule
double definiteIntegral(function<double(double)> f, double a, double b, int n = 1000) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));

    cout << "Schema of Definite Integral:\n";
    cout << "∫[a,b] f(x) dx\n\n";
    
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }
    return sum * h;
}

/*
Formula: ∫[a,b] f(x) dx (approximated using Trapezoidal Rule)

Concept:
The definite integral is the area under the curve between two points, a and b.

    f(x)
     |\
     | \
     |  \   
     |   \________
     a     ...     b
*/

// 2. Integration by Parts
double integrationByParts(function<double(double)> u, function<double(double)> du, function<double(double)> v, function<double(double)> dv, double a, double b) {
    cout << "Schema of Integration by Parts:\n";
    cout << "∫ u dv = uv - ∫ v du\n\n";
    
    double uv_a = u(a) * v(a);
    double uv_b = u(b) * v(b);
    double integral_v_du = definiteIntegral([&](double x) { return v(x) * du(x); }, a, b);

    return (uv_b - uv_a) - integral_v_du;
}

/*
Formula: ∫ u dv = uv - ∫ v du

Concept:
The integration by parts rule helps integrate products of functions by breaking them down.

    ∫ u dv
    |
    |    = uv - ∫ v du
    |_________|
*/

// 3. Fundamental Theorem of Calculus
double fundamentalTheoremOfCalculus(function<double(double)> f_prime, double a, double b) {
    cout << "Schema of Fundamental Theorem of Calculus:\n";
    cout << "∫[a,b] f'(x) dx = f(b) - f(a)\n\n";
    
    return f_prime(b) - f_prime(a);
}

/*
Formula: ∫[a,b] f'(x) dx = f(b) - f(a)

Concept:
The fundamental theorem connects differentiation and integration, showing that integration is the reverse process of differentiation.

    f'(x)
    |
    |____∫[a,b] f'(x) dx = f(b) - f(a)
    |_______________|
*/

// 4. Trigonometric Integrals
double integrateSin(double a, double b) {
    cout << "Schema of Trigonometric Integral (sin):\n";
    cout << "∫ sin(x) dx = -cos(x) + C\n\n";

    return -cos(b) + cos(a);
}

double integrateCos(double a, double b) {
    cout << "Schema of Trigonometric Integral (cos):\n";
    cout << "∫ cos(x) dx = sin(x) + C\n\n";

    return sin(b) - sin(a);
}

/*
Formulas:
∫ sin(x) dx = -cos(x) + C
∫ cos(x) dx = sin(x) + C

Concept:
These are the basic trigonometric integrals used frequently in calculus.

    sin(x)
     |  /
     | /
     |/
     |
     |
     
    cos(x)
     /|
    / |
   /  |
  /   |
*/

// Example usage of these functions
int main() {
    auto f = [](double x) { return pow(x, 2); };  // Function f(x) = x^2
    auto u = [](double x) { return x; };          // u(x) = x (for integration by parts)
    auto du = [](double x) { return 1; };         // du = dx
    auto v = [](double x) { return exp(x); };     // v(x) = e^x
    auto dv = [](double x) { return exp(x); };    // dv = e^x dx

    double a = 0.0, b = 1.0;

    cout << "Definite Integral of f(x) = x^2 from 0 to 1: " << definiteIntegral(f, a, b) << endl;
    cout << "Integration by Parts for ∫x e^x dx from 0 to 1: " << integrationByParts(u, du, v, dv, a, b) << endl;
    cout << "Fundamental Theorem of Calculus for f'(x) = 2x from 0 to 1: " << fundamentalTheoremOfCalculus(f, a, b) << endl;
    cout << "Trigonometric Integral of sin(x) from 0 to π: " << integrateSin(0, M_PI) << endl;
    cout << "Trigonometric Integral of cos(x) from 0 to π/2: " << integrateCos(0, M_PI / 2) << endl;

    return 0;
}
