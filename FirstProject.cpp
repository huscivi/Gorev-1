#include <iostream>
#define G 9.80665
float findX(float t) {
	return 0.5*G*t*t;
}

int main() {
	float t;
	std::cin>>t;
	float x= findX(t);
	std::cout <<x<<std::endl;
	
	
	return 0;


}
