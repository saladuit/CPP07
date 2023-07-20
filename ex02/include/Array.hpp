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

template <typename T> class Array
{
  private:
	T *_array;
	unsigned int _size;

  public:
	Array();
	Array(unsigned int n);
	Array(Array const &src);
	~Array();
	T &operator=(Array const &rhs);
	T &operator[](unsigned int n);
	unsigned int size() const;
	class OutOfBoundsException : public std::exception
	{
	  public:
		virtual const char *what() const throw();
	};
};

#endif

/* ************************************************************************** */
