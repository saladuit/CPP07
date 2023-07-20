/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/24 14:47:46 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/24 14:47:46 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Iter.hpp>
#include <cstdlib>
#include <iostream>

int main()
{
	int int_array[5] = {1, 2, 3, 4, 5};
	char char_array[5] = {'a', 'b', 'c', 'd', 'd'};

	std::cout << Color::green << "Testing with int array" << Color::reset
			  << std::endl;
	iter(int_array, 5, print);
	std::cout << std::endl;
	iter(int_array, 5, increment);
	iter(int_array, 5, print);
	std::cout << std::endl;
	std::cout << Color::green << "Testing with char array" << Color::reset
			  << std::endl;
	iter(char_array, 5, print);
	std::cout << std::endl;
	iter(char_array, 5, increment);
	iter(char_array, 5, print);
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
