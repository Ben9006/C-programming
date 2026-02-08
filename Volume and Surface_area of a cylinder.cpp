#include <iostream>
#include <math.h>
using namespace std;

class Cylinder {
	public:
		double radius;
		double height;
		
		double calculateVolume(){
			return M_PI * radius * radius * height;
		}
		
		double calculateSurface_Area(){
		return (2 * M_PI * radius *radius) + (2 * M_PI * radius * height);
		}
};

int main(){
	Cylinder cylinder1;
	double radius, height;
	
	cylinder1.radius = 20;
	cylinder1.height = 5;
	
	cout<<"The volume of the cylinder: "<<cylinder1.calculateVolume()<<endl;
	cout<<"The Surface Area of the cylinder: "<<cylinder1.calculateSurface_Area()<<endl;
	return 0;
}
