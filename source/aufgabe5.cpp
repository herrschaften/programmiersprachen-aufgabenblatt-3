#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>

bool is_even(int i){
	if (i%2==0)
	{
		return true;
	}
	return false;
}

bool is_odd(int i){
	if (i%2 !=0)
	{
		return true;
	}
	return false;
}

TEST_CASE("describe_factorial", "[aufgabe3]"){
	std::vector<int> vec(100);

	for (std::vector<int>::iterator it=vec.begin(); it!=vec.end(); ++it)
	{
		*it=std::rand()%100+0;
	}

	vec.erase(std::remove_if(vec.begin(), vec.end() , is_odd), vec.end());

	REQUIRE(std::all_of(vec.begin(), vec.end(), is_even));

}

int main(int argc, char* argv[])
{	
	return Catch::Session().run(argc, argv);
}