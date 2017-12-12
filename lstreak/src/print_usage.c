/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:26:23 by lstreak           #+#    #+#             */
/*   Updated: 2017/12/12 11:25:40 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_select.h"

/*
** Print usage instructions
**
** @param		N/A
** @return		N/A
*/

void	print_usage(void)
{
	ft_putendl_fd("Thank you for using ft_select. Here's how to use it:",
		STDERR_FILENO);
	ft_putendl_fd("./ft_select [-r | --real] argument1 [argument2...]",
		STDERR_FILENO);
	exit(EXIT_FAILURE);
}
