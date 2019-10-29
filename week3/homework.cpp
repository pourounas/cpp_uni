#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>

void mode(std::vector<float>& v){
    std::map<float, int> m;
    float mod;
    std::vector<float> mode;
    for(auto& i : v){
        m[i] = m[i] + 1;
    }

    int mostFrequent = 0;

    for(auto& x : m){
        mostFrequent = std::max(mostFrequent, x.second);
    }

    for(auto& x : m){
        if (x.second == mostFrequent){
            mode.push_back(x.first);
        }
    }


    if (mode.size() == 1){
        std::cout << "Mode: " << mode[0] << '\n';
    }else{
        std::cout << "Modes: ";
        for(auto& x : mode){
            std::cout << x << '\t';
        }
        std::cout << '\n';
    }
    
}

void median(std::vector<float>& v){
    std::sort(v.begin(), v.end());
    int l;
    l = v.size();
    if(l%2 != 0){
        std::cout << "Median: " << v[l/2] << '\n';
    }else {
        float m = (v[l/2] + v[(l/2)-1])/2;
        std::cout << "Median: " << m << '\n';
    }
}

void average(std::vector<float>& v){
    float sum = 0;
    for(auto& x : v){
        sum += x;
    }
    std::cout << "Mean: " << sum/v.size() << '\n';
}

void getNumbersVector(){
    std::vector<float> v;
    int i = 0;
    float temp;
    while (i < 10){
        std::cout << "Enter a number:";
        std::cin >> temp;

        // ensure user entered a float
        if (std::cin.fail()){
            std::cin.clear();
            std::cout << "Please enter a float" << '\n';
        }
        v.push_back(temp);
        i++;
    }
    average(v); // will this really pass by reference or value? How can you be sure?
    median(v);
    mode(v);
}

void getNumbers(){
    int i = 0;
    float temp, min, max= 0;
    while (i < 10){
        std::cout << "Enter a number:";
        std::cin >> temp;

        // ensure user entered a float
        if (std::cin.fail()){
            std::cin.clear();
            std::cout << "Please enter a float" << '\n';
        }
        // comapre tp existing values
        if (temp<=min){
            min = temp;
        }else if (temp >= max){
            max = temp;
        }
        i++;
    }
    std::cout << "Minimum number: " << min << '\n';
    std::cout << "Maximum number: " << max << '\n';
}

int main(){
    //getNumbers();
    getNumbersVector();
}