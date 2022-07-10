#include <iostream>
using namespace std;
class Rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getAreaR() const;
	double getCircumR() const;
};

