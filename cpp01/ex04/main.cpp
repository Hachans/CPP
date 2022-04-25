/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:37:22 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 16:17:19 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv){
	
	if (argc != 4){
		std::cerr << "Invalid arg count" << std::endl;
		return 1;
	}
	
	std::string tmp = argv[1];
	std::ifstream myFile(tmp);
	if(!myFile.good()){
		std::cerr << "Something wrong with infile" << std::endl;
		myFile.close();
		return 2;
	}
	
	std::ofstream outFile(tmp + ".replace");
	if (!outFile.good()){
		std::cerr << "Failed to create outfile" << std::endl;
		return 3;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	std::size_t found = 0;
	if (s1.empty()){
		while(getline(myFile, line))
			outFile << line << std::endl;
	}

	while(std::getline(myFile, line)){
		while ((found = line.find(s1)) != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
		}
		outFile << line << std::endl;
	}
	outFile.close();
	return 0;
}