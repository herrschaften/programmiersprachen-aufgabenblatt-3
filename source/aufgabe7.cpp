#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include "circle.hpp"




TEST_CASE("describe_factorial", "[aufgabe3]"){


	std::vector<Circle> c(10);

	std::generate(std::begin(c), std::end(c), std::rand);
  	std::sort(std::begin(c), std::end(c));

	REQUIRE (std::is_sorted(c.begin(), c.end()));


}

int main(int argc, char* argv[])
{	
	return Catch::Session().run(argc, argv);
}