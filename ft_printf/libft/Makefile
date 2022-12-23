NAME = libft.a

SRCS =  ft_toupper.c\
		ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c

SRCS_BONUS = ft_lstiter_bonus.c\
			 ft_lstlast_bonus.c\
			 ft_lstdelone_bonus.c\
			 ft_lstadd_front_bonus.c\
			 ft_lstsize_bonus.c\
			 ft_lstclear_bonus.c\
			 ft_lstadd_back_bonus.c\
			 ft_lstnew_bonus.c\
			 ft_lstmap_bonus.c

INCLUDES = -c -I ./libft.h

FLAGS = -Wall -Wextra -Werror 

OBJECTS = $(SRCS:.c=.o)

BONUS_OBJECTS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME):
		cc $(FLAGS) $(SRCS) $(INCLUDES)
		ar rcs $(NAME) $(OBJECTS)
#ar rcs $(NAME) $(OBJECTS)
##The -r ( = relocatable) option directs the linker to produce an object file target (rather than a program, or DSO) 
##by linking the inputs as far as possible and not to fail the linkaqe if undefined symbol references remain in the output file. 
##This usage is called partial linking.
#-s가 ranlib $(NAME) 같다
#The GNU ranlib program is another form of GNU ar; running ranlib is completely equivalent to executing ar -s.
#ar -rcs is the most likely command you would use when using a Makefile to compile a library.
#r means that if the library already exists, replace the old files within the library with your new files. 
#c means create the library if it did not exist

$(SRCS_BONUS:.c=.o): $(SRCS_BONUS:.c=.o)
					cc $(FLAGS) $(SRCS_BONUS) $(INCLUDES)
					ar rus $(NAME) $(BONUS_OBJECTS)

bonus: $(SRCS_BONUS:.c=.o)
#-u, 다시 libft.a를 만들어서 보너스를 해주는 형식이 될수 있기 때문에
# -u      Update files.  When used with the -r option, files in the archive
# will be replaced only if the disk file has a newer modification
# time than the file in the archive.  When used with the -x option,
# files in the archive will be extracted only if the archive file has
# a newer modification time than the file on disk.

clean:
	  rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	   rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
