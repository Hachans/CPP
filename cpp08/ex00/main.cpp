#include "easyfind.hpp"

int main(){

	std::vector<int> v(5, 10);
	for(int i = 0; i < 5; i++)
		v[i] = i;
	easyfind(v, 2);

	std::array<int, 5> a = {0, 1, 2, 3, 4};
	easyfind(a, 4);

	std::cout << std::endl;
	std::cout << "***More tests because i hate myself***" << std::endl;
	std::cout << std::endl;

	std::deque<int> d;
	for(int i = 0; i < 5; i++)
		d.push_back(i);
	easyfind(d, 2);

	std::list<int> l;
	for(int i = 0; i < 5; i++)
		l.push_back(i);
	easyfind(d, 5);

	std::set<int> s;
	for(int i = 0; i < 5; i++)
		s.insert(i);
	easyfind(s, 0);

	std::multiset<int> s2;
	for(int i = 0; i < 5; i++)
		s2.insert(i);
	easyfind(s2, 7);

	std::array<char, 5> ca = {'a', 'b', 'g', 'F', 'p'};
	easyfind(ca, 'g');

	std::list<float> fl;
	fl.push_back(5);
	fl.push_back(3);
	fl.push_back(16);
	fl.push_back(1);
	easyfind(fl, 1);

	std::deque<double> ds;
	ds.push_back(5.4);
	ds.push_back(3.7);
	ds.push_back(16.9);
	ds.push_back(1.1);
	easyfind(ds, 1);

	return 0;

}