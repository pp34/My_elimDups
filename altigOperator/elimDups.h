#ifndef  _ELIMDUPS_H
#define  _ELIMDUPS_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

template<class T>
void elimDups( std::vector<T>& obj ){

    sort( obj.begin(), obj.end() );
    auto end_unique = unique( obj.begin(), obj.end() );
    obj.erase( end_unique, obj.end() );
}

//template<class T>
bool isShorter(const std::string& obj1, const std::string& obj2){
    return obj1.size() < obj2.size();
}

//template<class T>
bool isBiggerThan5( const std::string& str){
    
    return str.size() >= static_cast<size_t>(5) ? true : false;
}

//template<class T>
void findBiggerThan5( std::vector<std::string>& vec ){
    
    auto iter = std::partition(vec.begin(),vec.end(), isBiggerThan5 );
    std::vector<std::string> vectmp=vec;
    //copy( vec.begin(), iter, vectmp );
    iter = vec.erase( iter, vec.end() );
    for( iter = vec.begin();
         iter != vec.end();
       ++iter)
    {
        std::cout << *iter << ' ';
    }std::cout << std::endl;
    for ( auto itertmp = vectmp.begin();
        itertmp != vectmp.end();
        ++itertmp)
    {
        std::cout << *itertmp << ' ';
    }std::cout << std::endl;
}


#endif



