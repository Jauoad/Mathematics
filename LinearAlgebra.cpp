// ﷽
// LinearAlgebra.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad

#include <iostream>
#include <vector>

using namespace std;

// Class for Vector operations
class Vector {
public:
    double x, y, z;

    Vector(double x, double y, double z) : x(x), y(y), z(z) {}

    // Dot Product
    double dot(const Vector& other) {
        cout << "Dot Product: A · B = Ax * Bx + Ay * By + Az * Bz\n";
        return (x * other.x + y * other.y + z * other.z);
    }

    // Cross Product
    Vector cross(const Vector& other) {
        cout << "Cross Product:\n";
        cout << "|  i   j   k |\n";
        cout << "|  " << x << "  " << y << "  " << z << " |\n";
        cout << "| " << other.x << " " << other.y << " " << other.z << " |\n";

        return Vector(
            y * other.z - z * other.y, // i-component
            z * other.x - x * other.z, // j-component
            x * other.y - y * other.x  // k-component
        );
    }
};

/*
1. Dot Product:
   Formula: A · B = Ax * Bx + Ay * By + Az * Bz

   Concept:
   The dot product gives a scalar value representing the cosine of the angle between two vectors and is useful in projections and determining orthogonality.

   Example:
   A = (1, 2, 3), B = (4, 5, 6) -> A · B = 1*4 + 2*5 + 3*6 = 32
*/

// Class for Matrix operations
class Matrix {
private:
    vector<vector<double>> mat;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(r, vector<double>(c, 0));
    }

    void setElement(int r, int c, double value) {
        mat[r][c] = value;
    }

    // Matrix Multiplication
    Matrix multiply(const Matrix& other) {
        cout << "Matrix Multiplication:\n";
        Matrix result(rows, other.cols);
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    // Print Matrix
    void print() {
        for (const auto& row : mat) {
            for (double value : row) {
                cout << value << " ";
            }
            cout << endl;
        }
    }

    // Determinant of a 2x2 Matrix
    double determinant() {
        if (rows == 2 && cols == 2) {
            cout << "Determinant of a 2x2 Matrix:\n";
            cout << "det(A) = ad - bc\n";
            return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
        }
        return 0; // Not defined for matrices other than 2x2
    }
};

/*
2. Cross Product:
   Formula: A × B = |  i   j   k  |
                     |  Ax  Ay  Az |
                     |  Bx  By  Bz |

   Concept:
   The cross product results in a vector that is perpendicular to the plane formed by the two original vectors.

   Example:
   A = (1, 2, 3), B = (4, 5, 6) -> A × B = (2*6 - 3*5, 3*4 - 1*6, 1*5 - 2*4)
             = (-3, 6, -3)
*/

int main() {
    Vector A(1, 2, 3);
    Vector B(4, 5, 6);
    
    cout << "Dot Product of A and B: " << A.dot(B) << endl;

    Vector C = A.cross(B);
    cout << "Cross Product of A and B: (" << C.x << ", " << C.y << ", " << C.z << ")" << endl;

    // Matrix example
    Matrix M1(2, 2);
    M1.setElement(0, 0, 1);
    M1.setElement(0, 1, 2);
    M1.setElement(1, 0, 3);
    M1.setElement(1, 1, 4);
    
    cout << "Matrix M1:\n";
    M1.print();
    
    Matrix M2(2, 2);
    M2.setElement(0, 0, 5);
    M2.setElement(0, 1, 6);
    M2.setElement(1, 0, 7);
    M2.setElement(1, 1, 8);
    
    cout << "Matrix M2:\n";
    M2.print();

    Matrix result = M1.multiply(M2);
    cout << "Result of M1 * M2:\n";
    result.print();

    cout << "Determinant of M1: " << M1.determinant() << endl;

    return 0;
}


