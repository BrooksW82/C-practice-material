/** This program generates a random vector of five elements and a random target value. It then checks 
the sum of each element to see if they add up to the target value. If they do, the element locations are 
recorded and then returned to be displayed. If there are no matches, the program will indicate as so. **/

#include <vector>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> values;
	for (int x = 0; x < nums.size(); x++) {
		for (int j = 0; j < nums.size(); j++) {
			if (x == j) {
				continue;
			}
			else if (nums[x] + nums[j] == target) {
				values.push_back(x);
			}
		}
	}

	return values;
}

int main() {
	srand(time(NULL));
	vector<int> numbers;
	int the_target = rand() % (10 + 1);

	for (int i = 0; i < 5; i++) {
		numbers.push_back(rand() % (10 + 1));
	}

	cout << "Numbers generated: ";
	for (int q = 0; q < numbers.size(); q++) {
		cout << numbers[q] << " ";
	}
	cout << "target: " << the_target << "\n\n";

	vector<int> matches = twoSum(numbers, the_target);

	cout << "Element locations that add up to target value: ";

	if (matches.size() == 0) {
		cout << "None add up to target.";
	}

	else {
		for (int q = 0; q < matches.size(); q++) {
			cout << matches[q] << " ";
		}
	}

}