#include <iostream>
#include <cmath>
#include <chrono>

double exponent_gain(double gain, int years) {
    if (years > 1) {
        return (1 + gain) * exponent_gain(gain, years - 1);
    } else return (1 + gain);
}

double compound_interest(double assets, double gain, int years) {
    double result = assets * exponent_gain(gain, years);
    std::cout << "The result is: " << result << std::endl;
    return result;
}


void print_asterixes(int n) {
    if (n >= 1) {
        std::cout << "*" << std::endl;
        print_asterixes(n - 1);
    }
}

void print_numbers_down(int n) {
    std::cout << n << " ";
    if (n > 1) {
        print_numbers_down(n - 1);
    }
}

int euklides(int a, int b) {
    if (b != 0) {
        return euklides(b, a % b);
    }

    std::cout << "NWD tych liczb to: " << a << std::endl;
    return a;
}

int sum_digits(int n) {
    if (n >= 1) {
        return n % 10 + sum_digits(n / 10);
    }
    return 0;
}

void print_sum_digits(int n) {
    std::cout << sum_digits(n) << std::endl;
}

// Zadanie, gdzie mamy wybrac wlasna funkcje. Wybralem fibonacciego.

long int fib_recursion(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    } else {
        return fib_recursion(n - 1) + fib_recursion(n - 2);
    }
}

long int fib_iteration(int n) {
    int prev_fib, last_fib = 0;
    int current_fib = 1;
    for (int i = 1; i < n; i++) {
        prev_fib = last_fib;
        last_fib = current_fib;
        current_fib = prev_fib + last_fib;
    }

    return current_fib;
}

double fib_math(int n) {
    return (pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5));
}

void fib_wrapper(int n) {
    auto start_rec = std::chrono::high_resolution_clock::now();
    std::cout << "Wynik fib_recursion: " << fib_recursion(n) << std::endl;
    auto stop_rec = std::chrono::high_resolution_clock::now();
    auto duration_rec = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_rec - start_rec);
    std::cout << "Rekurencja - czas wykonywania: " << duration_rec.count() << " nanosekund.\n";

    auto start_iter = std::chrono::high_resolution_clock::now();
    std::cout << "Wynik fib_iteration: " << fib_iteration(n) << std::endl;
    auto stop_iter = std::chrono::high_resolution_clock::now();
    auto duration_iter = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_iter - start_iter);
    std::cout << "Iteracja - czas wykonywania: " << duration_iter.count() << " nanosekund.\n";

    auto start_math = std::chrono::high_resolution_clock::now();
    std::cout << "Wynik fib_math: " << fib_math(n) << std::endl;
    auto stop_math = std::chrono::high_resolution_clock::now();
    auto duration_math = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_math - start_math);
    std::cout << "Stosunek matematyczny - czas wykonywania: " << duration_math.count() << " nanosekund.\n";


}

// MAIN FUNCTION
int first() {

    // compound_interest(10000, 0.03, 10);
    // print_asterixes(5);
    // print_numbers_down(5);
    // euklides(36, 21);
    // print_sum_digits(55);
    // fib_wrapper(10);


    // Don't touch that!
    return 0;
}