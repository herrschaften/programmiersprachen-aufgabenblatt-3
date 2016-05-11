#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include <cmath>
#include <assert.h>

class Circle{
public:
	Circle();
	Circle(Vec2 const& ctr_, float r_);
	

	//getter
	float get_circumference() const;
	float get_area() const;
	float get_radius() const;
	Vec2 get_center() const;

	
	//setter
	void set_radius(float r_);
	void set_center(Vec2 const& ctr_);

private:
	Vec2 ctr;
	float r;

};
#endif
