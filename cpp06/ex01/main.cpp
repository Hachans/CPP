#include "main.hpp"

Data* deserialize(uintptr_t raw){
	std::cout << "Converting to Data*"<< std::endl;
	return reinterpret_cast<Data*>(raw);
}

uintptr_t serialize(Data* ptr){
	std::cout << "Converting to uintptr_t"<< std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

int main(){

	Data *data = new Data;
	data->c = 'z';
	data->i = 15;
	data->f = 0.15;
	data->s = "Hello";

	std::cout << "data address before: " << data << std::endl;
	std::cout << "Before: c:" << data->c << " i:" << data->i << " f:" << data->f << " s:" + data->s << std::endl;

	std::cout << std::endl;

	uintptr_t raw = serialize(data);
	Data* nw = deserialize(raw);
	
	std::cout << std::endl;
	
	std::cout << "data address after: " << nw << std::endl;
	std::cout << "After: c:" << nw->c << " i:" << nw->i << " f:" << nw->f << " s:" + nw->s << std::endl;

	return 0;
};