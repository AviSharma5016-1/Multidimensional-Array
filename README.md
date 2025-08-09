# Multidimensional Arrays and Matrix Operations in C++ 

## Aim
- To understand the concept and usage of multidimensional arrays (specifically 2D arrays) in C++.
- To implement and practice key matrix operations: reading and displaying matrices, addition, multiplication, transpose, and row-wise comparisons.
- To learn dimension validation, memory management (static and dynamic), and algorithmic implementation of matrix operations.

***

## Theory

### Multidimensional Arrays
A multidimensional array is essentially an array of arrays, allowing data to be stored in a tabular format with rows and columns, commonly referred to as matrices.

- **Declaration:**  
  In C++, a two-dimensional array is declared as `data_type arrayName[rows][columns];`  
  Example: `int matrix;` creates a matrix with 3 rows and 4 columns.

- **Access:**  
  Elements are accessed by two indices: `matrix[i][j]` corresponds to the element in the ith row and jth column. Typically, nested loops are used to process rows and columns.

- **Memory Layout:**  
  Stored in row-major order, where complete rows are stored contiguously.

### Static vs Dynamic Arrays
- **Static arrays** have fixed sizes set at compile time and allocated on the stack. They are simple but lack flexibility in size.
- **Dynamic arrays** use pointers and heap memory (`new` and `delete` operators). They allow sizes to be set at runtime, but need careful management of memory allocation and deallocation.

### Matrix Operations

1. **Matrix Input and Display:**  
   Users input the number of rows and columns, then input values for each element. The matrix is displayed in a structured row-and-column layout.

2. **Addition of Matrices:**  
   Two matrices can be added if and only if their dimensions are equal. The addition is done element-wise, producing a matrix where each element is the sum of the corresponding elements.

3. **Matrix Multiplication:**  
   The number of columns in the first matrix must equal the number of rows in the second. Multiplication involves the dot product of the rows of the first matrix and the columns of the second, resulting in a new matrix with the dimensions of the rows of the first and the columns of the second.

4. **Matrix Transpose:**  
   The transpose of a matrix flips the matrix over its diagonal, swapping rows with columns and vice versa. For a matrix of size r × c, its transpose is c × r.

5. **Row-wise Comparison (Dynamic Allocation):**  
   This involves dynamically allocating a 2D array and comparing elements between the first two rows. It counts how many positions one row has higher, lower, or equal values compared to the other.

***

## Short Algorithms

- **Matrix Input and Display:**  
  - Input rows and columns; validate size.  
  - For each row i and column j, input element.  
  - For each row i and column j, output element.

- **Matrix Addition:**  
  - Input dimensions of both matrices; check equality.  
  - If not equal, display an error and stop.  
  - For each element, sum corresponding elements from both matrices.  
  - Output the result matrix.

- **Matrix Multiplication:**  
  - Input dimensions; ensure cols of first = rows of second.  
  - Initialise result matrix with zeros.  
  - For each row i in the first matrix, for each column j in the second matrix, sum over k the product of elements at positions (i,k) and (k,j).  
  - Output the result matrix.

- **Matrix Transpose:**  
  - Input matrix size and values.  
  - Output the original matrix.  
  - For each column j and row i, output element at (i,j) as element at (j, i) in transpose.

- **Row-wise Comparison (Dynamic Allocation):**  
  - Allocate a matrix dynamically with given rows and columns.  
  - Input matrix values.  
  - Compare elements of the first row and the second row for each column.  
  - Count and display wins, losses, and ties.  
  - Deallocate dynamic memory.

***

## Conclusion
Through this experiment, the concept of multidimensional arrays in C++ was thoroughly explored, focusing on fundamental matrix operations, including input/output, addition, multiplication, transpose, and row-wise comparison. The use of both static and dynamic memory allocation helped demonstrate practical considerations in handling arrays of unknown size at compile time.

Mastering these operations and memory management principles lays a solid foundation for more advanced topics such as matrix algebra, optimisation problems, and efficient data structures involving matrices in software development.

Understanding and implementing these algorithms not only strengthens programming skills but also enhances one's ability to model and solve real-world problems mathematically.
