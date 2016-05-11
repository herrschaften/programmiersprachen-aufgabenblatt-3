#ifndef VEC2_HPP
#define VEC2_HPP

class Vec2
{
public:
	Vec2();						//default 					
	Vec2(float ex, float ey);   //user
	float x;
	float y;

	Vec2 & operator +=( Vec2 const & v );
	Vec2 & operator -=( Vec2 const & v );
	Vec2 & operator *=( float v );
	Vec2 & operator /=( float v );

};


Vec2 operator +( Vec2 const & u , Vec2 const & v );
Vec2 operator -( Vec2 const & u , Vec2 const & v );
Vec2 operator *( Vec2 const & v , float s );
Vec2 operator /( Vec2 const & v , float s );
Vec2 operator *( float s , Vec2 const & v );



#endif 
