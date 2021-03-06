/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_miner.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 10:20:44 by jecaudal          #+#    #+#             */
/*   Updated: 2020/02/24 15:55:54 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	color_miner(char *rgb)
{
	int		color;
	char	**colors;

	colors = l_split(rgb, ",");
	color = l_atoi(colors[0]);
	color = (color << 8) + l_atoi(colors[1]);
	color = (color << 8) + l_atoi(colors[2]);
	l_freestrs(colors);
	return (color);
}
