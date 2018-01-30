// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/14 17:23:52 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/14 17:23:54 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.tpp"

int	main() {

	Array<int> arrInt;

	try {
		arrInt[0] = 42;
		arrInt[1] = 5;

		std::cout << arrInt[0] << std::endl;
		std::cout << arrInt[1] << std::endl;
		
	} catch (std::exception err){
		std::cout << err.what() << std::endl;
	}
	std::cout << "**********************************************************************" << std::endl;
	Array<int> arrInt2(5);

	try {
		arrInt2[0] = 42;
		arrInt2[1] = 5;
		arrInt2[2] = 3;
		arrInt2[3] = 4;
		arrInt2[4] = 16;

		std::cout << arrInt2[0] << std::endl;
		std::cout << arrInt2[1] << std::endl;
		std::cout << arrInt2[2] << std::endl;
		std::cout << arrInt2[3] << std::endl;
		std::cout << arrInt2[4] << std::endl;
		std::cout << arrInt2[5] << std::endl;
		
	} catch (std::exception err){
		std::cout << err.what() << std::endl;
	}
	std::cout << "**********************************************************************" << std::endl;
	Array<int> lol(arrInt);

	try {
		lol[0] = 142;
		lol[1] = 15;
		lol[2] = 13;
		lol[3] = 14;
		lol[4] = 116;

		std::cout << lol[0] << std::endl;
		std::cout << lol[1] << std::endl;
		std::cout << lol[2] << std::endl;
		std::cout << lol[3] << std::endl;
		std::cout << lol[4] << std::endl;
		std::cout << lol[5] << std::endl;

	} catch (std::exception err){
		std::cout << err.what() << std::endl;
	}
	std::cout << "**********************************************************************" << std::endl;
	Array<std::string> str(3);

	try {
		str[0] = "hello";
		str[1] = "world";
		str[2] = "mofo";

		std::cout << str[0] << std::endl;
		std::cout << str[1] << std::endl;
		std::cout << str[2] << std::endl;
		std::cout << str[3] << std::endl;

	} catch (std::exception err){
		std::cout << err.what() << std::endl;
	}
	std::cout << "**********************************************************************" << std::endl;
	return 0;
}
