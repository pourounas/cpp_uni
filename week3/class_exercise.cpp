#include<iostream>
#include<vector>

int main(){
    // names {"Thomas"} -> direct-list-initialisation
    // names = {"Thomas"} -> copy-list-initialisation
    // https://en.cppreference.com/w/cpp/language/list_initialization
    
    std::vector<std::string> names {"Thomas", "Oli", "Michael"};
    names.push_back("Tom");
    std::cout << names.size() << '\n';
    for(auto &n : names){
        std::cout << n << '\n';
    }
}