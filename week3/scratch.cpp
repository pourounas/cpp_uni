#include<iostream>
#include<vector>
#include<typeinfo>

void testConditions(){
    if ((5 >0) && (1!=2)){
        std::cout << "True" << '\n';
    }
    else if (5 <0){
        std::cout << "False" << '\n';
    }
}

void testReferences(){
    std::string s {"Example string"};
    std::string& sr = s;
    const std::string& csr = s;

    std::cout << sr+" reference" << '\n';
    std::cout << &s << '\t' << &sr << '\n';
}

void addByReference(std::vector<int>& a){
    int b = 7;
    int& rb = b;
    a.push_back(rb);
}

void testVector(){
    std::vector<int> x {1,2,3,4,5};
    for(auto&& i : x){
        std::cout << i << '\t';
    }
    std::cout << '\n' << x.size() << '\n';
    x.push_back(6);
    std::cout << x[5] << '\n';

    std::vector<int>& rx = x;
    addByReference(rx);

    for (auto&& i : x){
        std::cout << i << '\t';
    }
    std::cout << '\n';
    std::cout << typeid(rx).name() << '\n';
}

int main()
{
    std::cout << "Hello" << '\n';
    testReferences();
    testConditions();
    testVector();
}