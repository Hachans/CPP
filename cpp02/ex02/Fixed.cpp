/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:46 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 18:34:47 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed( const int i ){
	// std::cout << "Int constructor called" << std::endl;
	this->_int = i * (1 << this->_bits);
}

Fixed::Fixed( const float i ){
	// std::cout << "Float constructor called" << std::endl;
	this->_int = round(i * (1 << this->_bits));
}

Fixed::Fixed( void ) : _int(0){
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ){
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj){
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed& obj){
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_int = obj.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	return this->_int;
}

float Fixed::toFloat( void ) const{
	return ((float)getRawBits() / (float)(1 << this->_bits)); 
}

int Fixed::toInt( void ) const{
	return (getRawBits() / (1 << this->_bits));
}

Fixed &Fixed::operator++( void ){
	this->_int++;
	return *this;
}

Fixed Fixed::operator++( int ){
	Fixed res = *this;
	++*this;
	return res;
}

Fixed &Fixed::operator--( void ){
	this->_int--;
	return *this;
}

Fixed Fixed::operator--( int ){
	Fixed res = *this;
	--*this;
	return res;
}

Fixed Fixed::operator+( const Fixed& obj ) const{
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-( const Fixed& obj ) const{
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*( const Fixed& obj ) const{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/( const Fixed& obj ) const{
	if (obj.toFloat() > 0)
		return (Fixed(this->toFloat() / obj.toFloat()));
	else throw std::runtime_error("Cannot divide by zero");
}

bool Fixed::operator==(const Fixed& obj) const{
	return (this->_int == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed& obj) const{
	return (this->_int != obj.getRawBits());
}

bool Fixed::operator>=(const Fixed& obj) const{
	return (this->_int >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed& obj) const{
	return (this->_int <= obj.getRawBits());
}

bool Fixed::operator>(const Fixed& obj) const{
	return (this->_int > obj.getRawBits());
}

bool Fixed::operator<(const Fixed& obj) const{
	return (this->_int < obj.getRawBits());
}

const Fixed& Fixed::max( const Fixed& obj, const Fixed& obj2 ){
	return (obj > obj2 ? obj : obj2);
}

const Fixed& Fixed::min( const Fixed& obj, const Fixed& obj2 ){
	return (obj > obj2 ? obj2 : obj);
}

Fixed& Fixed::max( Fixed& obj, Fixed& obj2 ){
	return (obj > obj2 ? obj : obj2);
}

Fixed& Fixed::min( Fixed& obj, Fixed& obj2 ){
	return (obj > obj2 ? obj2 : obj);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	return (os << obj.toFloat());
}
