/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Swap.hpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/07/19 15:39:37 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/07/19 15:39:37 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
#define SWAP_HPP

#include <Color.hpp>
#include <Defines.hpp>

template <typename T> void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T> T max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif

/* ************************************************************************** */
