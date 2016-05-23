#include "circle.hpp"
#include <iostream>

//default
Circle::Circle(): 
r {1.0f} {}


//memeber center, radius, color
Circle::Circle(float r_): 
r {r_} {

	//assert (r_ <= 0.0f); 
}


	



	void Circle::set_radius(float r_){
		r=r_;
	}
	

	bool Circle::operator < (Circle const& x){
		return r < x.r;
	}

	bool Circle::operator > (Circle const& x){
		return r > x.r;
	}
	
	bool Circle::operator == (Circle const& x){
		return r == x.r;
	}




