// #include "./ft_printf/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#define KRED  "\x1B[31m"
#define KNRM  "\x1B[0m"

static void	c_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%c] \n\n");
	int i = 0;
	char c[] = {' ', '\f', 'a', 'A', 14, 46, 126, 128, '%', '|', 0};
	while (c[i])
	{
		if (printf("|%c|", c[i]) != printf("|%c|", c[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

static void	s_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%s] \n\n");
	int i = 0;
	char *s[8] = {
		NULL,
		0,
		"Hello",
		"Sometimes when I close my eyes, I can't see?",
		"Doing nothing is hard, you never know when you're done.\n",
		"I don't mean to brag, but I put together a puzzle in 1 day and the box said 2-4 years.",
		"",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
	};
	while (i < 8)
	{
		if (printf("|%s|", s[i]) != printf("|%s|", s[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

static void	p_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%p] \n\n");
	int i = 0;
	long long *p[] = {
		NULL
	};
	while (i < 8)
	{
		if (printf("|%p|", p[i]) != printf("|%p|", p[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

static void	d_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%d] \n\n");
	int i = 0;
	int d[] = {
		-1,
		INT_MAX,
		INT_MIN,
		INT_MIN + 1,
		INT_MAX - 1,
		0,
		-10,
		1
	};
	while (i < 8)
	{
		if (printf("|%d|", d[i]) != printf("|%d|", d[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

static void	i_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%i] \n\n");
	int i = 0;
	int d[] = {
		-1,
		INT_MAX,
		INT_MIN,
		INT_MIN + 1,
		INT_MAX - 1,
		0,
		-10,
		1
	};
	while (i < 8)
	{
		if (printf("|%i|", d[i]) != printf("|%i|", d[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

static void	u_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%u] \n\n");
	int i = 0;
	unsigned int d[] = {
		-100000,
		INT_MAX,
		INT_MIN,
		INT_MIN + 1,
		UINT_MAX,
		UINT_MAX - INT_MAX,
		UINT_MAX + INT_MIN + INT_MAX,
		0,
	};
	while (i < 8)
	{
		if (printf("|%u|", d[i]) != printf("|%u|", d[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

static void	x_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%x] \n\n");
	int i = 0;
	unsigned int d[] = {
		-100000,
		INT_MAX,
		INT_MIN,
		INT_MIN + 1,
		UINT_MAX,
		UINT_MAX - INT_MAX,
		UINT_MAX + INT_MIN + INT_MAX,
		0,
	};
	while (i < 8)
	{
		if (printf("|%X|", d[i]) != printf("|%X|", d[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

static void	X_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%X] \n\n");
	int i = 0;
	unsigned int d[] = {
		-100000,
		INT_MAX,
		INT_MIN,
		INT_MIN + 1,
		UINT_MAX,
		UINT_MAX - INT_MAX,
		UINT_MAX + INT_MIN + INT_MAX,
		0,
	};
	while (i < 8)
	{
		if (printf("|%X|", d[i]) != printf("|%X|", d[i]))
			printf("\n%sError on %%c #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

int main(void)
{
	c_t(1);
	s_t(1);
	p_t(1);
	d_t(1);
	i_t(1);
	u_t(1);
	x_t(1);
	X_t(1);
	return (0);
}