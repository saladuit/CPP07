/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Iter.hpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/07/20 14:45:51 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/07/20 14:45:51 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <Color.hpp>
#include <Defines.hpp>
#include <iostream>

template <typename T> void iter(T *array, size_t length, void (*f)(T &))
{
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template <typename T> void print(T &x)
{
	std::cout << x << " ";
}

template <typename T> void increment(T &x)
{
	x++;
}

#endif

/* ************************************************************************** */
