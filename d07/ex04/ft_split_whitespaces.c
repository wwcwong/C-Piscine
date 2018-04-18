/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:12:48 by wawong            #+#    #+#             */
/*   Updated: 2018/03/21 22:53:40 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*get_word(char *str, int *index);
int		count_word(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**new_str;
	int		i;
	int		word_num;
	int		index;

	i = 0;
	index = 0;
	word_num = count_word(str);
	new_str = (char**)malloc(sizeof(*new_str) * (word_num + 1));
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		str++;
	while (str[i] != '\0')
		new_str[index++] = get_word(str, &i);
	new_str[index] = 0;
	return (new_str);
}

int		count_word(char *str)
{
	int word_num;
	int i;

	word_num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (str[i] != '\0')
				i++;
			else
				break ;
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		word_num++;
	}
	return (word_num);
}

char	*get_word(char *str, int *index)
{
	int		i;
	int		start;
	char	*word;
	int		end;

	start = *index;
	i = start;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		if (str[i] != '\0')
			i++;
		else
			break ;
	}
	end = i;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	*index = i;
	i = -1;
	word = (char*)malloc(end - start + 1);
	while (++i < end - start)
		word[i] = str[start + i];
	word[i] = '\0';
	return (word);
}
