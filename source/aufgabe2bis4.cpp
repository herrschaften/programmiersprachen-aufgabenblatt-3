# include <cstdlib>
# include <vector>
# include <list>
# include <iostream>
# include <iterator>
# include <algorithm>

int main()
{
	std::list<unsigned int> zufall(100);
	for(int i=0; i<100; i++){
		int x=rand() % 100 + 0; //generier rand zwischen 100 und 0
		zufall.push_front(x);
		zufall.pop_back();

	}

std::copy(zufall.begin(), zufall.end(), std::ostream_iterator<int>(std::cout, "\n"));


	return 0;
}