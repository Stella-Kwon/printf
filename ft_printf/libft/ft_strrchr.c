/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:22:05 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/22 20:01:39 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	temp = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (*(temp + i) == (unsigned char)c)
			return (temp + i);
		i--;
	}
	if (*(temp + i) == (unsigned char)c)
		return (temp);
	return (NULL);
}
// #include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t	s_len;

// 	s_len = ft_strlen(s) - 1;
// 	while (s_len != 1 && s[s_len] != c)
// 		--s_len;
// 	if (s[s_len] == c)
// 		return ((char *)(s + s_len)); //s주소에서 s_len만큼 더해진 곳해서 부터.
// 	return (0);
// }
//length 이기 때문에 0보다 커야 텍스트가 있는것.
		//그리고 s_len 자체도 1일때 통과되서 0이 되어 첫번째 글자가 if 통과되서 맞으면 다행인데
		// 아니면 통과되어 아무것도 안맞는걸로 되어 retrun(0)되어야 한다.
		/*strchr와 다르게 꺼꾸로 가기때문에 맞지않을때까지 찾아서 루프안으로 통과되면,
    s_len--되기때문에 딱 찾은 위치로 맞아져서 다음 iF루프 조건에 맞아.*/

// s 가 없을때 고려하지 않는다 여기서는 무조건 컴파일 자체가 형성이 안됌. 
///그렇기때문에 가정은 언제나 \0일 때를 생각하는것. 아무것도 없는 빈칸
//찾지를 못하면 = NULL 로. 

	 
// int main (void)
// {
//    const char str[1] = "\0"; //"http://www.tutorialspoint.com";
//    char ch;
//    ch = '\0';
   
//    char *ret2,*ret;

//    ret = ft_strrchr(str, ch);
//    ret2 = strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
//    printf("String after |%c| is - |%s|\n", ch, ret2);

//   // printf("String after |%c| is - |%s|\n", ch, ft_strchr(str, ch));
//    //printf("String after |%c| is - |%s|\n", ch, ft_strrchr(str, ch));

//    return(0);
// }
