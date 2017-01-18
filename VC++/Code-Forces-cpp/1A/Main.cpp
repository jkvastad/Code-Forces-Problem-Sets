#include <iostream>

int main(){
	long long n, m, a;
	std::cin >> n; std::cin >> m; std::cin >> a;
	
	long long vertical_stones = n / a;
	if (n%a > 0) {vertical_stones++;}

	long long horizontal_stones = m / a;
	if (m%a > 0) {horizontal_stones++;	}

	std::cout << vertical_stones*horizontal_stones;
	return 0;
}