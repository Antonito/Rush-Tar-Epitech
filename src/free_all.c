/*
** free_all.c for Rush1 in /home/bache_a/work/Prog_Elem/Rush1/step_3/src
**
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
**
** Started on  Sun Jan 10 21:04:05 2016 Antoine Baché
** Last update Sun Jan 10 21:05:21 2016 Antoine Baché
*/

#include "my_tar.h"

void	free_all(char **str)
{
  int	i;

  i = -1;
  while (str[++i] != NULL)
    free(str[i]);
  if (str != NULL)
    free(str);
}
