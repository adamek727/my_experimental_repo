#include <iostream>
#include "lib.hpp"
#include "lib2.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    my_library::my_cool_print_function();
    second_namespace::another_cool_function();

    return 0;
}
