/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:22:48 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/18 11:27:31 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T> class Array
{
	private:
		T 				*array;
		unsigned int	len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &cpy);
		~Array();
		Array& operator=(const Array &cpy);

		T& operator[](const unsigned int &i);
		unsigned int size() const;
};

template <class T> Array<T>::Array() : array(NULL), len(0)
{
};

template <class T> Array<T>::Array(unsigned int n) : len(n)
{
	if (n == 0)
	{
		this->array = NULL;
		return ;
	}
	this->array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->array[i] = T();
}

template <class T> Array<T>::Array(const Array &cpy) : array(NULL), len(0)
{
	*this = cpy;
}

template <class T> Array<T>& Array<T>::operator=(const Array &cpy)
{
	if (this != &cpy)
	{
		if (array)
			delete[] this->array;
		this->len = cpy.size();
		this->array = new T[cpy.size()];
		for (unsigned int i = 0; i < cpy.size(); i++)
			this->array[i] = cpy.array[i];
	}
	return (*this);
}

template <class T> unsigned int Array<T>::size() const
{
	return (this->len);
}

template <class T> T& Array<T>::operator[](const unsigned int &i)
{
	if (i >= this->size())
		throw std::out_of_range("Exception: out of range!");
	return (this->array[i]);
}

template <class T> Array<T>::~Array()
{
	if (this->array)
		delete[] array;
}

#endif
