# include <cstdlib>
# include <vector>
# include <list>
# include <iostream>
# include <iterator>
# include <algorithm>
# include <set>
#include <map>

int main(){

	//3.2
	//liste mit 100 zufallszahlen
	std::list<unsigned int> liste(100);
	for(int i=0; i<100; i++){
		int x=rand() % 100 + 0; //generier rand zwischen 100 und 0
		liste.push_front(x);
		liste.pop_back();}

	//vektor in den liste kopiert wird
	std::vector<unsigned int> vektor(liste.size());
	std::copy(std::begin(liste), std::end(liste), std::begin(vektor));

	//ausgabe vektor
	std::copy(vektor.begin(), vektor.end(), std::ostream_iterator<int>(std::cout, "\n"));


	//3.3
	//set= container sortiert ohne dopplete 
	std::set<unsigned int> listeset(std::begin(liste), std::end(liste));
	std::cout<< "Die Liste enthaelt " << listeset.size() <<" verschiedene Elemente"<<std::endl;


	//Zahlen die nicht in liste sind ausgeben durch count (gibt anzahl von elementen mit bestimmten key aus)
	std::cout<< "Folgende Zahlen zwischen 1 und 100 sind nicht in der Liste enthalten: "<<std::endl;
	for (int i = 0; i <= 100; ++i) {
    	if (listeset.count(i) == false) {
      		std::cout << i << "\n";
    	}
    }	

    
    //3.4

    //map m(key i, value) i zählt hoch und guckt für jeden wert wie oft er vorkommt 
    //map: key einzig (1-100), value mehrfach moeglich (vorkommen)
	std::map<int, int> m;
  	for (int i = 0; i<=100; ++i){
    	m[i]=std::count(liste.begin(), liste.end(), i); //zaehlt vorkommen von i
    	
	}

	//zahlen ohne vorkommen abfangen und ausgabe
	std::cout <<"Haeufigkeit der Zahlen im Format zahl:haeufigkeit"<<std::endl;
	for (int i = 0; i<=100;++i){
		if (m[i]>0){
    	 	std::cout << i<<": "<<m[i]<<std::endl;
    	} 	
    }	

  	
  	}  





  	


