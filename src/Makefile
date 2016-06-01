##
## Makefile for Yeezy in /home/valeru_r/rendu/Prog_Elem/BSQ/CPE_2015_BSQ
## 
## Made by Reever Valerus
## Login   <valeru_r@epitech.net>
## 
## Started on  Wed Dec 16 09:34:10 2015 Reever Valerus
## Last update Wed Jun  1 16:30:06 2016 Reever Valerus
##

CC	=	gcc

NAME	=	bsq

DIR_BIN	=	..

RM	=	rm -f

CFLAGS	+=	-I../include
CFLAGS	+=	-g3

SRCS	=	fonctions_lib.c \
		algo.c \
		fonctions_tab.c \
		lib_functions2.c \
		get_line.c \
		open_read.c \
		main.c \

OBJS	=	$(SRCS:.c=.o)

all	:	$NAME

$NAME	:	$(OBJS)
		$(CC) -o $(DIR_BIN)/$(NAME) $(OBJS) $(CFLAGS)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(DIR_BIN)/$(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
