/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henquinsebastien <henquinsebastien@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 10:01:26 by shenquin          #+#    #+#             */
/*   Updated: 2020/10/02 11:01:42 by henquinseba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <string.h>

char			*ft_strjoin(char *s1, char *s2);
char			*ft_substr(char *s, unsigned int start, unsigned int len);
size_t			ft_strlen(char *s);
int				get_next_line(int fd, char **line);
char			*ft_strdup(char *src);
int				ft_check_bsn(char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 56789
# endif

#endif
