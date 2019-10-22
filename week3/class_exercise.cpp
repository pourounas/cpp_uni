#include<iostream>
#include<vector>

int main(){
    // names {"Thomas"} -> direct-list-initialisation
    // names = {"Thomas"} -> copy-list-initialisation
    // https://en.cppreference.com/w/cpp/language/list_initialization

    std::vector<std::string> names {"Thomas", "Oli", "Michael"};
    names.push_back("Tom");
    std::cout << names.size() << '\n';
    for(auto &&n : names){
        // && means rvalue reference
        // % means lvalue reference
        // lvalue can mean "left value" or "locatable"
        // locatable in the sense that it has a well defined, locatable memory address. You can point to that address and that address you'll be able to navigate to it but that location might not necessarily have a value.
        // the rvalue on the other hand, does not exist anywhere in memory at the time you declare it. You'll just making a promise that at some point in the future this value will exist but at present it doesn't exist anywhere.
        // You use rvalue to extend lifetime of temporary objects.
        // Let's say you have a function that returns a strign that's defined ony in the scope of that function, you will be returning a None essentially.
        // However, if you try and return a reference to that object then you will have a big problem (references can't have a None value)
        // https://en.cppreference.com/w/cpp/language/reference
        std::cout << n << '\n';
    }
    int i = 5;
}