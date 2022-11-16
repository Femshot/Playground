#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	int age;
	char *email;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *new;

	new = malloc(sizeof(struct User));
	new->name = name;
	new->email = email;
	new->age = age;
	return (new);
}

int main(void)
{
	struct User *user;

	user = new_user("femi", "fm@git.c", 47);
	printf("User is %s\nemail is %s\nage is %d\n", user->name, user->email, user->age);
	return (0);
}
