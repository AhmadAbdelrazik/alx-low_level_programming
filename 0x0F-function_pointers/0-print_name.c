/**
 * print_name - prints the given name.
 * @name: the name.
 * @f: pointer to the function.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
