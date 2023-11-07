The provided code calculates the Fibonacci sequence using a recursive approach with memoization to store intermediate results. Here's a breakdown of the code's time complexity:

The function `fibo` is a recursive function that computes the Fibonacci number for a given input `n`. It uses an array `arr` to store previously computed values, preventing redundant calculations and reducing the time complexity by memoization.

### Time Complexity:

1. **Recursive Calls:**
   - For a given input `n`, the function may call itself two times (`fibo(n-1)` and `fibo(n-2)`) until it reaches the base case where `n <= 2`.
   - As each call generates two more recursive calls, it results in a tree of function calls. The number of function calls grows exponentially with the input `n`.

2. **Memoization:**
   - Memoization in the `arr` array allows the function to store and reuse previously computed values. If `arr[n]` is not equal to zero (meaning the value for `n` has already been computed), it avoids redundant calculations.

### Overall Time Complexity Analysis:

The time complexity of the recursive Fibonacci function without memoization is exponential (O(2^n)) due to the branching nature of the recursive calls.

However, with memoization in place, the time complexity is significantly reduced. The time complexity of the provided code with memoization can be considered to be linear (O(n)). This is because, with the memoization technique, each value for `n` is calculated only once and stored for later reuse. The recursive calls for each value of `n` would occur only if the value hasn't been computed before, leading to a linear number of operations proportional to `n`.

### Analysis for the Provided `fibo()` Function:

- For each call, the function checks the value in the array `arr` and computes only if the value is not already present, thus reducing redundant calculations.
- The maximum number of recursive calls for a given `n` is significantly reduced with memoization, making the time complexity linear.

In the `main` function, `fibo(5)`, `fibo(15)`, and `fibo(50)` are called, each taking a relatively short time because of memoization, which minimizes the redundant calculations and provides the Fibonacci values quickly.

While the time complexity is significantly reduced with memoization to O(n) for the Fibonacci sequence, space complexity also increases due to the storage of intermediate results in the `arr` array, requiring O(n) additional space.

![fibonacci](Algorithms/13_dynamic_programming/01_optiminzed_fibonacci/dyna_fib.jpeg)