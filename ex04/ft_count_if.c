int ft_count_if(char **tab, int(*f)(char*))
{
	int count;
	int index;

	index = 0;
	count = 0;
	while (tab[index])
	{
		if (f(tab[index]))
			count++;
		index++;
	}
	return (count);
}