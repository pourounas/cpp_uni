#include <iostream>
#include <string>

std::string hello_cpp_london_uni(){
    std::string greet = "Hello ";
    return greet;
}

void say_hello(std::string name){
    std::cout << hello_cpp_london_uni() << name << "\n";
}

int main(){
    say_hello("Thomas");
}