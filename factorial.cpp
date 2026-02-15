#include <iostream>

int factorial(int n){
if(n == 1) return 1;
return n * factorial(n-1);
}
int main() {
int num;
std::cout << "Enter a number: ";
std::cin >> num;


std::cout << factorial(num);

}