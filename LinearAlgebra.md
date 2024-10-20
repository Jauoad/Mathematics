# Linear Algebra

## Dot Product

$$
\mathbf{A} \cdot \mathbf{B} = A_x \cdot B_x + A_y \cdot B_y + A_z \cdot B_z
$$

## Cross Product

$$
\mathbf{A} \times \mathbf{B} =
\begin{vmatrix}
\hat{i} & \hat{j} & \hat{k} \\
A_x & A_y & A_z \\
B_x & B_y & B_z \\
\end{vmatrix}
$$

## Matrix Multiplication

For two matrices `A` (of size `m × n`) and `B` (of size `n × p`), the matrix product `C = A ⋅ B` is given by:

$$
C_{ij} = \sum_{k=1}^{n} A_{ik} \cdot B_{kj}
$$

Where:
- A_ik is the element in the i-th row and k-th column of matrix A,
- B_kj is the element in the k-th row and j-th column of matrix B,
- C_ij is the element in the i-th row and j-th column of the resulting matrix C.



## Determinant of a 2x2 Matrix

$$
\text{det}(A) = \begin{vmatrix} a & b \\ c & d \end{vmatrix} = ad - bc
$$
