#include<iostream>
#include <chrono>
#include <thread>

std::string&& rvalueRef(std::string x){
    x += x;
    return std::move(x);
}

std::string& lvalueRef(std::string x){
    std::string xx = "Garbage";
    return xx;
}

int main(){
    int i = 1;
    std::string name = "A very loooooooooooooooong string";

    for(i=0; i < 100; ++i){
        std::string& z = lvalueRef(name);
        std::cout << z << '\n';

        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    }
}