#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>


class Span{

		std::vector<int> _v;
		unsigned int _size;

	public:

		Span( unsigned int n );
		~Span();
		Span(const Span& obj);
		Span& operator=(const Span& obj);

		class OutOfBoundsException : public std::exception{
			public:
				const char* what() const throw(){
					return "Out of bounds.";
				}
		};

		class NoSpanException : public std::exception{
			public:
				const char* what() const throw(){
					return "No span can be found";
				}
		};

		unsigned int getSize( void );
		void showVector( void );
		void addNumber( int num );
		void fillVector( void );
		unsigned int shortestSpan( void );
		unsigned int longestSpan( void );


};


#endif