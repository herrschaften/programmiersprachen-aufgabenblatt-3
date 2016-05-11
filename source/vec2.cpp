#include "vec2.hpp"
#include <cmath>
	

Vec2::Vec2(): 			//klasse::funktion()<-default keine ein/rückgabe
		x{0.0f},			//default
		y{0.0f}
		{}

Vec2::Vec2(float ex, float ey):  //user
		x{ex},
		y{ey}
		{}

//2.3
//+
Vec2& Vec2::operator+=(Vec2 const& v) { //vec2 kriegt v (vec2) übergeben 
		x+=v.x;						  //auf x von vec2 wird x von v addiert (v.x)
		y+=v.y;							
		return *this; 				  //*this für rückgabe weil &=refferenz wird direkt geändert ohne & wird kopie erstellt 
}
//-
Vec2& Vec2::operator-=(Vec2 const& v){
	x-=v.x;
	y-=v.y;							
	return *this; 
}
//*
Vec2& Vec2::operator*=(float v){		//vektor wird mit float eingabe v multipliziert
		x*=v;
		y*=v;
		return *this;
}
// /
Vec2& Vec2::operator/=(float v){
		x/=v;
		y/=v;
		return *this;
}	

//2.4

//addition
Vec2 operator + (Vec2 const& u, Vec2 const& v){
	return Vec2{(u.x+v.x), (u.y+v.y)};
}

// subtraktion
Vec2 operator - (Vec2 const& u, Vec2 const& v){
	return Vec2{u.x-v.x, u.y-v.y};
}

// multiplikation
Vec2 operator * (Vec2 const& v, float s){
	return Vec2{v.x*s, v.y*s};
}

// multiplikation
Vec2 operator * (float s, Vec2 const& v){
	return Vec2{s*v.x, s*v.y};
}

// division
Vec2 operator / (Vec2 const& v, float s){
	return{v.x/s, v.y/s};
}






