#include <iostream>

int main() {
	int melon_weight;
	std::cin >> melon_weight;
	if (melon_weight == 2) {
		std::cout << "NO";
	}else if (melon_weight % 2 == 0){
		std::cout << "YES";
	}else{
		std::cout << "NO";
	}
	return 0;
}