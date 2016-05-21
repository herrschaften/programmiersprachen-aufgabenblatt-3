# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <vector>
# include <algorithm>
# include "circle.hpp"


auto lambda = [] (Circle & K1, Circle & K2){
	return K1 < K2;
};


TEST_CASE ("describe_factorial","[is_even]")
{
	std::vector<Circle> Kreis(10);
	
	std::generate(Kreis.begin(), Kreis.begin(), std::rand);

	std::sort (Kreis.begin(), Kreis.end(), lambda); 

	REQUIRE (std::is_sorted(Kreis.begin(), Kreis.end ())); 
	
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);

}