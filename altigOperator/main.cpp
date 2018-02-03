#include <iostream>
#include <string>
#include <vector>

#include "elimDups.h"

int main(){

    std::vector<std::string> str = \
    {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups( str );
    for(const auto &c : str){
        std::cout << c << " ";
    }
    stable_sort( str.begin(), str.end(), isShorter );
    std::cout << std::endl;

    findBiggerThan5( str );

    return 0;
}