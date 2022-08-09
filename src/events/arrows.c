/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrows.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lholdo <lholdo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:00:13 by lholdo            #+#    #+#             */
/*   Updated: 2022/08/09 16:00:25 by lholdo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	look_right(t_all *all)
{
	double	olddirx;
	double	oldplanex;

	olddirx = all->ray->dir_x;
	oldplanex = all->ray->plane_x;
	all->ray->dir_x = all->ray->dir_x * cos(ROTATION)
		- all->ray->dir_y * sin(ROTATION);
	all->ray->dir_y = olddirx * sin(ROTATION)
		+ all->ray->dir_y * cos(ROTATION);
	all->ray->plane_x = all->ray->plane_x * cos(ROTATION)
		- all->ray->plane_y * sin(ROTATION);
	all->ray->plane_y = oldplanex * sin(ROTATION)
		+ all->ray->plane_y * cos(ROTATION);
}

void	look_left(t_all *all)
{
	double	olddirx;
	double	oldplanex;

	olddirx = all->ray->dir_x;
	oldplanex = all->ray->plane_x;
	all->ray->dir_x = all->ray->dir_x * cos(-ROTATION)
		- all->ray->dir_y * sin(-ROTATION);
	all->ray->dir_y = olddirx * sin(-ROTATION)
		+ all->ray->dir_y * cos(-ROTATION);
	all->ray->plane_x = all->ray->plane_x * cos(-ROTATION)
		- all->ray->plane_y * sin(-ROTATION);
	all->ray->plane_y = oldplanex * sin(-ROTATION)
		+ all->ray->plane_y * cos(-ROTATION);
}
