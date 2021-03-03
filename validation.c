int validation(int b, char operator)
{
	if (b == 0 && operator == '/')
	{
		write(1, "Stop : division by zero", 24);
		return (-1);
	}
	if (b == 0 && operator == '%')
	{
		write(1, "Stop : modulo by zero", 22);
		return (-1);
	}
}