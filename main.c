#include "./include/libasm.h"

int		main(void)
{
	char	*cl;
	char	*little;
	char	*middle;
	char	*mini_big;
	char	*big;
	char	*mine;
	char	*not_mi;

	cl = "";
	little = "hello";
	middle = "You can't do inline ASM, you must do ’.s’ files.";
	mini_big = "You must use the miniLibX. Either the version that is available on the operating system, or from its sources. If you choose to work with the sources, you will need to apply the same rules for your libft as those written above in Common Instructions part.";
	big = "You must use the miniLibX. Either the version that is available on the operating system, or from its sources. If you choose to work with the sources, you will need to apply the same rules for your libft as those written above in Common Instructions part. Bonuses will be evaluated only if your mandatory part is PERFECT. By PERFECT we naturally mean that it needs to be complete, that it cannot fail, even in cases of nasty mistakes like wrong uses etc. Basically, it means that if your mandatory part does not obtain ALL the points during the grading, your bonuses will be entirely IGNORED.";

	printf("\n_______ft_strlen_______\n\n");

	printf("\nempty string");
	printf("\n|%s|", cl);
	printf("\nmy: %zu", ft_strlen(cl));
	printf("\nstd: %zu", strlen(cl));

	printf("\n\nlittle string");
	printf("\n|%s|", little);
	printf("\nmy: %zu", ft_strlen(little));
	printf("\nstd: %zu", strlen(little));

	printf("\n\nmiddle string");
	printf("\n|%s|", middle);
	printf("\nmy: %zu", ft_strlen(middle));
	printf("\nstd: %zu", strlen(middle));

	printf("\n\nbig string");
	printf("\n|%s|", big);
	printf("\nmy: %zu", ft_strlen(big));
	printf("\nstd: %zu\n", strlen(big));

	printf("\n\n\n_______ft_strcpy_______\n\n");

	char	res1[100];
	printf("\nempty string");
	printf("\n|%s|", cl);
	printf("\nmy:\n|%s|\n", ft_strcpy(res1, cl));

	char	res2[100];
	printf("\n\nlittle string");
	printf("\n|%s|", little);
	printf("\nmy:\n|%s|", ft_strcpy(res2, little));

	char	res3[100];
	printf("\n\nmiddle string");
	printf("\n|%s|", middle);
	printf("\nmy:\n|%s|", ft_strcpy(res3, middle));

	char	res4[600];
	printf("\nbig string");
	printf("\n|%s|", big);
	printf("\nmy:\n|%s|\n", ft_strcpy(res4, big));

	printf("\n\n\n_______ft_strcmp_______\n\n");

	printf("\n1: |%s|\n2: |%s|", cl, cl);
	printf("\nmy: %d", ft_strcmp(cl, cl));
	printf("\nstd: %d\n", strcmp(cl, cl));

	printf("\n1: |%s|\n2: |%s|", cl, big);
	printf("\nmy: %d", ft_strcmp(cl, big));
	printf("\nstd: %d\n", strcmp(cl, big));

	printf("\n1: |%s|\n2: |%s|", middle, cl);
	printf("\nmy: %d", ft_strcmp(middle, cl));
	printf("\nstd: %d\n", strcmp(middle, cl));

	printf("\n1: |%s|\n2: |%s|", little, big);
	printf("\nmy: %d", ft_strcmp(little, big));
	printf("\nstd: %d\n", strcmp(little, big));

	printf("\n1: |%s|\n2: |%s|", big, middle);
	printf("\nmy: %d", ft_strcmp(big, middle));
	printf("\nstd: %d\n", strcmp(big, middle));

	printf("\n1: |%s|\n2: |%s|", big, big);
	printf("\nmy: %d", ft_strcmp(big, big));
	printf("\nstd: %d\n", strcmp(big, big));

	printf("\n1: |%s|\n2: |%s|", mini_big, big);
	printf("\nmy: %d", ft_strcmp(mini_big, big));
	printf("\nstd: %d\n", strcmp(mini_big, big));

	printf("\n1: |%s|\n2: |%s|", big, mini_big);
	printf("\nmy: %d", ft_strcmp(big, mini_big));
	printf("\nstd: %d\n", strcmp(big, mini_big));

	printf("\n\n\n_______ft_strdup_______\n\n");

	printf("\nempty string");
	printf("\n|%s|", cl);
	mine = ft_strdup(cl);
	not_mi = strdup(cl);
	printf("\nmy: |%s|", mine);
	printf("\nstd: |%s|", not_mi);
	free(mine);
	free(not_mi);

	printf("\n\nlittle string");
	printf("\n|%s|", little);
	mine = ft_strdup(little);
	not_mi = strdup(little);
	printf("\nmy: |%s|", mine);
	printf("\nstd: |%s|", not_mi);
	free(mine);
	free(not_mi);

	printf("\n\nmiddle string");
	printf("\n|%s|", middle);
	mine = ft_strdup(middle);
	not_mi = strdup(middle);
	printf("\nmy:\n|%s|", mine);
	printf("\nstd:\n|%s|", not_mi);
	free(mine);
	free(not_mi);

	printf("\n\nbig string");
	printf("\n|%s|", big);
	mine = ft_strdup(big);
	not_mi = strdup(big);
	printf("\nmy:\n|%s|", mine);
	printf("\nstd:\n|%s|\n", not_mi);
	free(mine);
	free(not_mi);


	printf("\nstring: |%s|\n", little);
	ft_strdup("");
	printf("my error: %d\n", errno);
	strdup("");
	printf("std error: %d\n", errno);

	int		fd;
	ssize_t	number;

	printf("\n\n\n_______ft_write_______\n\n");

	printf("\nstring: |%s|\n", cl);
	number = ft_write(1, cl, ft_strlen(cl));
	printf("my: %zd\n", number);
	number = write(1, cl, strlen(cl));
	printf("std: %zd\n", number);

	printf("\nstring: |%s|\n", little);
	number = ft_write(1, little, ft_strlen(little));
	printf("\nmy: %zd\n", number);
	number = write(1, little, strlen(little));
	printf("\nstd: %zd\n", number);

	printf("\nstring: |%s|\n", little);
	number = ft_write(-312, little, ft_strlen(little));
	printf("my: %zd\n", number);
	printf("my error: %d\n", errno);
	number = write(-312, little, strlen(little));
	printf("std: %zd\n", number);
	printf("std error: %d\n", errno);

	printf("\nstring: |%s|\n", little);
	number = ft_write(1, little, -312);
	printf("my: %zd\n", number);
	printf("my error: %d\n", errno);
	number = write(1, little, -312);
	printf("std: %zd\n", number);
	printf("std error: %d\n", errno);

	printf("\nwrite in file!");
	fd = open("my_test.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IROTH);
	printf("\nstring: |%s|\n", middle);
	number = ft_write(fd, middle, ft_strlen(middle));
	printf("my: %zd\n", number);
	fd = open("std_test.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IROTH);
	number = write(fd, middle, strlen(middle));
	printf("std: %zd\n", number);

	printf("\n\n\n_______ft_read_______\n\n\n");

	char	str1[100];
	char	str2[100];

	fd = open("my_test.txt", O_RDONLY);
	number = ft_read(fd, str1, 100);
	printf("my str: |%s|\nmy byte: %zu\n", str1, number);
	number = read(fd, str2, 100);
	printf("std str: |%s|\nstd byte: %zu\n\n", str2, number);
	close(fd);

	char	str3[1];

	number = ft_read(-312, str3, 100);
	printf("my: %zd\nmy: |%s|\n", number, str3);
	printf("my error: %d\n", errno);
	number = read(-312, str3, 100);
	printf("std: %zd\nstd: |%s|\n", number, str3);
	printf("std error: %d\n\n", errno);

	fd = open("my_test.txt", O_RDONLY);
	number = ft_read(fd, str3, -312);
	printf("my: %zd\nmy: |%s|\n", number, str3);
	printf("my error: %d\n", errno);
	close(fd);
	fd = open("std_test.txt", O_RDONLY);
	number = read(fd, str3, -312);
	printf("std: %zd\nstd: |%s|\n", number, str3);
	printf("std error: %d\n\n", errno);

	char	str4[1024];
	char	str5[1024];

	number = ft_read(0, str4, 1024);
	printf("my: %zd\nmy: %s\n", number, str4);
	number = read(0, str5, 1024);
	printf("std: %zd\nstd: %s\n", number, str5);

	return (0);
}
