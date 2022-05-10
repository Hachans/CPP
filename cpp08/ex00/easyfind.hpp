#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <set>
#include <map>

template <typename T>
void easyfind(T &a, int i){
typename T::iterator it = std::find(a.begin(), a.end(), i);
	if (it != std::end(a))
		std::cout << i << ", found in countainer at index: " << std::distance(a.begin(), it) << std::endl;
	else
		std::cout << i << " not found" << std::endl;
}

#endif