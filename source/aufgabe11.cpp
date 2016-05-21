#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <list>
#include <vector>

bool is_even(int i){
	if (i%2==0)
	{
		return true;
	}
	return false;
}

template<typename container, typename predikat> 
	container filter(container const& co, predikat const& pr){

		container dest;
		for(auto i : co){
			if(pr(i)) dest.push_back(i);
		}
		return dest;
	}

TEST_CASE ("describe_vec","[is_even]"){

	std::vector<int> vec(10);

	for (std::vector<int>::iterator it=vec.begin(); it!=vec.end(); ++it)
	{
		*it=std::rand()%100+0;
	}

	std::vector<int> vec1=filter(vec, is_even);

	REQUIRE(std::all_of (vec1.begin(), vec1.end(), is_even));
}

TEST_CASE ("describe_list","[is_even]"){

	std::list<int> l(10);

	for (std::list<int>::iterator it=l.begin(); it!=l.end(); ++it)
	{
		*it=std::rand()%100+0;
	}

	std::list<int> l1=filter(l, is_even);

	REQUIRE(std::all_of (l1.begin(), l1.end(), is_even));
}


int main ( int argc , char * argv [])
{
return Catch :: Session (). run ( argc , argv );
}

/*12

Wenn Fred Fuchs nicht existiert, wird ein Eintrag mit default werten (0)
erstellt, um dies zu verhindern kann pair, statt map benutzt werde,
hier gibt es eine find methode mit fehlermeldung 