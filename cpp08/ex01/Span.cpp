#include "Span.hpp"

Span::Span( unsigned int N ): _size(N){

}

Span::~Span(){
	this->_v.clear();
}

Span::Span(const Span &obj): _size(obj._size){
	this->_v.clear();
	this->_v.insert(this->_v.begin(), obj._v.begin(), obj._v.end());
}

Span& Span::operator=(const Span &obj){
	if(this != &obj){
		this->_size = obj._size;
		this->_v.clear();
		this->_v.insert(this->_v.begin(), obj._v.begin(), obj._v.end());
	}
	return *this;
}

void Span::addNumber( int numb ){
	try{
		if (this->_v.size() >= this->_size)
			throw Span::OutOfBoundsException();
		this->_v.push_back(numb);
	}
	catch(Span::OutOfBoundsException & e){
		std::cout << e.what() << std::endl;
	}
}

unsigned int Span::getSize( void ){
	return this->_size;
}

void Span::showVector( void ){
	for (std::vector<int>::const_iterator i = this->_v.begin(); i != this->_v.end(); ++i)
		std::cout << *i << ' ';
}

unsigned int Span::shortestSpan( void ){
	if(this->_v.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	int diff = *max_element(tmp.begin(), tmp.end());
	for (unsigned int i=0; i < tmp.size() - 1; i++)
		if (abs(tmp[i+1] - tmp[i]) < diff)
			diff = abs(tmp[i+1] - tmp[i]);
	return (diff);
}

unsigned int Span::longestSpan( void ){
	if(this->_v.empty() || this->_v.size() == 1)
		throw Span::NoSpanException();
	unsigned int min = *min_element(this->_v.begin(),this->_v.end());
	unsigned int max = *max_element(this->_v.begin(),this->_v.end());
	return (max - min);
}

void Span::fillVector( void ){
	srand(time(NULL));
	std::cout << "Filled " << this->_size - this->_v.size() << " free spaces" << std::endl;
	this->_v.insert(this->_v.end(), this->_size - this->_v.size(), rand() % 100);
}

/* Test for smallestSpan
for (std::vector<int>::const_iterator i = tmp.begin(); i != tmp.end(); ++i)
	std::cout << *i << ' ';
std::cout << std::endl;
for (std::vector<int>::const_iterator i = this->_v.begin(); i != this->_v.end(); ++i)
	std::cout << *i << ' ';
std::cout << std::endl; */
