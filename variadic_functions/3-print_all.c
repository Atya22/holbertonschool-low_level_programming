void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *t;
	char *separator = ", ";
	int length = 0;

	while (format[length] != '\0')
	{
		length++;
	}

	if (length != 0)
	{
		va_start(args, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 's':
				t = va_arg(args, char *);
				if (t != NULL)
				{
					printf("%s%s", t, i == length - 1 ? "" : separator);
					break;
				}
				printf("(nil)%s", i == length - 1 ? "" : separator);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), i == length - 1 ? "" : separator);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), i == length - 1 ? "" : separator);
				break;
			case 'c':
				printf("%c%s", va_arg(args, int), i == length - 1 ? "" : separator);
				break;
			default:
				break;
			}
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
