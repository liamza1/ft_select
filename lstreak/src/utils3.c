/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:27:21 by lstreak           #+#    #+#             */
/*   Updated: 2017/12/12 11:26:47 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_select.h"

/*
** The callback to pass to nftw
**
** @param	fpath		The path to walk through
** @param	sb			pointer to the stat buffer containing information on
**						the current file
** @param	typeflag	Additional information on the current file
** @param	ftwbuf		A pointer to a FTW structure
*/

static int		delete_callback(const char *fpath, const struct stat *sb,
	int typeflag, struct FTW *ftwbuf)
{
	int rm;

	(void)sb;
	(void)typeflag;
	(void)ftwbuf;
	rm = remove(fpath);
	return (rm);
}

/*
** Deletes the passed in 'path' from the system if it's a valid file or folder
**
** It uses 'nftw' (file tree walk) to delete folders (mainly for non empty ones)
** and 'remove' for files.
**
** @param		path	The path to the entry to delete
** @return		N/A
*/

void			system_delete_arg(char *path)
{
	struct stat		f;

	if (lstat(path, &f) == -1)
		return ;
	if (S_ISDIR(f.st_mode))
		nftw(path, delete_callback, 64, FTW_DEPTH | FTW_PHYS);
	else
		remove(path);
}
