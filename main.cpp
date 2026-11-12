#include <iostream>

int Policz(int a , int b) {
    return a + b;
}

int main() {

    const auto lang = "C++";
    std::cout <<"W Ppierwszym branchu" << Policz(2, 3) << std::endl;



    return 0;
}