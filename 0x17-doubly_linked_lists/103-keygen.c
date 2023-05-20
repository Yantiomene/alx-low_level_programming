#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * f4 - find the biggest char in username
 * @user: username
 * @u_len: username length
 *
 * Return: the biggest character
 */
int f4(char *user, int u_len)
{
	int ch, i;
	size_t rand_num;

	ch = user[0];
	for (i = 0; i < u_len; i++)
	{
		if (ch < user[i])
			ch = user[i];
	}
	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - sum th square of each character of the username
 * @user: username
 * @u_len: username length
 *
 * Return: the sum of square of each character
 */
int f5(char *user, int u_len)
{
	int i;
	size_t ch;

	ch = 0;
	for (i = 0; i < u_len; i++)
		ch += user[i] * user[i];
	return ((ch ^ 239) & 63);

}

/**
 * f6 - returns a random num
 * @user: username
 *
 * Return: a random num
 */
int f6(char *user)
{
	size_t ch = 0;
	int i;

	for (i = 0; i < user[0]; i++)
		ch = rand();
	return ((ch ^ 229) & 63);
}

/**
 * main - start of the program
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	char password[7];
	int u_len, ch = 0, i;
	char *user = argv[1];
	long var[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850};
	for (u_len = 0; user[u_len]; u_len++)
		;
	password[0] = ((char *)var)[(u_len ^ 59) & 63];

	for (i = 0; i < u_len; i++)
		ch += user[i];
	password[1] = ((char *)var)[(ch ^ 79) & 63];

	ch = 1;
	for (i = 0; i < u_len; i++)
		ch *= user[i];
	password[2] = ((char *)var)[(ch ^ 85) & 63];

	password[3] = ((char *)var)[f4(user, u_len)];

	password[4] = ((char *)var)[f5(user, u_len)];

	password[5] = ((char *)var)[f6(user)];

	password[6] = '\0';

	for (i = 0; password[i]; i++)
		printf("%c", password[i]);
	return (0);
}
