#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>{
	public:

		MutantStack();
		virtual ~MutantStack();
		MutantStack(const MutantStack<T> & obj);
		MutantStack& operator=(const MutantStack<T> & obj);


		typedef typename std::stack<T>::container_type::iterator 		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		// The std::stack's underlying container object corresponds to the (protected) data member c
		iterator begin(void) { return this->c.begin(); }
		iterator end(void) { return this->c.end(); }

		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }

		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }

		const_reverse_iterator rbegin() const { return this->c.rbegin(); }
		const_reverse_iterator rend() const { return this->c.rend(); }
};

template <typename T>
MutantStack<T>::MutantStack( void ){

}

template <typename T>
MutantStack<T>::~MutantStack( void ){

}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> & obj ){
	*this = obj;
}

// https://en.cppreference.com/w/cpp/container/stack/operator%3D
template <typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack<T> & obj ){
	if (this != &obj)
		this->c = obj.c;
	return *this;
}



#endif