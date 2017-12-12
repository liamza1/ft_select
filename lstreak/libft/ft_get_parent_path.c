/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parent_path.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 12:50:12 by lstreak           #+#    #+#             */
/*   Updated: 2017/12/12 12:52:35 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_parent_path(char *path)
{
	char	*last_slash;
	char	*parent;

	last_slash = strrchr(path, '/');
	parent = strndup(path, last_slash - path);
	return (parent);
}
