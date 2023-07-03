#include <iostream>
#include <string>

int* sum(int x,int y){
	int m= x + y;
	int* z=  &m;
	return z;
}

int main() {
	std::cout<< sum(7, 9);

}