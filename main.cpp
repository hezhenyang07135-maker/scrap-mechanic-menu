#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "!\n";

    for (int i = 0; i < 10; ++i) {
        std::cout << i << '\n';
    }

    return 0;
}
