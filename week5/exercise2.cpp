#include<iostream>
#include<vector>

void f2(const std::vector<std::string>& a, const std::string& b){
    // Function should only print elements in a that are not equal to b
    for(auto & e : a){
        if(e != b){
            std::cout << e << '\n';
        }
    }

}

void f1(std::vector<std::string>& a, std::string b){
    // put the string in the vector if string is not empty
    // see what happens if you make any of the arguments const
    //TPD: Is there any difference in having the const as part of the method signature vs at the declaration of the variable in main?
    if (b.empty()){return;}
    a.push_back(b);
}

int main(){
    std::vector<std::string> words {"one", "two"};
    const std::string word = "three";

    for(auto& w: words){
        std::cout << w << '\t';
    }
    std::cout << '\n';
    f1(words, word);
    for(auto& w: words){
        std::cout << w << '\t';
    }
    std::cout << '\n';
    // here even though f2 takes a reference we can still pass an rvalue because f2 takes a const reference
    // the const reference allows you to pass an rvalue?
    // how does this work?
    f2(words, "two");
}