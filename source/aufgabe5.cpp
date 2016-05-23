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

	//vektor vec mit 100 stellen
	std::vector<int> vec(100);

	//iterator laeuft durch und erzeugt fuer jede stelle zufallswert %101 setzt grenze
	for (std::vector<int>::iterator it=vec.begin(); it!=vec.end(); ++it)
	{
		*it=std::rand()%101;
	}


	// alle ungeraden löschen
	//erase remove idiom = erase( quasi begin [remove(begin, end , bedingung)], [end])
	vec.erase(std::remove_if(vec.begin(), vec.end() , is_odd), vec.end());

	REQUIRE(std::all_of(vec.begin(), vec.end(), is_even));

}

int main(int argc, char* argv[])
{	
	return Catch::Session().run(argc, argv);
}