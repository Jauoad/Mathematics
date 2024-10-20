// ﷽
// Geometry.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad

#include <iostream>
#include <cmath>

using namespace std;

// 1. Area of Triangle (Base and Height)
double areaTriangle(double base, double height) {
    cout << "Triangle Area Schema:\n";
    cout << "    |\\\n    | \\\nheight|  \\\n    |   \\\n    |____\\\n      base\n";
    return 0.5 * base * height;
}

// 2. Area of Triangle (Heron's Formula)
double areaHeron(double a, double b, double c) {
    double s = (a + b + c) / 2;
    cout << "Heron's Triangle Schema:\n";
    cout << "    c\n   / \\\n  /   \\\n /     \\\na-------b\n";
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// 3. Area of Square
double areaSquare(double side) {
    cout << "Square Area Schema:\n";
    cout << "+---------+\n|         |\n|         |\n+---------+\n";
    return side * side;
}

// 4. Area of Circle
double areaCircle(double radius) {
    cout << "Circle Area Schema:\n";
    cout << "   *\n *   *\n*     *\n *   *\n   *\n";
    return M_PI * radius * radius;
}

// 5. Perimeter of Triangle
double perimeterTriangle(double a, double b, double c) {
    cout << "Triangle Perimeter Schema:\n";
    cout << "    c\n   / \\\n  /   \\\n /     \\\na-------b\n";
    return a + b + c;
}

// 6. Perimeter of Square
double perimeterSquare(double side) {
    cout << "Square Perimeter Schema:\n";
    cout << "+---------+\n|         |\n|         |\n+---------+\n";
    return 4 * side;
}

// 7. Perimeter of Circle
double perimeterCircle(double radius) {
    cout << "Circle Perimeter Schema:\n";
    cout << "   *\n *   *\n*     *\n *   *\n   *\n";
    return 2 * M_PI * radius;
}

// 8. Distance between two points (2D)
double distance2D(double x1, double y1, double x2, double y2) {
    cout << "Distance 2D Schema:\n";
    cout << "(x1, y1) ------- (x2, y2)\n";
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// 9. Distance between two points (3D)
double distance3D(double x1, double y1, double z1, double x2, double y2, double z2) {
    cout << "Distance 3D Schema:\n";
    cout << "(x1, y1, z1)\n     |\n     |\n(x2, y2, z2)\n";
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

// 10. Pythagorean Theorem
double pythagoreanTheorem(double a, double b) {
    cout << "Pythagorean Theorem Schema:\n";
    cout << "    |\n    |  b\n    |\\\n    | \\\n    |  \\\n    |   \\\n    |____\\\n      a\n";
    return sqrt(a * a + b * b);
}

// 11. Surface Area of Sphere
double surfaceAreaSphere(double radius) {
    cout << "Surface Area Sphere Schema:\n";
    cout << "   *\n *   *\n*     *\n *   *\n   *\n";
    return 4 * M_PI * radius * radius;
}

// 12. Volume of Sphere
double volumeSphere(double radius) {
    cout << "Volume Sphere Schema:\n";
    cout << "   *\n *   *\n*     *\n *   *\n   *\n";
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

// 13. Volume of Cylinder
double volumeCylinder(double radius, double height) {
    cout << "Cylinder Volume Schema:\n";
    cout << " +-----+\n |     | height\n |     |\n +-----+\n";
    return M_PI * radius * radius * height;
}

// 14. Angle Between Two Vectors (Dot Product)
double dotProduct(double Ax, double Ay, double Bx, double By) {
    return (Ax * Bx + Ay * By);
}

double magnitude(double x, double y) {
    return sqrt(x * x + y * y);
}

double angleBetweenVectors(double Ax, double Ay, double Bx, double By) {
    double dot = dotProduct(Ax, Ay, Bx, By);
    double magA = magnitude(Ax, Ay);
    double magB = magnitude(Bx, By);
    cout << "Angle Between Vectors Schema:\n";
    cout << " A (Ax, Ay)\n     \\\n      \\\n       \\\n        \\\n         \\\n B (Bx, By)\n";
    return acos(dot / (magA * magB)); // Angle in radians
}

// 15. Area of Parallelogram
double areaParallelogram(double base, double height) {
    cout << "Parallelogram Area Schema:\n";
    cout << "  +---------+\n /         /\n/         /\n+---------+\n";
    return base * height;
}

int main() {
    // Example usage of each function
    cout << "Area of Triangle (Base: 5, Height: 10): " << areaTriangle(5, 10) << endl;
    cout << "Area of Triangle using Heron (a: 3, b: 4, c: 5): " << areaHeron(3, 4, 5) << endl;
    cout << "Area of Square (side: 4): " << areaSquare(4) << endl;
    cout << "Area of Circle (radius: 5): " << areaCircle(5) << endl;
    cout << "Perimeter of Triangle (a: 3, b: 4, c: 5): " << perimeterTriangle(3, 4, 5) << endl;
    cout << "Perimeter of Square (side: 4): " << perimeterSquare(4) << endl;
    cout << "Perimeter of Circle (radius: 5): " << perimeterCircle(5) << endl;
    cout << "Distance between points (2D): " << distance2D(0, 0, 3, 4) << endl;
    cout << "Distance between points (3D): " << distance3D(0, 0, 0, 3, 4, 5) << endl;
    cout << "Pythagorean Theorem (a: 3, b: 4): " << pythagoreanTheorem(3, 4) << endl;
    cout << "Surface Area of Sphere (radius: 5): " << surfaceAreaSphere(5) << endl;
    cout << "Volume of Sphere (radius: 5): " << volumeSphere(5) << endl;
    cout << "Volume of Cylinder (radius: 5, height: 10): " << volumeCylinder(5, 10) << endl;
    cout << "Angle between vectors (Ax: 1, Ay: 0, Bx: 0, By: 1): " << angleBetweenVectors(1, 0, 0, 1) << " radians" << endl;
    cout << "Area of Parallelogram (Base: 5, Height: 10): " << areaParallelogram(5, 10) << endl;

    return 0;
}

