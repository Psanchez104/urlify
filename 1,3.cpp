#include <iostream>
#include <string>

std::string urlify(std::string x) {
	std::string output;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == ' ') {
			std::string temp1 = x.substr(i + 1);
			x.erase(i);
			x.insert(i, "%20");
			x += temp1;
		}
	}
	return x;
}

int main() {
	std::string mystr = "I love C++";

	std::cout << urlify(mystr);
}