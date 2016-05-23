#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
#include <algorithm>



TEST_CASE(){
  std::vector<int> v1{1,2,3,4,5,6,7,8,9};
  std::vector<int> v2{9,8,7,6,5,4,3,2,1};
  std::vector<int> v3(9);

  //transform(tranformbegin1, transformend1, transform begin2, transformdestination, operator als lambda)
  std::transform(std::begin(v1), std::end(v1), std::begin(v2), std::begin(v3), [] (int const& v1, int const& v2) {return v1 + v2;});


  REQUIRE (std::all_of(std::begin(v3), std::end(v3), [](int const& v3) { return v3==10;}) == true);

}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}