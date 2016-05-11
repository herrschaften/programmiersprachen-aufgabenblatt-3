#include "circle.hpp"
#include <iostream>

//default
Circle::Circle():
ctr {0.0f, 0.0f}, 
r {1.0f} {
}

//memeber center, radius, color
Circle::Circle(Vec2 const& ctr_, float r_): 
ctr {ctr_}, 
r {r_} {

	assert (r_ <= 0.0f); 
}


	//Umfang : 2*pi*r
	float Circle::get_circumference() const{
		return 2* M_PI *r;
	}
	//flaeche : pi*r^2
	float Circle::get_area() const{
		return 2*M_PI*r;
	}

	float Circle::get_radius() const{
		return r;
	}

	Vec2 Circle::get_center() const{
		return ctr;
	}



	void Circle::set_radius(float r_){
		r=r_;
	}
	void Circle::set_center(Vec2 const& ctr_){
		ctr=ctr_;
	}
	




