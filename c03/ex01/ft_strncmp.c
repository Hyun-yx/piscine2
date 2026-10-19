#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((s1[i] == s2[j]) && (s1[i] != '\0') && ( i < n))
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	main(void)
{
	char	s1[] = "momonga";
	char	s2[] = "momonga";

	char	s3[] = "kingdom hearts";
	char	s4[] = "kingdum hearts";
	unsigned int 	n;

	n = 6;
	printf("Results\n");
	printf("Same = %d\n", ft_strncmp(s1, s2, n));
	printf("Diff = %d\n", ft_strncmp(s3, s4, n));
	return (0);
}
