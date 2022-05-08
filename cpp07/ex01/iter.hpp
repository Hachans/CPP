/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 10:03:58 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/08 15:30:34 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <array>

template <typename T> 
void iter(T *array, size_t len, void (*func)(T &elem)){
	for (size_t i = 0; i < len; i++)
		(*func)(array[i]);
}

template <typename T> 
void func(T &elem){
	elem += 1;
	std::cout << elem << " ";
}

#endif