#include <iostream>
#include <vector>

void run(){
    std::string temp;
    std::vector<std::string> words;
    
    bool keepRunning = true;

    while(keepRunning){
        std::cout << "Enter name: ";
        if (!std::cin.fail()){
            std::cin >> temp;
            
        }
        if (temp == "quit"){
            keepRunning = false;
        }else{

            try{
            std::stoi(temp);
            }catch(std::invalid_argument){
                words.push_back(temp);
                continue;
            }
            std::cout << "Please enter a name not a number" << '\n';
        }
    }
    for(auto& w: words){
        if (w[0] == 'b'){continue;}
        std::cout << w << '\t';
    }
    std::cout << '\n';

}

int main(){
    run();
}