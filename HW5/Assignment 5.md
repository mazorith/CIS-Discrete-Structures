(When I did this assignment I got a bit confused and had Rebecca walk me though this outside of class)
## Part 1:

1.)Show that the square root of 2 is irrational 

```
-Contradiction-

assuming the square root of 2 is rational
rational number n = x/y; where x/y is a simplified ratio
sqrt(2) = x/y
2 = (x/y)^2   (Square both sides)
2 = x^2/y^2          
2y^2 = x^2
x^2/2 is true if y is even.
y^2/z is true if x is even. 
If x and y are even, then they are divisible by 2, whitch means they are not a simplified ratio.
Therefore sqareroot of 2 cannot be rational. 
```

2.)If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares. 

```
-Exhaustion-

Sqrt(25) = 5    (perfect square)
9 + 16 = 25     (Sum of 2 perfect squares)

Sqrt(100) = 10  (perfect square)
36 + 64 = 100   (sum of 2 perfect squares)

Sqrt(169) = 13  (perfect square)
25 + 144 = 169  (Sum of 2 perfect squares)
```

3)The sum of two odd integers is even. 

```
-Direct Proof-

odd number: 2x+1
even number is 2y
(2x+1) + (2x+1) = 2y
4x + 2 = 2y
2(2x+1) = 2y ; y = 2x+1
2y = 2y
```

4.)The sum of an even integer and it's square is even

```
-Direct Proof-

even integer: 2x
2x + (2x)^2 = 2y
2x + 4x^2 = 2y
2(x+2x^2) = 2y; y = x+2x^2
2y = 2y
```

5.) If n squared is odd, then n is odd

```
-Contrapostion-

if n is even, then n squared is even
defintion of even: 2m
n = 2m
n^2 = (2m)^2
n^2 = 4m^2
n^2 = 2(2m^2)
k = 2m^2
n^2 = 2k
If n is even then n^2 is even and if n is odd, then n^2 is odd. 
```

## Part 2: 

1.)Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
```
Base Case: n = 1
assume true for n=k  
1 + 3 + 5 + ... + 4k-3 = k(2k-1)
1 + 3 + 5 + ... + 4k-3 + 4(k+1)-3 = (k+1)(2(k+1)-1)
k(2k-1) + 4(k+1)-3 = (k+1)(2(k+1)-1)
2k^2 - k + 4k + 4 -3 = (k+1)(2k+2-1)
2k^2 + 3K + 1 = 2k^2 + 3k + 1
k = 1; 5 = 5
true
```

2.)Prove that for any positive integer number n, n^3 + 2n is divisible by 3

```
Base Case: n = 1
n^3 + 2n = 3m (where m is a non-negative integer multiplied by 3 thus divisible by 3) 
n = (k+1)
(k+1)^3 + 2(k+1) = 3m
k^3 + 3k^2 + 3k + 1 + 2k + 2 = 3m
K^3 + 3k + 3k^2 + 3k + 3 = 3m
3m + 3k^2 + 3k + 3 = 3m           
3m + 3(k^2 + k + 1) = 3m
3(m + k^2 + k + 1) = 3m
q + k^2 + k + 1 = m
3m = 3m
```

3.)Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers 
```
9^2n-1 = 8m (where m is a non-negative integer multiplied by 8 thus divisible by 8) 
Base Case: n = 0 
n = k + 1
9^(k+1) -1 + 9^((k+1)+1) -1 = 8m
9^k * 9 - 1 + 9^k * 9^2 -1 = 8m
9 * 9^k -1 + 9^2 * 9^k - 1 = 8m 
9 * 8m + 9^2 * 8m = 8m
8(9m + 9^2m) = 8m
9m + 9^2m = m
8m = 8m 
```

