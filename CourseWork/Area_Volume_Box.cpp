#include <iostream>
#include <cmath>

double length=0;
double width=0;
double height=0;
double Area=0;
double Volume=0;

int main(){
	std::cout<<"Hello please enter a length of the box"<<std::endl;
	std::cin>>length;
	std::cout<<"What is the Width of the box?"<<std::endl;
	std::cin>>width;
	std::cout<<"What is the Height of the box?"<<std::endl;
	std::cin>>height;
	
	Area = length*width;
	Volume = Area*height;

	std::cout<<Area<<" is the area of the box."<<"\n";
	std::cout<<Volume<<" is the volume of the box."<<std::endl;
	return 0;
}

	
