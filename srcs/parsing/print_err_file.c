/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_err_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:45:22 by jecaudal          #+#    #+#             */
/*   Updated: 2020/01/15 13:44:56 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_err	print_err_file(int curr_line, t_err err)
{
	l_putstr("Error\n");
	if (err != ERR_MISSING)
		ft_printf("Line %d : ", curr_line);
	if (err == ERR_UNKNOW)
		l_putstr(ERR_MSG_HEAD_UNKNO);
	else if (err == ERR_NOT_CUB)
		l_putstr(ERR_MSG_NOT_CUB);
	else if (err == ERR_MEMALLOC)
		l_putstr(ERR_MSG_MALLOC);
	else if (err == ERR_DUPED_INFO)
		l_putstr(ERR_MSG_DUPED);
	else if (err == ERR_MISSING)
		l_putstr(ERR_MSG_HEAD_MISS);
	else if (err == ERR_ERRNO)
		ft_printf("%s\n", strerror(errno));
	return (err);
}