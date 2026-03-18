#ifndef functions_hpp
#define functions_hpp

#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <string> 
#include <vector> 


// used lists
std::vector<std::unordered_map<std::string, std::vector<std::string>>> brands1 = 
    {
        {{"name",{"Eco-war"}},{"criteria",{"eco-friendly", "ethical labor"}}},
        {{"name", {"Fast-Fashion"}}, {"criteria", {"cheap materials", "fast productions"}}},
        {{"name", {"GreenThreads"}}, {"criteria", {"eco-friendly", "carbon-neutral"}}},
        {{"name", {"TrendyStyle"}}, {"criteria",{"Trendy Design"}}}
    };

    std::vector<std::unordered_map<std::string, std::vector<std::string>>> brands2 = 
    {
        {{"name",{"Earthly"}},{"criteria",{"eco-friendly", "Fair Wages"}}},
        {{"name", {"FastStyle"}}, {"criteria", {"mass production"}}},
        {{"name", {"NatureWear"}}, {"criteria", {"eco-friendly"}}},
        {{"name", {"GreenFit"}}, {"criteria",{"recycled material", "Eco-friendly"}}}
    };

    std::vector<std::unordered_map<std::string, std::vector<std::string>>> brands3 = 
    {
        {{"name",{"OrganicThreads"}},{"criteria",{"organic cotton", "fair trade"}}},
        {{"name", {"GreenLife"}}, {"criteria", {"recycled materials", "carbon-neutral"}}},
        {{"name", {"FastCloth"}}, {"criteria", {"cheap production"}}}
    };



std::unordered_map<char,int> count_freq(std::string& str);

void two_sum(int arr[], int contents[], int size, int target);

// check for non-repeating char in a string
char non_rep(const std::string& str);


#endif
