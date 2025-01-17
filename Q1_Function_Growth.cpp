#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int naiveSum(const vector<int>& numbers) {
    int total = 0;
    for (int num : numbers) {
        total += num;
    }
    return total;
}

int recursiveSum(const vector<int>& numbers, int index = 0) {
    if (index == numbers.size())
        return 0;
    return numbers[index] + recursiveSum(numbers, index + 1);
}

int builtinSum(const vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0);
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Naive Sum: " << naiveSum(numbers) << endl;
    cout << "Recursive Sum: " << recursiveSum(numbers) << endl;
    cout << "Built-in Sum: " << builtinSum(numbers) << endl;

    return 0;
}
