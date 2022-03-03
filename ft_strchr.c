char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i] != '\0' && c != s[i])
	{
		i++;
	}
	if (c == s[i])
	{
		return ((char *s)&s[i]);
	}
	return (0);
}
