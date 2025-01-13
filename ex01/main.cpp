/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:41:13 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/18 11:43:01 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void fun(T const &i)
{
	std::cout << i << std::endl;
};

int main( void )
{
	///////////////////////////int array////////////////////////////
    size_t j = 4;

	int intArr[] = {1, 2, 3, 4};
	std::cout << "------------------ITER------------------" << std::endl;
	iter(intArr, j, fun<int>);

	///////////////////////////string array//////////////////////////////
	std::string strArr[] = {"hello", "how", "are", "you"};
	std::cout << "------------------ITER------------------" << std::endl;
	iter(strArr, j, fun<std::string>);
}
