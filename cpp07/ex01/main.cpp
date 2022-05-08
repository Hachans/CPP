/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 10:03:46 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/07 10:37:58 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (){
	int arr[] = {1, 5, 7, 2, 4, 10};
	float farr[] = {1.5, 5.2, 7.9, 2.1, 4.44, 10.3};
	char carr[] = {'a', 'F', '*'};
	char str[] = "Hello";
	std::string str2[] = {"Hi", "hey", "bye"};

	::iter(arr, sizeof(arr)/sizeof(arr[0]), &func); std::cout << std::endl;
	::iter(farr, sizeof(farr)/sizeof(farr[0]), &func); std::cout << std::endl;
	::iter(carr, sizeof(carr)/sizeof(carr[0]), &func); std::cout << std::endl;
	::iter(str, sizeof(str)/sizeof(str[0]), &func); std::cout << std::endl;
	::iter(str2, sizeof(str2)/sizeof(str2[0]), &func); std::cout << std::endl;
}