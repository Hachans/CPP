/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 09:34:03 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/07 18:46:35 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
}

template <typename T> T min(T &a, T &b){
	return (a < b ? a : b);
}

template <typename T> T max(T &a, T &b){
	return (a > b ? a : b);
}

#endif