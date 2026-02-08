#include <iostream>
#include <vector>

void swap(int &a, int &b){
int temp = a;
a = b;
b = temp;
}
bool ascending(int a, int b){
return a < b;
}
bool descending(int a, int b){
return a > b;
}
 void customSort(std::vector<int> &numbers, bool (*funcPtr)(int, int)){
int size = numbers.size();
for (int i = 0; i < size - 1; i++){
for(int j = 0; j < size - 1; j++){
if(!(funcPtr(numbers[j], numbers[j+1]))){
swap(numbers[j], numbers[j+1]);
}}}} 

void printer(std::vector<int> &numbers){
int size = numbers.size();
for (int i = 0; i < size; i++){
std::cout << numbers[i] << " ";
}}
int main(){
 std::vector<int> numbers = {21,16,6,7,29,1,3,12,19};
 bool (*funcPtr)(int, int) = descending;
 customSort(numbers, funcPtr);
 printer(numbers);
 std::cout << std::endl;
/* customSort(numbers, funcPtr);
 printer(numbers);*/
}