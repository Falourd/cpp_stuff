#include "Chap1/basic.hpp"
#include "Chap2/defined_types.hpp"

#include <set>
#include <string>
#include <unordered_map>
#include <iostream>

int main()
{
    std::set<std::string> test_set;
    std::unordered_map<std::string, std::string> test_umap;
    test_set.insert(std::string("a"));
    test_set.insert(std::string("b"));
    test_set.insert(std::string("c"));
    test_set.insert(std::string("d"));
    test_set.insert(std::string("e"));
    test_umap.insert(std::pair(std::string("a"), std::string("f")));
    test_umap.insert(std::pair(std::string("b"), std::string("g")));
    test_umap.insert(std::pair(std::string("c"), std::string("h")));
    test_umap.insert(std::pair(std::string("d"), std::string("i")));
    test_umap.insert(std::pair(std::string("e"), std::string("j")));

    std::set<std::string>::iterator it_set = test_set.find(std::string("b"));

    std::string topto = test_umap.find(*it_set)->second;
    it_set++;
    std::unordered_map<std::string, std::string>::iterator titi = test_umap.find(*it_set);
    std::cout << titi->second << "\n";

    //chapOne();
    //chapTwo();
    return 0;
}