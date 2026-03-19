#include "functions.hpp"

std::vector<std::string> filter_sustainable_brands(List_Dict brands, std::string criterion){
    // withing the vector we must find the element in the dictionary that corresponds to the criteria
    std::vector<std::string> res = {};
    for(auto& vector : brands){
        int size_ =  vector["criteria"].size(); // size of the vector inside the criteria
        int i = 0;
        while( i < size_){
            if(vector["criteria"][i] == criterion){
                res.push_back(vector["name"][0]);
            }
            i ++;
        }
    }

        return res;
}

std::unordered_map<std::string, int> count_material_usage(List_Dict brands){
    std::unordered_map<std::string, int> frequency;

    for(auto& vector : brands){ // parse through each of the vector elems(maps)
        // for each of each of the elemes there is a map with key 'criteria', we will parse through 
        // the values in them
        int i = 0;
        int size_ = vector["materials"].size();
        while(i < size_){
            std::string elem = vector["materials"][i]; // current value in the inner vector looked at
            frequency[elem] += 1; // if the element is not in the map, it will be initialized to zero
            // and then increased by 1, in the other cases, the value will increase by one.
            i++;
        }
    }

    return frequency;
}

std::vector<std::string> treding_materials(List_Dict brands){
    std::unordered_map<std::string, int> frequency;
    std::vector<std::string> res_lst = {};

    if (brands.empty()) return res_lst;

    for(auto& vector : brands){ // parse through each of the vector elems(maps)
        // for each of each of the elemes there is a map with key 'criteria', we will parse through 
        // the values in them
        int i = 0;
        int size_ = vector["materials"].size();
        while(i < size_){
            std::string elem = vector["materials"][i]; // current value in the inner vector looked at
            frequency[elem] += 1; // if the element is not in the map, it will be initialized to zero
            // and then increased by 1, in the other cases, the value will increase by one.
            if(frequency[elem] == 2){
                res_lst.push_back(elem);
            }
            i++;
        }
    }

    //loop through the frequency list

    return res_lst;
}

std::vector<std::string> find_best_fabric_pair(std::vector<std::pair<std::string, int>> pairs, int budget){
    std::vector<std::string> res;

    auto comp = [](std::pair<std::string, int> a, std::pair<std::string, int> b){
        return a.second < b.second;
    };

    std::sort(pairs.begin(), pairs.end(), comp);

    std::unordered_map<int, std::string> map;

    for(int i = 0; i < pairs.size(); i++){
        int compliment = budget - pairs[i].second;
        if (map.count(compliment)){
            return {map[compliment], pairs[i].first};
        }
        map[pairs[i].second] = pairs[i].first;
    }

    return {};
}







int main(){
    // Porblem 4
    std::vector<std::pair<std::string, int>> pair_lst1 = {{"Organic Cotton", 30}, {"Recycled Polyester", 25}, {"Bamboo", 20}, {"Hemp", 15}};
    std::vector<std::pair<std::string, int>> pair_lst2 = {{"Linen", 50}, {"Recycled Wool", 40}, {"Tencel", 30}, {"Organic Cotton", 60}};
    std::vector<std::pair<std::string, int>> pair_lst3 = {{"Linen", 40}, {"Hemp", 35}, {"Recycled Polyester", 25}, {"Bamboo", 20}};

    std::vector<std::string> res = find_best_fabric_pair(pair_lst3, 60);

    std::cout << res[0] << " " << res[1];

    // //problem 3
    // auto map = treding_materials(EcoData::eco1);
    // for(auto& elem: map){
    //     std::cout << elem << "|"; 
    // }

    // Problem 2
    // auto map = count_material_usage(EcoData::eco3);
    // for(auto& elem: map){
    //     std::cout << elem.first << ":" << elem.second << " ";   
    // }

    // Problem 1
    // std::vector<std::string> example = filter_sustainable_brands(Brands::brands3, "carbon-neutral");
    // for(auto& vector : example){
    //     std::cout << vector << " \n";
    // }
    
    
    std::cout <<  std::endl;

    return 0;
}