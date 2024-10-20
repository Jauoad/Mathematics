// ﷽
// Combinatorics.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad

#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    cout << "Schema of Factorial:\n";
    cout << "n! = n * (n-1) * (n-2) * ... * 1\n\n";

    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

/*
Formula: n! = n * (n-1) * (n-2) * ... * 1

Concept:
The factorial of a number is the product of all integers from 1 to n.

    n! is often used in counting problems, like permutations and combinations.

    n! = n * (n-1) * (n-2) * ... * 1
    For example: 5! = 5 * 4 * 3 * 2 * 1 = 120
*/

// Function to calculate binomial coefficient (n choose k)
unsigned long long binomialCoefficient(int n, int k) {
    cout << "Schema of Binomial Coefficient:\n";
    cout << "C(n, k) = n! / [k! * (n-k)!]\n\n";

    if (k > n) return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

/*
Formula: C(n, k) = n! / [k!(n-k)!]

Concept:
The binomial coefficient counts the number of ways to choose k elements from a set of n elements.

    C(n, k)
    |
    |     ___________
    |    /    k      \
    n _____________>   (choose k out of n)
    |_______________|
*/

// Function to calculate permutations P(n, k)
unsigned long long permutations(int n, int k) {
    cout << "Schema of Permutations:\n";
    cout << "P(n, k) = n! / (n-k)!\n\n";

    return factorial(n) / factorial(n - k);
}

/*
Formula: P(n, k) = n! / (n-k)!

Concept:
Permutations count the number of ways to arrange k elements from a set of n distinct elements.

    P(n, k)
    |
    |     ___________
    |    /    k      \
    n _____________>   (arrange k out of n)
    |_______________|
*/

// Function to calculate combinations C(n, k)
unsigned long long combinations(int n, int k) {
    cout << "Schema of Combinations:\n";
    cout << "C(n, k) = n! / [k!(n-k)!]\n\n";

    return binomialCoefficient(n, k);
}

/*
Formula: C(n, k) = n! / [k!(n-k)!]

Concept:
Combinations count the number of ways to choose k elements from a set of n distinct elements, without regard to the order.

    C(n, k)
    |
    |     ___________
    |    /    k      \
    n _____________>   (choose k without considering order)
    |_______________|
*/

int main() {
    int n = 5, k = 3;

    cout << "Factorial of 5: " << factorial(n) << endl;
    cout << "Binomial Coefficient C(5, 3): " << binomialCoefficient(n, k) << endl;
    cout << "Permutations P(5, 3): " << permutations(n, k) << endl;
    cout << "Combinations C(5, 3): " << combinations(n, k) << endl;

    return 0;
}
