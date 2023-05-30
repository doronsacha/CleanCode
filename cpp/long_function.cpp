#include <iostream>
#include <vector>

//Bad Code
std::vector<int> process_data(const std::vector<int>& input_data) {
    // This function processes the input data to generate an output result, but it's extremely long and hard to follow

    std::vector<int> result;

    for (int i = 0; i < input_data.size(); ++i) {
        int item = input_data[i];
        if (item % 2 == 0) {
            item *= 2;
        } else {
            item = item + 1;
        }

        if (item > 10) {
            item = item - 10;
        }

        for (int j = i + 1; j < input_data.size(); ++j) {
            int next_item = input_data[j];
            if (next_item < item) {
                result.push_back(next_item);
            }
        }

        if (i % 3 == 0) {
            item = item / 2;
        } else if (i % 3 == 1) {
            item = item / 3;
        } else {
            item = item / 4;
        }

        if (item < 5) {
            item = item + 10;
        }

        result.push_back(item);
    }

    return result;
}

//Good Code

std::vector<int> process_data(const std::vector<int>& input_data) {
    // This function processes the input data to generate an output result

    std::vector<int> processed_data = apply_operations(input_data);
    std::vector<int> filtered_data = filter_values(processed_data);
    std::vector<int> transformed_data = transform_values(filtered_data);

    return transformed_data;
}

std::vector<int> apply_operations(const std::vector<int>& data) {
    // Apply operations to the data

    std::vector<int> result;

    for (int item : data) {
        if (item % 2 == 0) {
            item *= 2;
        } else {
            item += 1;
        }

        if (item > 10) {
            item -= 10;
        }

        result.push_back(item);
    }

    return result;
}

std::vector<int> filter_values(const std::vector<int>& data) {
    // Filter values based on certain conditions

    std::vector<int> result;

    for (int i = 0; i < data.size(); ++i) {
        int item = data[i];
        for (int j = i + 1; j < data.size(); ++j) {
            int next_item = data[j];
            if (next_item < item) {
                result.push_back(next_item);
            }
        }
    }

    return result;
}

std::vector<int> transform_values(const std::vector<int>& data) {
    // Transform values based on specific rules

    std::vector<int> result;

    for (int i = 0; i < data.size(); ++i) {
        int item = data[i];

        if (i % 3 == 0) {
            item /= 2;
        } else if (i % 3 == 1) {
            item /= 3;
        } else {
            item /= 4;
        }

        if (item < 5) {
            item += 10;
        }

        result.push_back(item);
    }

    return result;
}
