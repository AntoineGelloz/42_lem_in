/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <agelloz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:33:35 by agelloz           #+#    #+#             */
/*   Updated: 2019/11/27 16:07:00 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	print_file(t_parsing *p)
{
	t_list		*curr;

	curr = p->file;
	while (curr)
	{
		ft_putendl(curr->content);
		curr = curr->next;
	}
	ft_putchar('\n');
}

void	print_ssize_t(t_list *list, t_graph *graph)
{
	t_list		*curr;

	curr = list;
	while (curr)
	{
		ft_printf("%s ", graph->nodes[*(size_t *)curr->content].name);
		curr = curr->next;
	}
	ft_putchar('\n');
}
