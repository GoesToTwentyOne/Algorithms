
#include <iostream>
#include <vector>
#include <algorithm>

std::pair<int, int> maxSumAndProduct(const std::vector<int> &arr) {
    if (arr.size() < 2) {
        std::cout << "Array should contain at least two elements for valid comparison." << std::endl;
        return std::make_pair(0, 0);
    }

    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end(), std::greater<int>()); // Sort the array in descending order

    int maxSum = sortedArr[0] + sortedArr[1];  // Calculate the maximum sum
    int maxProduct = sortedArr[0] * sortedArr[1];  // Calculate the maximum product

    return std::make_pair(maxSum, maxProduct);
}

int main() {
    std::vector<int> array = {5, 3, 9, 2, 8};
    std::pair<int, int> result = maxSumAndProduct(array);

    std::cout << "Max Sum: " << result.first << std::endl;
    std::cout << "Max Product: " << result.second << std::endl;

    return 0;
}
