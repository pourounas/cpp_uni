#include<iostream>

int&& rvalueRef(int x){
    x += 5;
    return std::move(x);
}

void increment(int& i){
    std:: cout << i << '\n';
    i += 1;
}

int main(){
    int i = 1;
    // This will work
    increment(i);
    // If you remove & from the signature of increment
    // This will still work but will not modify in place
    increment(i);
    // If you add the & back to the signature then the below will fail
    // This fails because 42 is an rvalue and does not exist at compile time
    //increment(42);

    std::cout << i << '\n';
    int y = rvalueRef(i);
    std::cout << y << '\n';
    std:: cout << &y << '\n';
}