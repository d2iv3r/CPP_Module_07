/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:12:09 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/18 11:38:32 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	/////////////////// ARRAY OF INTS ///////////////////
	{
		std::cout << "-------------------------------------------" << std::endl;
		try
		{
			Array<int> arr(5);
			for (unsigned int i = 0; i < arr.size() ; i++)
				std::cout << arr[i] << std::endl;
			for (unsigned int i = 0; i < arr.size() ; i++)
				arr[i] = 1337;
			for (unsigned int i = 0; i < arr.size() ; i++)
				std::cout << arr[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// ///////////////////// ARRAY OF STRINGS ///////////////////
	{
		std::cout << "-------------------------------------------" << std::endl;
		try
		{
			Array<std::string> arr2(5);
			for (unsigned int i = 0; i < arr2.size(); i++)
				std::cout << arr2[i] << std::endl;
			for (unsigned int i = 0; i < arr2.size(); i++)
				arr2[i] = "leet";
			for (unsigned int i = 0; i < arr2.size(); i++)
				std::cout << arr2[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// //////////////////////// DEEP COPY ////////////////////
	{
		std::cout << "-------------------------------------------" << std::endl;
		try
		{
			Array<int> arr1(5);
			Array<int> arr2;
			arr2 = arr1;
			for (size_t i = 0; i < arr1.size(); i++)
				arr1[i] = 1337;
			std::cout << "-----ARRAY1------" << std::endl;
			for (size_t i = 0; i < arr1.size(); i++)
				std::cout << arr1[i] << std::endl;
			std::cout << "-----ARRAY2------" << std::endl;
			for (size_t i = 0; i < arr2.size(); i++)
				std::cout << arr2[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	//////////////////// THROW EXCEPTION ///////////////////////////
	{
		std::cout << "-------------------------------------------" << std::endl;
		try
		{
			Array<int> arr(5);
			arr[6] = 42;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
