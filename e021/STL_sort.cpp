#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


std::ostream & operator<<(std::ostream & os, const std::list<int> lst) {
    for (int my_int : lst) {
        os << my_int << " ";
    }
    os << std::endl;
    return os;
}


std::ostream & operator<<(std::ostream & os, const std::vector<int> myVector) {
    for (int my_int : myVector) {
        os << my_int << " ";
    }
    os << std::endl;
    return os;
}

int main(){

    std::vector<int> myVector{101, 32, -19, 655, -9};
    std::sort(myVector.begin(), myVector.end());
    std::cout << myVector << std::endl;  
   
}

  


/*
    std::list<int> myList{101, 32, -19, 655, -9};
    std::sort(myList.begin(), myList.end());
    std::cout << myList << std::endl;

    */