#include <iostream>

int main(){
int rows, cols, size;
std::cout << "Enter rows and columns respectively: ";
std::cin >> rows >> cols;
int **table = new int*[size];
for(int i = 0; i < rows; i++){
table[i] = new int[cols];
}
for (int i = 0; i < rows; i++){
for(int j = 0; j < cols; j++){
std::cout << "Enter value for the element["<<i<<"]"<<"["<<j<<"] : ";
std::cin >> table[i][j];
}
}
for(int i = 0; i < rows; i++){
for(int j = 0; j < cols; j++){
std::cout << table[i][j] << " ";
}
std::cout << std::endl;
}
delete[] table;
table = NULL;
}