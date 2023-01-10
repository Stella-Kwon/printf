/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:48:57 by sukwon            #+#    #+#             */
/*   Updated: 2023/01/10 11:50:17 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "./libft/libft.h"
//안불러오면 컴파일 안됌.

/*//Variadic functions are functions that can take a variable number of arguments. 
    In C programming,a variadic function adds flexibility to the program. 
	It takes one fixed argument and then any number of arguments can be passed.\
	The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.*/
/*Syntax:

int	function_name(data_type variable_name, ...);
Values of the passed arguments can be accessed through the header file named as:
# include <stdarg.h>
*/

/*more details about stdarg.h => va_start(va_list ap, argN)...etc
https://www.geeksforgeeks.org/variadic-functions-in-c/
https://velog.io/@tmdgks2222/ftprintf
*/

int	ft_printf(const char *format, ...);
int	put_hex_up(unsigned int n);
int	put_hex_low(unsigned int n);
int	put_d_i(int n);
int	put_unsigned_int(unsigned int n);
int	put_str(char *str);
int	put_ptr(void *n);
int	put_char(int c);

#endif