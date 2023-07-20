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

#include <Array.hpp>
#include <cstdlib>
#include <iostream>

int main()
{
	Array<int> intArray(5);
	Array<std::string> stringArray(5);
	Array<Color> colorArray(5);

	std::cout << "intArray size: " << intArray.size() << std::endl;
	std::cout << "stringArray size: " << stringArray.size() << std::endl;
	std::cout << "colorArray size: " << colorArray.size() << std::endl;

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
