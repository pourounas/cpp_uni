#include<iostream>
#include<vector>

void printReference(int& a){
    std::cout << a << '\n';
}
int main(){
    int a = 8;
    std::cout << &a << '\n';
    printReference(a);
}