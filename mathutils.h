#ifndef MATHUTILS_H
#define MATHUTILS_H


inline int square(int x) {
    return x * x;
}

inline int cube(int x) {
    return x * x * x;
}


inline int max2(int a, int b) {
    return (a > b) ? a : b;
}

inline int min2(int a, int b) {
    return (a < b) ? a : b;
}


inline bool isEven(int n) {
    return n % 2 == 0;
}

inline bool isOdd(int n) {
    return n % 2 != 0;
}

inline int absolute(int n) {
    return (n < 0) ? -n : n;
}


inline void swapInt(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

inline bool isPositive(int n) {
    return n > 0;
}


inline bool isNegative(int n) {
    return n < 0;
}


inline int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}


inline bool isPalindrome(int n) {
    return n == reverseNumber(n);
}


inline int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


inline int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}


inline bool isArmstrong(int n) {
    int digits = countDigits(n);
    int temp = n, sum = 0;

    while (temp != 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) p *= d;  
        sum += p;
        temp /= 10;
    }
    return sum == n;
}

inline bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


inline int factorial(int n) {
    if (n < 0) return -1; 
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

inline bool isPerfect(int n) {
    if (n <= 1) return false;

    int sum = 1; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += (n / i);
        }
    }
    return sum == n;
}

inline bool isStrong(int n) {
    int temp = n, sum = 0;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}


inline bool isHarshad(int n) {
    int s = sumOfDigits(n);
    return (s != 0 && n % s == 0);
}

inline int fibonacci(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) { c = a + b; a = b; b = c; }
    return b;
}


inline int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


inline int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

#endif
