#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
};

// Function to calculate factorial
int factorial(int n) {
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

// Greedy function to solve the factorial knapsack problem
int factorialKnapsackGreedy(int W, vector<Item>& items) {
    sort(items.begin(), items.end(), [](const Item &a, const Item &b) {
        return (a.value * factorial(b.weight)) > (b.value * factorial(a.weight));
    });

    int maxVal = 0;

    for (const auto &item : items) {
        int weightFactorial = factorial(item.weight);
        if (W >= item.weight) {
            maxVal += item.value;
            W -= item.weight;
            W *= weightFactorial;
        }
    }

    return maxVal;
}

int main() {
    vector<Item> items = {{2, 10}, {3, 7}, {5, 15}, {7, 12}};
    int knapsackCapacity = 10;

    int maxVal = factorialKnapsackGreedy(knapsackCapacity, items);

    cout << "The maximum value that can be achieved using a greedy approach is: " << maxVal << endl;

    return 0;
}
