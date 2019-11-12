#include <iostream>
#include <vector>

void run(){
    std::string temp;
    std::vector<std::string> words;
    
    bool keepRunning = true;

    while(keepRunning){
        std::cout << "Enter name: ";
        /* the fail here is kind of unnecessary
        cin into a string variable will almost certainly always succeed
         */
        if (!std::cin.fail()){
            std::cin >> temp;
        }
        if (temp == "quit"){
            keepRunning = false;
        }else{
            try{
                // If this succeeds then you entered a number
                std::stoi(temp);
            }catch(std::invalid_argument){
                words.push_back(temp);
                continue;
            }
            std::cout << "Please enter a name not a number" << '\n';
        }
    }
    for(auto& w: words){
        // Check it's not empty otherwise w[0] will fail.
        // cin doesn't accept empty string by default though.
        if(w.empty()){continue;}
        if (w[0] == 'b'){continue;}
        std::cout << w << '\t';
    }
    std::cout << '\n';

}

int main(){
    run();
}