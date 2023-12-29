

#include <iostream>

int add_numbers(int a, int b)
{
    return a + b;
}

int main() {
    int a {};
    int b {};

    std::cout << "type in two numbers to add together" << std::endl;

    std::cin >> a >> b;

    int sum {};

    sum = add_numbers(a,b);

    std::cout << "the sum of your numbers is " << sum << std::endl; 


    return 0;
}