// ﷽
// Probability&Statistics.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Function to calculate the probability of an event
double probability(int favorable, int total) {
    if (total == 0) return 0; // Avoid division by zero
    cout << "Calculating Probability: P(E) = Number of favorable outcomes / Total number of outcomes\n";
    return static_cast<double>(favorable) / total;
}

/*
1. Probability of an Event:
   Formula: P(E) = Number of favorable outcomes / Total number of outcomes

   Concept:
   The probability of an event is a measure of the likelihood that the event will occur, ranging from 0 (impossible) to 1 (certain).

   Example:
   If there are 3 red balls and 7 blue balls, the probability of picking a red ball is P(E) = 3/(3+7) = 0.3
*/

// Function to calculate conditional probability
double conditionalProbability(double P_A_and_B, double P_B) {
    if (P_B == 0) return 0; // Avoid division by zero
    cout << "Calculating Conditional Probability: P(A | B) = P(A ∩ B) / P(B)\n";
    return P_A_and_B / P_B;
}

/*
2. Conditional Probability:
   Formula: P(A | B) = P(A ∩ B) / P(B)

   Concept:
   Conditional probability is the probability of an event occurring given that another event has already occurred.

   Example:
   If P(A ∩ B) = 0.2 and P(B) = 0.5, then P(A | B) = 0.2 / 0.5 = 0.4
*/

// Function to apply Bayes' Theorem
double bayesTheorem(double P_B_given_A, double P_A, double P_B) {
    if (P_B == 0) return 0; // Avoid division by zero
    cout << "Applying Bayes' Theorem: P(A | B) = (P(B | A) * P(A)) / P(B)\n";
    return (P_B_given_A * P_A) / P_B;
}

/*
3. Bayes' Theorem:
   Formula: P(A | B) = (P(B | A) * P(A)) / P(B)

   Concept:
   Bayes' Theorem relates the conditional and marginal probabilities of random events, allowing for the updating of probabilities based on new evidence.

   Example:
   If P(B | A) = 0.8, P(A) = 0.5, and P(B) = 0.7, then P(A | B) = (0.8 * 0.5) / 0.7
*/

// Function to calculate expectation
double expectation(const map<double, double>& probabilities) {
    double expected_value = 0;
    cout << "Calculating Expectation:\n";
    for (const auto& pair : probabilities) {
        expected_value += pair.first * pair.second;
        cout << "E(X) += " << pair.first << " * " << pair.second << " = " << expected_value << endl;
    }
    return expected_value;
}

/*
4. Expectation of a Random Variable:
   Formula: E(X) = Σ x_i * P(x_i)

   Concept:
   The expectation (or expected value) is a measure of the center of a probability distribution and represents the average outcome of a random variable.

   Example:
   If X = {1, 2, 3} with probabilities P(X=1) = 0.2, P(X=2) = 0.5, P(X=3) = 0.3, then E(X) = 1*0.2 + 2*0.5 + 3*0.3
*/

// Function to calculate variance
double variance(const map<double, double>& probabilities, double expected_value) {
    double var = 0;
    cout << "Calculating Variance:\n";
    for (const auto& pair : probabilities) {
        var += pair.second * (pair.first - expected_value) * (pair.first - expected_value);
        cout << "Var(X) += " << pair.second << " * (" << pair.first << " - " << expected_value << ")^2 = " << var << endl;
    }
    return var;
}

/*
5. Variance of a Random Variable:
   Formula: Var(X) = E(X^2) - (E(X))^2

   Concept:
   Variance measures the spread of a set of values, indicating how much the values deviate from the mean.

   Example:
   Continuing from the previous example, if E(X) = 2, then Var(X) = E(X^2) - 2^2
*/

int main() {
    // Probability example
    int favorable = 3, total = 10;
    cout << "Probability of the event: " << probability(favorable, total) << endl;

    // Conditional probability example
    double P_A_and_B = 0.2, P_B = 0.5;
    cout << "Conditional Probability P(A | B): " << conditionalProbability(P_A_and_B, P_B) << endl;

    // Bayes' Theorem example
    double P_B_given_A = 0.8, P_A = 0.5;
    cout << "Bayes' Theorem P(A | B): " << bayesTheorem(P_B_given_A, P_A, P_B) << endl;

    // Expectation example
    map<double, double> probabilities = {
        {1.0, 0.2},
        {2.0, 0.5},
        {3.0, 0.3}
    };
    double expected_value = expectation(probabilities);
    cout << "Expected Value E(X): " << expected_value << endl;

    // Variance example
    double var = variance(probabilities, expected_value);
    cout << "Variance Var(X): " << var << endl;

    return 0;
}


