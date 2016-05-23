#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "circle.hpp"


TEST_CASE ("describe_dis","[argh]"){

std::vector<Circle> K{{5.0f},{3.0f},{8.0f},{1.0f},{2.0f},{5.0f}};
int count;
for ( auto c: K)
{
	if (c>4) count++;
}
std::vector<Circle> K1(count) ;

std::copy_if(K.begin(), K.end(), K1.begin(), [] (Circle & K) { return K > 4.0f;});




REQUIRE(std::all_of (K1.begin(), K1.end(), [] (Circle K1) {return K1 > 3.0f;}));

}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

