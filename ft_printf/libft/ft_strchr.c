/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:46:28 by sukwon            #+#    #+#             */
/*   Updated: 2023/01/05 23:37:06 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// char	*ft_strchr(const char *str, int character)
// {
//     if (!str)
//         return (0);
// 	while (*str)
// 	{
// 		if (*str == (unsigned char) character)
// 			return ((char *)str);
// 		str++;
// 	}
// 	return (NULL);
// }

char	*ft_strchr(const char *str, int character)
{	
	int	i;

	i = 0;
    if (!str)
        return (0);
	if (character == '\0')
		return ((char*)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)character)
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}

// char	*ft_strchr(const char *str, int character)
// {
// 	int	i;

// 	i = 0;
//     if (!str)
//         return (0);
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == (unsigned char)character)
// 			return ((char *) (str + i));
// 		i++;
// 	}
// 	if (str[i] == (unsigned char)character)
// 		return ((char *) (str + i));//마지막 눌포인터가 c일수도 있으니까...ㅎ
// 	return (NULL);
// }

//return ((char *)/*&*/ str);
//앞에 타입캐스트를 해주면 전체의 어뤠이를 가르켜,이미 주소 자체가 밀어진곳에 있기에. 멈춘곳에서부터 시작.
//&는 넣어도 안넣어도 여기식에서는 동일한 결과가 나옴.
//(char *)&(여기서는 &를 넣어줘야해. 안넣어줘도 될수도..있고 )str[i] 해도 거기서부터 쭉 나타남.

// s 가 없을때 고려하지 않는다 여기서는 무조건 컴파일 자체가 형성이 안됌. 
///그렇기때문에 가정은 언제나 \0일 때를 생각하는것. 아무것도 없는 빈칸
//찾지를 못하면 = NULL 로. 

/*if (255 < character) 
			character = character - 256;*/
//위에 명시는 모든 경우의 수를 커버하기에 부족.
// 256 * 2 이렇게 해버리면 다시c의 위치로 돌아가지 않기 때문에
//아에 unsigned char로 명시해주는 것.
//unsigned char will always cover up the minus part and be rotated back to start when it ends up at 255 in unsigned char ascii.
