#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include <cmath>
#include <assert.h>

class Circle{
public:
	Circle();
	Circle(float r_);
	
	
	//setter
	void set_radius(float r_);

	bool operator< (Circle const& a);
	bool operator> (Circle const& a);
	bool operator==(Circle const& a);



private:
	float r;

};
#endif
