#include "../ft_printf/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#define KRED  "\x1B[31m"
#define KNRM  "\x1B[0m"
#define KYEL  "\x1B[33m"

static void	c_t(int check)
{
	if (!check)
		return ;
	printf("\n\n [%%c] \n\n");
	int i = 0;
	char c[] = {' ', '\f', 'a', 'A', 14, 46, 126, 128, '%', '|', 0};
	while (c[i])
	{
		if (ft_printf("|%c|", c[i]) != printf("|%c|", c[i]))
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
		if (ft_printf("|%s|", s[i]) != printf("|%s|", s[i]))
			printf("\n%sError on %%s #1%s\n", KRED, KNRM);
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
	long long p[8] = {
		0,
		INT_MAX,
		INT_MIN,
		LLONG_MAX,
		LONG_MIN,
		LLONG_MIN,
		UINT_MAX
	};
	while (i < 8)
	{
		if (ft_printf("|%p|", &p[i]) != printf("|%p|", &p[i]))
			printf("\n%sError on %%p #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
	if (ft_printf("|%p|", NULL) != printf("|%p|", NULL))
	{
		printf("\n%sError on %%p #1%s\n", KRED, KNRM);
		printf("%sBeware: NULL returns (nil) on Linux, but 0x0 on macos (Guacamole is macos)\n%s", KYEL, KNRM);
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
		if (ft_printf("|%d|", d[i]) != printf("|%d|", d[i]))
			printf("\n%sError on %%d #1%s\n", KRED, KNRM);
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
		if (ft_printf("|%i|", d[i]) != printf("|%i|", d[i]))
			printf("\n%sError on %%i #1%s\n", KRED, KNRM);
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
		if (ft_printf("|%u|", d[i]) != printf("|%u|", d[i]))
			printf("\n%sError on %%u #1%s\n", KRED, KNRM);
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
		if (ft_printf("|%X|", d[i]) != printf("|%X|", d[i]))
			printf("\n%sError on %%x #1%s\n", KRED, KNRM);
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
		if (ft_printf("|%X|", d[i]) != printf("|%X|", d[i]))
			printf("\n%sError on %%X #1%s\n", KRED, KNRM);
		printf("\n");
		i++;
	}
}

int main(void)
{
	c_t(0);
	s_t(0);
	p_t(1);
	d_t(0);
	i_t(0);
	u_t(0);
	x_t(0);
	X_t(0);
	return (0);
}