#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int number_of_elements;
    std::cin >> number_of_elements;
    
    std::vector<int> elements(number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        std::cin >> elements[i];
    }
    
    std::unordered_map<int, int> element_indices;
    for (int i = 0; i < number_of_elements; i++) {
        element_indices[elements[i]] = i;
    }
    
    int num_queries;
    std::cin >> num_queries;
    
    for (int i = 0; i < num_queries; i++) {
        int inp;
        std::cin >> inp;
        
        auto it = element_indices.find(inp);
        if (it != element_indices.end()) {
            std::cout << it->second << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }
    
    return 0;
}