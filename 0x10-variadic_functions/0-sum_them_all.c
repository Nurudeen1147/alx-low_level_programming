int sum_them_all(const unsigned int n, ...)
{
	unsigned  int sum = 0,  i;
	va_list lst;

	va_start(lst, n);

	if (n != 0)
	{
		for (i = 0; i < n;  i++)
		{
			int p = va_arg(lst, int);

			sum += p;
		}
		va_end(lst);
		return (sum);
	}
	return (0);
}
