#include <iostream>
#include<vector>

void print(std::vector<std::string>&v){
    /*
    Write a function that loops through each element of a vector and prints it.
    Implement a range based loop, a vanilla for loop and finally a while loop.
    */
    for(auto& x: v){
        std::cout << x << '\t';
    }
    std::cout << '\n';

    for(int i =0; i <= v.size(); ++i){
        std::cout << v[i] << '\t';
    }
    std::cout << '\n';
    
    int c = 0;
    // modern compilers are optimized enough to know that the size of your vector is static
    // This means they don't evaluate the function on every loop 
    // A few years back it'd probably make a difference in terms of speed if you 
    // assigned the size to a temporary variable.
    while(c!=v.size()){
        std::cout << v[c] << '\t';
        ++c;
    }
}

int main(){
    // for(; ;){} is an example of an infinite loop - will run forever.

    // ternary operator
    int max;
    max = 5<4 ? 5 : 4;

    // A nice way to calculate the product of a range of numbers
    std::vector<float> values {1.0f, 2.12f, 3.56f, 10};
    // initializing product as 1 allows you to accumulate the product
    float product = 1.0f;

    for(auto& i : values){
        product *= i;
    }

    std::vector<std::string> names {"Test1", "Test2", "Test3"};
    print(names);
}