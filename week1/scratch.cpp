#include <iostream>
#include <string>

std::string hello_cpp_london_uni(){
    std::string greet = "Hello ";
    return greet;
}

void say_hello(std::string name){
    std::string greet = hello_cpp_london_uni();
    std::cout << greet << name << "\n";
}

int main(){
    hello_cpp_london_uni();
    say_hello("Thomas");
}