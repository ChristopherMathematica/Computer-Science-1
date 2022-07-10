#include <iostream>
using namespace std;
class Circle
{
private:
	double radius;
	const float pi = 3.14159;
public:
	void setRadius(double);
	double getRadius() const;
	double getAreaC() const;
	double getCircumference() const;
};

