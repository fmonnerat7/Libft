char	*ft_strrchr(const char *s, int c)
{
	int	i;
	const char	*aux;
	
	aux = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *aux && c != *s)
	{
		s--;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	return (0);
}
