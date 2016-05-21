# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>

template<typename T>
void swap(T& a, T& b) 
{
	T temp=a;
	a=b;
	b=temp;
}



TEST_CASE ( "describe_swap", "[aufgabe3]"){

	float a=2;
	float b=3;

	swap(a,b);
	REQUIRE (a==3);
	REQUIRE (b==2);

}

int main ( int argc , char * argv [])
{
return Catch :: Session (). run ( argc , argv );
}
