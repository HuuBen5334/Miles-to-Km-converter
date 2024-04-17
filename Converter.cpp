#include <iostream>

int main() {
  // Add your code below  
double miles;
double kilometers;

std::cout << "Enter miles to convert to kilometers:";
std::cin >> miles;
kilometers = (1.609*miles);
std::cout << "Kilometers: " << kilometers << "\n";
}