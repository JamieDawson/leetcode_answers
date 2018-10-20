#include <stdio.h>

char* toLowerCase(char* str) {
    int i = 0;
	while (str[i])
	{
        if (str[i] >= 'A' && str[i] <= 'Z')
           str[i] += 32;
		i++;
	}
    return (str);
}

int		main()
{
	char str[6] = "";
	toLowerCase(str);
	printf("%s", str);
	return (0);
}
