#include <iostream>
#include <vector>

/*
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
*/

using text_t = std::string;
using number_t = int;

int main() {
    /*
    pairlist_t pairlist;
    pairlist.push_back(std::make_pair("John", 1));
    */

    text_t text = "John";
    std::cout << text << std::endl;

    number_t age = 21;
    std::cout << age << std::endl;

    return 0;
}