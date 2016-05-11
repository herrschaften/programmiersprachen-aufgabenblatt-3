# include <cstdlib>
# include <vector>
# include <list>
# include <iostream>
# include <iterator>
# include <algorithm>


int main()
{
	std::vector<int> v0(10);							//vektor v0 mit 10 stellen 
	for (std::vector<int>::iterator it = v0.begin();	//iterator auf begin des vektors
		it != v0.end(); ++it) {							//so lange iterator nicht auf ende +i	
		*it = std::rand();								// * ist Zeiger rand macht random Zahl
	}
	//oder 
	//for (auto& v : v0) {
	//  v = std::rand();
	//}
std::ostream_iterator<int> outiter(std::cout ,"\n" );
*outiter =100000;
++outiter;

std::copy(std::begin(v0), std::end(v0), outiter);				//kopiert erstellten vektor von anfang bis ende nach outiter
			
	
std::list<int> l0(v0.size());							//erstellt liste l0 mit groesse des vektors (10 leere stellen) 
std::copy(std::begin(v0), std::end(v0), std::begin(l0));// kopiert vektor in liste VORSICHT liste muss gross genug sein

std::list<int> l1(std::begin(l0), std::end(l0));		//konstruiert l1 und kopiert die werte von l0  
std:reverse(std::begin(l1), std::end(l1));				//dreht l1 um 
std::copy(std::begin(l1), std::end(l1), std::ostream_iterator<int>(std::cout, "\n")); //kopiert l1 in ostream und gibt aus

l1.sort();												//sortiert l1 aufsteigend
std::copy(l1.begin(), l1.end(), std::ostream_iterator<int>(std::cout, "\n")); //gibt l1 aus

std::generate(std::begin(v0), std::end(v0), std::rand);	//belegt v0 mit neuen random zahlen 
std::copy(v0.rbegin(), v0.rend(), std::ostream_iterator<int>(std::cout, "\n"));	//gibt v0 von hinten nach vorne an (rbegin, rend)		

	return 0;
}