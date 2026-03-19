#ifndef functions_hpp
#define functions_hpp

#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <string> 
#include <vector> 


#define List_Dict std::vector<std::unordered_map<std::string, std::vector<std::string>>>

// used lists
namespace Brands{
   const  List_Dict brands1 = 
    {
        {{"name",{"Eco-war"}},{"criteria",{"eco-friendly", "ethical labor"}}},
        {{"name", {"Fast-Fashion"}}, {"criteria", {"cheap materials", "fast productions"}}},
        {{"name", {"GreenThreads"}}, {"criteria", {"eco-friendly", "carbon-neutral"}}},
        {{"name", {"TrendyStyle"}}, {"criteria",{"Trendy Design"}}}
    };

    const List_Dict brands2 = 
    {
        {{"name",{"Earthly"}},{"criteria",{"eco-friendly", "Fair Wages"}}},
        {{"name", {"FastStyle"}}, {"criteria", {"mass production"}}},
        {{"name", {"NatureWear"}}, {"criteria", {"eco-friendly"}}},
        {{"name", {"GreenFit"}}, {"criteria",{"recycled material", "Eco-friendly"}}}
    };

    const List_Dict brands3 = 
    {
        {{"name",{"OrganicThreads"}},{"criteria",{"organic cotton", "fair trade"}}},
        {{"name", {"GreenLife"}}, {"criteria", {"recycled materials", "carbon-neutral"}}},
        {{"name", {"FastCloth"}}, {"criteria", {"cheap production"}}}
    };
}
// Eco-friendly brands with materials (mirrored from Python data structures)
namespace EcoData{
    const List_Dict eco1 = 
    {
        {{"name",{"EcoWear"}},{"materials",{"organic cotton", "recycled polyester"}}},
        {{"name", {"GreenThreads"}}, {"materials", {"organic cotton", "bamboo"}}},
        {{"name", {"SustainableStyle"}}, {"materials", {"bamboo", "recycled polyester"}}}
    };

    const List_Dict eco2 = 
    {
        {{"name",{"NatureWear"}},{"materials",{"hemp", "linen"}}},
        {{"name", {"Earthly"}}, {"materials", {"organic cotton", "hemp"}}},
        {{"name", {"GreenFit"}}, {"materials", {"linen", "recycled wool"}}}
    };

    const List_Dict eco3 = 
    {
        {{"name",{"OrganicThreads"}},{"materials",{"organic cotton"}}},
        {{"name", {"EcoFashion"}}, {"materials", {"recycled polyester", "hemp"}}},
        {{"name", {"GreenLife"}}, {"materials", {"recycled polyester", "bamboo"}}}
    };
}


std::unordered_map<char,int> count_freq(std::string& str);

void two_sum(int arr[], int contents[], int size, int target);

// check for non-repeating char in a string
char non_rep(const std::string& str);


#endif
