/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavitori <mavitori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:21:02 by mavitori          #+#    #+#             */
/*   Updated: 2024/07/29 19:16:34 by mavitori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char * argv[])
{
	int	i;
	int	j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for(i = 1; i < argc; i++) {
		for (j = 0; argv[i][j] != '\0'; j++) {
				argv[i][j] = std::toupper(argv[i][j]);
				std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
	return 0;
}
