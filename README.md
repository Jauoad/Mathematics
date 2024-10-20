# This directory contains the c++ code and mathematical formulas for programming.

# Mathematical Formulas for Programming

## 1. Number Theory Formulas

### 1.1 Greatest Common Divisor (GCD)

$$
\text{gcd}(a, b) = \max\{d : d \mid a \text{ and } d \mid b\}
$$

### 1.2 Least Common Multiple (LCM)

$$
\text{lcm}(a, b) = \frac{|a \times b|}{\text{gcd}(a, b)}
$$

### 1.3 Euler's Totient Function

$$
\phi(n) = n \times \prod_{p | n} \left( 1 - \frac{1}{p} \right)
$$

### 1.4 Modular Exponentiation

$$
x^y \mod n
$$

### 1.5 Fermat's Little Theorem

$$
a^{p-1} \equiv 1 \, (\text{mod} \, p)
$$

---

## 2. Graph Theory Formulas

### 2.1 Euler's Formula for Planar Graphs

$$
V - E + F = 2
$$

Where \(V\) is the number of vertices, \(E\) the number of edges, and \(F\) the number of faces.

### 2.2 Degree of a Vertex

$$
\text{degree}(v) = \sum_{v \in E} 1
$$

### 2.3 Adjacency Matrix

Given a graph \(G\), the adjacency matrix \(A\) is defined as:

$$
A[i][j] =
\begin{cases} 
1 & \text{if } (i, j) \in E \\
0 & \text{otherwise} 
\end{cases}
$$

---

## 3. Calculus 1 Formulas

### 3.1 Derivative of a Function

$$
f'(x) = \lim_{h \to 0} \frac{f(x + h) - f(x)}{h}
$$

### 3.2 Power Rule for Differentiation

$$
\frac{d}{dx} (x^n) = n \cdot x^{n - 1}
$$

### 3.3 Product Rule

$$
(f \cdot g)' = f' \cdot g + f \cdot g'
$$

### 3.4 Chain Rule

$$
\frac{dy}{dx} = \frac{dy}{du} \cdot \frac{du}{dx}
$$

---

## 4. Calculus 2 Formulas (Integration)

### 4.1 Definite Integral

$$
\int_a^b f(x) \, dx
$$

### 4.2 Integration by Parts

$$
\int u \, dv = uv - \int v \, du
$$

### 4.3 Fundamental Theorem of Calculus

$$
\int_a^b f'(x) \, dx = f(b) - f(a)
$$

### 4.4 Trigonometric Integrals

$$
\int \sin(x) \, dx = -\cos(x) + C
$$

$$
\int \cos(x) \, dx = \sin(x) + C
$$

---

## 5. Probability and Statistics Formulas

### 5.1 Probability of an Event

$$
P(E) = \frac{\text{Number of favorable outcomes}}{\text{Total number of outcomes}}
$$

### 5.2 Conditional Probability

$$
P(A | B) = \frac{P(A \cap B)}{P(B)}
$$

### 5.3 Bayes' Theorem

$$
P(A | B) = \frac{P(B | A) \cdot P(A)}{P(B)}
$$

### 5.4 Expectation of a Random Variable

$$
E(X) = \sum_{i=1}^n x_i \cdot P(x_i)
$$

### 5.5 Variance of a Random Variable

$$
\text{Var}(X) = E(X^2) - (E(X))^2
$$

---

## 6. Linear Algebra Formulas

### 6.1 Dot Product

$$
\mathbf{A} \cdot \mathbf{B} = A_x \cdot B_x + A_y \cdot B_y + A_z \cdot B_z
$$

### 6.2 Cross Product

$$
\mathbf{A} \times \mathbf{B} =
\begin{vmatrix}
\hat{i} & \hat{j} & \hat{k} \\
A_x & A_y & A_z \\
B_x & B_y & B_z \\
\end{vmatrix}
$$

### 6.3 Matrix Multiplication

For two matrices \(A\) and \(B\):

$$
(A \cdot B)_{ij} = \sum_{k=1}^{n} A_{ik} \cdot B_{kj}
$$

$$
(A \cdot B)_{ij} = \sum_{k=1}^{n} A_{ik} \cdot B_{kj}
$$



### 6.4 Determinant of a 2x2 Matrix

$$
\text{det}(A) = \begin{vmatrix} a & b \\ c & d \end{vmatrix} = ad - bc
$$

---

## 7. Combinatorics Formulas

### 7.1 Factorial

$$
n! = n \times (n-1) \times (n-2) \times \cdots \times 1
$$

### 7.2 Binomial Coefficient

$$
\binom{n}{k} = \frac{n!}{k!(n-k)!}
$$

### 7.3 Permutations of n Objects Taken k at a Time

$$
P(n, k) = \frac{n!}{(n-k)!}
$$

### 7.4 Combinations of n Objects Taken k at a Time

$$
C(n, k) = \frac{n!}{k!(n-k)!}
$$

---

## 8. Trigonometry Formulas

### 8.1 Pythagorean Identity

$$
\sin^2(\theta) + \cos^2(\theta) = 1
$$

### 8.2 Angle Sum Formulas

$$
\sin(\alpha + \beta) = \sin(\alpha)\cos(\beta) + \cos(\alpha)\sin(\beta)
$$

$$
\cos(\alpha + \beta) = \cos(\alpha)\cos(\beta) - \sin(\alpha)\sin(\beta)
$$

### 8.3 Double Angle Formulas

$$
\sin(2\theta) = 2\sin(\theta)\cos(\theta)
$$

$$
\cos(2\theta) = \cos^2(\theta) - \sin^2(\theta)
$$

---

## 9. Geometry Formulas

### 9.1 Area of a Triangle (Base and Height)

$$
A = \frac{1}{2} \times \text{base} \times \text{height}
$$

### 9.2 Area of a Circle

$$
A = \pi \times \text{radius}^2
$$

### 9.3 Volume of a Sphere

$$
V = \frac{4}{3} \times \pi \times \text{radius}^3
$$

### 9.4 Volume of a Cylinder

$$
V = \pi \times \text{radius}^2 \times \text{height}
$$

### 9.5 Distance Between Two Points (2D)

$$
d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
$$
