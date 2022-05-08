/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 10:41:52 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/07 12:35:11 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
	
#include <iostream>
#include <array>

template <typename T> class Array{
	
		T* _array;
		unsigned int _size;

	public:

		Array();
		Array(unsigned int n);
		virtual ~Array();
		Array(const Array<T> &obj);
		Array& operator=(const Array<T> &obj);
	
		class OutOfBoundsException : public std::exception{
			public:
				const char* what() const throw(){
					return "Out of bounds.";
				}
		};
	
		unsigned int size();

		T& operator[](unsigned int i);
	
	
};

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0){

}

template <typename T>
Array<T>::Array(unsigned int n ) : _size(n){
	this->_array = new T[n]();
}

template <typename T>
Array<T>::~Array(){
	if (this->_size)
		delete[] this->_array;
}

template <typename T>
unsigned int Array<T>::size( void ){
	return this->_size;
}

template <typename T>
T& Array<T>::operator[](unsigned int i){
	if (i >= this->_size)
		throw Array::OutOfBoundsException();
	return this->_array[i];
}

template <typename T>
Array<T>::Array(const Array<T> &obj): _array(nullptr), _size(obj._size){
	if (obj._size > 0){
		this->_array = new T[obj._size]();
		for(unsigned int i = 0; i < obj._size; i++)
			this->_array[i] = obj._array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &obj){
	this->_size = obj.size;
	this->_array = nullptr;
	if (obj._size > 0){
		this->_array = new T[obj._size]();
		for(unsigned int i = 0; i < obj._size; i++)
			this->_array[i] = obj._array[i];
	}
	return *this;
	
}

#endif