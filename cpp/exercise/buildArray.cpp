#include <vector>

//Bad Code
std::vector<int> foo(std::vector<int>& a) {
    int q = a.size();
    for (int i = 0; i < a.size(); ++i) {
        int r = a[i];
        int b = a[a[i]] % q;
        a[i] = q * b + r;
    }
    for (int i = 0; i < a.size(); ++i) {
        a[i] = a[i] / q;
    }
    return a;
}

//Good Code
std::vector<int> transform_list(const std::vector<int>& input_list) {
    std::vector<int> transformed_list;

    for (int value : input_list) {
        int transformed_value = transform_value(value);
        transformed_list.push_back(transformed_value);
    }

    return transformed_list;
}

int transform_value(int value) {
    int length = value.size();
    int transformed_value = value % length;
    return
