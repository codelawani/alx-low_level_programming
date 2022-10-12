/**
* print_name - Prints name passed into it
* @name: name to be printed
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
