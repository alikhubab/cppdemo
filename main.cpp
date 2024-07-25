#include <iostream>

int add(int a, int b);

std::string add(std::string a, std::string b);

inline int square(const int x) {
    return x * x;
}

int factorial(int n) {
    if(n <= 1) {
        return 1;
    }else {
        return n + factorial(n - 1);
    }
}

int main() {
    const int res = add(5, 6);
    const std::string res2  = add("ali", "baba");
    const int squareOf2 = square(2);
    std::cout << "Result:" << res << std::endl;
    std::cout << "Result2:" << res2 << std::endl;
    std::cout << "squareOf2:" << squareOf2 << std::endl;
    std::cout << "factorial:" << factorial(4) << std::endl;

    return 0;
}

int add(const int a, const int b) {
    return a + b;
}

std::string add(std::string a, const std::string b) {
    return a.append(b);
}


