/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Array.hpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/07/20 15:20:27 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/07/20 15:20:27 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <Color.hpp>
#include <Defines.hpp>
#include <iostream>

template <typename T>
class Array
{
  private:
	T *_array;
	unsigned int _size;

  public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &src);
	~Array();
	Array<T> &operator=(Array<T> const &rhs);
	T &operator[](unsigned int n);
	unsigned int size() const;
	class OutOfBoundsException : public std::exception
	{
	  public:
		virtual const char *what() const throw();
	};
};

/* **************************Private_member_functions************************ */

/* **************************Public_member_functions************************* */

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Error: Out of bounds");
}

/* *******************************Constructors******************************* */

template <typename T>
Array<T>::Array() : _array(new T[0]()), _size(0)
{
}

template <typename T>
Array<T>::Array(Array<T> const &src) : _array(nullptr), _size(0)
{
	*this = src;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n)
{
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

/* ********************************Overloads********************************* */

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (this != &rhs)
	{
		delete[] this->_array;
		this->_array = new T[rhs._size];
		for (size_t i = 0; i < rhs._size; i++)
			this->_array[i] = rhs._array[i];
		this->_size = rhs._size;
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw Array::OutOfBoundsException();
	return (this->_array[n]);
}
#endif

/* ************************************************************************** */
