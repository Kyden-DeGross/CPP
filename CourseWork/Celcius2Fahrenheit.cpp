#include <iostream>
#include <cmath>

double Celcius=0;
double Fahrenheit=0; 
int main(){
	std::cout<<"Hello please enter a temperature in Celcius"<<std::endl;
	std::cin>>Celcius;

	// Convert Celcius to Farheneheit
	Fahrenheit = (Celcius*9/5)+32;
	std::cout<<"The temperature in Farhenheit is "<<std::endl;
	std::cout<<Fahrenheit;
	return 0;
}

