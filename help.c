int help(int a, int b, char operator)
{
	int (*func[5])(int a, int b) = { &plus, &minus, &mult, &mod, &div};
	int res;

	if (operator == '+')
		res = func[0](a, b);
	if (operator == '-')
		res = func[1](a, b);
	if (operator == '*')
		res = func[2](a, b);
	if (operator == '/')
		res = func[3](a, b);
	if (operator == '%')
		res = func[4](a, b);
	return(res);
}