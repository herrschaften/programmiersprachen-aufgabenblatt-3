#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include "circle.hpp"




TEST_CASE("describe_factorial", "[aufgabe3]"){

	//vektor vom typ circle 10 stellen
	std::vector<Circle> c(10);

	//generiert random zahlen in vektor c
	std::generate(std::begin(c), std::end(c), std::rand);

	//sortiert / ueberladung in circle selbst
  	std::sort(std::begin(c), std::end(c));

	REQUIRE (std::is_sorted(c.begin(), c.end()));


}

int main(int argc, char* argv[])
{	
	return Catch::Session().run(argc, argv);
}