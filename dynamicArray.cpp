#include <iostream>

int main(){
std::cout << "Enter size of an array: ";
int size;
std::cin >> size;

int *myArray = new int[size];

for(int i = 0; i < size; i++){
std::cout << "Enter array element "<<i+1<<": ";
std::cin >> myArray[i];
}

for(int i = 0; i < size; i++){
std::cout <<*(myArray+i)<<" ";
}
delete[]myArray;
myArray = NULL;
}