#include<iostream>
#include<vector>
#include<string>
using namespace std;


//Function that uses recursion to reverse a vector of characters
void reverseString(vector<char>& s, int size) {
	if (size == s.size())
	{
		return;
	}
	reverseString(s, size + 1);
	cout << s[size];
}

int main()
{
	vector<char> str;
	string pick;

	cout << "please enter a word: ";
	cin >> pick;
	cout << "\n\n" << "Your string: " << pick << "\n\n";
	for (int i = 0; i < pick.size(); i++) {
		str.push_back(pick[i]);
	}

	cout << "Reversed through recursion: ";
	reverseString(str, 0);

	cout << "\n\n\n";
	return 0;
}