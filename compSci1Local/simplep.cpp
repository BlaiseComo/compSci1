#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setfill('$') << std::left;
    std::cout << "$" << std::setw(10) << 50.10987 << "\n";
    std::cout << "$" << std::setw(10) << 980435.8 << "\n";

}