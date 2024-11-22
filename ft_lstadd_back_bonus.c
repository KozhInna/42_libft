/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozhina <ikozhina@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:11:26 by ikozhina          #+#    #+#             */
/*   Updated: 2024/11/22 10:04:25 by ikozhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pnt;

	pnt = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	while (pnt->next != NULL)
		pnt = pnt->next;
	pnt->next = new;
}