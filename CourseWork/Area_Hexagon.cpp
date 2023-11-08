#include <iostream>
#include <cmath>
#include <stdio.h>
int sidelength = 0;
double Area = 0;


int main(){
	std::cout<<"Hello please enter a side length"<<std::endl;
	std::cin >> sidelength;
	Area = (3*sqrt(3))/2*sidelength*sidelength;
	std::cout << Area;
	return 0;
}



