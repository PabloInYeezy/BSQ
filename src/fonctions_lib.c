/*
** fonctions_lib.c for Yeezy in /home/valeru_r/rendu/Prog_Elem/BSQ/CPE_2015_BSQ
** 
** Made by Reever Valerus
** Login   <valeru_r@epitech.net>
** 
** Started on  Wed Dec 16 09:51:53 2015 Reever Valerus
** Last update Wed Jun  1 16:31:35 2016 Reever Valerus
*/

#include "BSQ.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char    **mem_alloc_2d_array(int nb_rowls, int nb_cols)
{
  int   count;
  char	**str;

  count = 0;
  if ((str = malloc(sizeof(char *) * (nb_rowls + 1))) == NULL)
    printf("malloc de merde\n");
  while (count < nb_rowls)
    {
      if ((str[count] = malloc(sizeof(char) * (nb_cols + 1))) == NULL)
	printf("malloc de demer");
      ++count;
    }
  return (str);
}

int	**creat_tab_int(int rowls, int cols)
{
  int	i;
  int	**tab_int;

  i = 0;
  tab_int = malloc(rowls * sizeof(int *));
  while (i != rowls)
    {
      tab_int[i] = malloc(cols * sizeof(int));
      i++;
    }
  return (tab_int);
}
