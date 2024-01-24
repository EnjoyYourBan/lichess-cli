#include <iostream>
#include <sstream>
#include <vector>

int main() {
	std::string user_input;
	std::vector<std::string> args;
	for(;;) {
		args.clear();
		std::cin >> user_input;

		std::istringstream iss(user_input);
		while (iss >> user_input)
			args.push_back(user_input);
	}
}
