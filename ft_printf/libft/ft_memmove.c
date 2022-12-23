/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:20:44 by sukwon            #+#    #+#             */
/*   Updated: 2022/11/14 13:53:02 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (dest == src)
		return ((void *)destination);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (++i <= n)
			dest[n - i] = src[n - i];
	}
	return ((void *)destination);
}
// void	*ft_memmove(void *dest, const void *src, size_t count)
// {
// //뭔가 근본부터 잘못된거같ㅇ,ㅁ..... 그냥 언제나 정확하게 명시해주고 순서대로 해줘야 가능한듯...
// 	if ((dest != NULL || src != NULL) && count != 0 )
// 	{
// if (dest == src)
// return (dest); //사실.. 그렇지 그래... 같은 곳에 있으면 똑같은거잖아.
// 		if (dest < src)
// 		{
// 			while (count--)
// 				*(unsigned char *)dest++ = *(unsigned char *)src++;
// 		}
// 		else
// 		{
// 			dest += count;
// 			src += count;
// 			while (count--)
// 				*(unsigned char *)--dest = *(unsigned char *)--src;
// 		}
// 	}
// 	return ((void *)dest);//void *는 사실 굳이 (void *)타입캐스트 안해줘도 가능
// }
// void	*ft_memmove(void *dest, const void *src, size_t count)
// {
// 	unsigned char		*tmp;
// 	unsigned const char	*s;

// 	if ((dest != NULL || src != NULL) && count != 0)
// 	{
// 		if (dest <= src)
// 		{
// 			tmp = dest;
// 			s = src;
// 			while (count--)
// 				*tmp++ = *s++;
// 			*(unsigned char *)dest++ = *(unsigned char *)src++;
// 		}
// 		else
// 		{
// 			tmp = dest;
// 			tmp += count;
// 			s = src;
// 			s += count;
// 			dest += count;
// 			src += count;
// 			while (count--)
// 				*(unsigned char *)--dest = *(unsigned char *)--src;
// 			//dest + count 는 원하는 만큼보다 인덱스위치로는 - 1 이어야 같아
// 		}
// 	}
// 	return ((void *)dest);
// }
//  * src 주소가 dest보다 더 큰값일때, src 의 처음 부터 count 만큼 dest 에 복사한다.
//  * src를 한 byte씩 복사하더라도 dest 보다 큰 위치에 있기 때문에,

//*오버랩되더라도 src 를 모두 정상적으로 dest에 복사할수 있다.
//뒤에있는데 src뒷부분과 dst앞부분이 겹쳐있으면 복사할때 헷갈릴수있기에 밑에 따로 조건을 두는것 꺼꾸로 복사하게.

//  * src의 주소가 dest 보다 작은 값이면,
//  * src 의 마지막 데이터부터 한바이트씩 dest의 마지막 바이트부터
//  * 순서대로 복사한다.
