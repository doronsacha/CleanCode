#include <vector>
#include <algorithm>
#include <stdexcept>

int recursive_sum(std::vector<int>& numbers) {
    if(numbers.empty())
        return 0;
    else {
        int first = numbers[0];
        numbers.erase(numbers.begin());
        return first + recursive_sum(numbers);
    }
}

std::vector<int> square_elements(const std::vector<int>& numbers) {
    std::vector<int> squared;
    for(const auto& num : numbers)
        squared.push_back(num * num);
    return squared;
}

int find_maximum(const std::vector<int>& numbers) {
    return *std::max_element(numbers.begin(), numbers.end());
}

int find_minimum(const std::vector<int>& numbers) {
    return *std::min_element(numbers.begin(), numbers.end());
}

int count_occurrences(const std::vector<int>& numbers, int target) {
    return std::count(numbers.begin(), numbers.end(), target);
}

std::vector<int> remove_duplicates(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

std::vector<int> sort_list(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    return numbers;
}

std::vector<int> reverse_list(std::vector<int> numbers) {
    std::reverse(numbers.begin(), numbers.end());
    return numbers;
}

std::vector<int> concatenate_lists(const std::vector<int>& list1, const std::vector<int>& list2) {
    std::vector<int> concatenated = list1;
    concatenated.insert(concatenated.end(), list2.begin(), list2.end());
    return concatenated;
}

bool is_sorted(const std::vector<int>& numbers) {
    return std::is_sorted(numbers.begin(), numbers.end());
}

int find_index(const std::vector<int>& numbers, int target) {
    auto it = std::find(numbers.begin(), numbers.end(), target);
    if(it == numbers.end())
        return -1;
    else
        return std::distance(numbers.begin(), it);
}

std::vector<int> insert_element(std::vector<int>& numbers, int element, int index) {
    if(index < 0 || index > numbers.size())
        throw std::out_of_range("Index out of range");
    numbers.insert(numbers.begin() + index, element);
    return numbers;
}
