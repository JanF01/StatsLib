
#include "Engine.h"
#include "iostream"
int main() {
	

	stati::Basic<double> collection;

	double num[4] = { 2, 3, 5, 12.1 };

	collection.Init(num, 4);
	std::cout<<collection.Mean();

	return 0;
}