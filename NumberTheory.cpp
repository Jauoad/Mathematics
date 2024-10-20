// ﷽
// NumberTheory.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad

#include <iostream>
#include <vector>

using namespace std;

// Function to calculate GCD using Euclid's algorithm
int gcd(int a, int b) {
    cout << "Calculating GCD of " << a << " and " << b << ":\n";
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/*
1. Greatest Common Divisor (GCD):
   Formula: gcd(a, b) = max{d : d | a and d | b}

   Concept:
   The GCD of two integers is the largest integer that divides both without leaving a remainder.

   Example:
   gcd(48, 18) = 6
*/

// Function to calculate LCM
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // Using the relationship between GCD and LCM
}

/*
2. Least Common Multiple (LCM):
   Formula: lcm(a, b) = |a * b| / gcd(a, b)

   Concept:
   The LCM of two integers is the smallest integer that is a multiple of both.

   Example:
   lcm(4, 5) = 20
*/

// Function to calculate Euler's Totient Function
int eulerTotient(int n) {
    int result = n; // Initialize result as n
    cout << "Calculating Euler's Totient Function φ(" << n << "):\n";
    
    for (int p = 2; p * p <= n; p++) {
        // Check if p is a divisor of n
        if (n % p == 0) {
            // If yes, it contributes to the totient
            while (n % p == 0) {
                n /= p; // Remove all occurrences of p
            }
            result -= result / p; // Adjust the result
        }
    }
    if (n > 1) { // If n is a prime number greater than 1
        result -= result / n;
    }
    return result;
}

/*
3. Euler's Totient Function:
   Formula: φ(n) = n × ∏(p | n) (1 - 1/p)

   Concept:
   The totient function counts the integers up to n that are coprime with n.

   Example:
   φ(9) = 6 because {1, 2, 4, 5, 7, 8} are coprime with 9.
*/

// Function to perform modular exponentiation
long long modularExponentiation(int base, int exp, int mod) {
    long long result = 1;
    base = base % mod; // Handle the base if it is more than mod

    cout << "Calculating " << base << "^" << exp << " mod " << mod << ":\n";
    
    while (exp > 0) {
        if (exp % 2 == 1) { // If exp is odd
            result = (result * base) % mod;
        }
        exp = exp >> 1; // Divide exp by 2
        base = (base * base) % mod; // Square the base
    }
    return result;
}

/*
4. Modular Exponentiation:
   Formula: x^y mod n

   Concept:
   It allows us to compute large powers modulo some number efficiently.

   Example:
   2^10 mod 1000 = 24
*/

// Function to apply Fermat's Little Theorem
bool fermatLittleTheorem(int a, int p) {
    if (p <= 1) return false; // p must be a prime number
    long long left = modularExponentiation(a, p - 1, p);
    return left == 1; // a^(p-1) ≡ 1 (mod p)
}

/*
5. Fermat's Little Theorem:
   Formula: a^(p-1) ≡ 1 (mod p)

   Concept:
   This theorem states that if p is a prime and a is an integer not divisible by p, then a^(p-1) mod p = 1.

   Example:
   For a = 2 and p = 5, 2^(5-1) mod 5 = 1
*/

int main() {
    int a = 48, b = 18;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl;

    cout << "LCM of " << a << " and " << b << ": " << lcm(a, b) << endl;

    int n = 9;
    cout << "Euler's Totient Function φ(" << n << "): " << eulerTotient(n) << endl;

    int base = 2, exp = 10, mod = 1000;
    cout << base << "^" << exp << " mod " << mod << ": " << modularExponentiation(base, exp, mod) << endl;

    int test_a = 2, test_p = 5;
    cout << "Fermat's Little Theorem test for a = " << test_a << ", p = " << test_p << ": " 
         << (fermatLittleTheorem(test_a, test_p) ? "True" : "False") << endl;

    return 0;
}

