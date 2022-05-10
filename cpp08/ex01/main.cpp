#include "Span.hpp"

int main(){

	try{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(3);

		sp.showVector();
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "Copy test" << std::endl;
		Span sp2 = Span(1);
		sp2.addNumber(15);
		sp2 = sp;
		sp2.showVector();
		std::cout << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout  << "------------"<< std::endl;

	try{
		Span sp = Span(2);
		sp.addNumber(4);
		sp.addNumber(1002);


		sp.showVector();
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout  << "------------"<< std::endl;

	try{
		Span sp = Span(150);
		sp.addNumber(19);
		sp.addNumber(84);
		sp.addNumber(15);
		sp.addNumber(6);
		sp.addNumber(15);
		sp.fillVector();


		sp.showVector();
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	return 0;
}