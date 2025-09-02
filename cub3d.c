/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:02:21 by sechlahb          #+#    #+#             */
/*   Updated: 2025/08/17 14:44:54 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -L/usr/include/minilibx-linux -lmlx -lX11 -lXext 

// #include "mlx.h"
#include "/home/sechlahb/Desktop/minilibx-linux/mlx.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_cub3d
{
    void *mlx;
    void *window;
    
} t_cub3d;

int handler(t_cub3d *cub3d)
{
    (void) cub3d;
    printf("gamme closed\n");
    exit (0);
}

int main()
{
    t_cub3d cub3d;
    
    cub3d.mlx = mlx_init();
    cub3d.window = mlx_new_window(cub3d.mlx, 800, 600, "cub3d");
    mlx_hook(cub3d.window, 17, 0, handler, &cub3d);
    mlx_loop(cub3d.mlx);
}