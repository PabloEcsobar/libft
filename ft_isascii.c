/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polenyc <polenyc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:14:09 by polenyc           #+#    #+#             */
/*   Updated: 2023/11/19 22:23:57 by polenyc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	return (arg >= 0 && arg < 128);
}
