#include <stdio.h>

struct address {
    char city[50];
    char state[50];
};

struct employee {
    char name[50];
    int id;
    struct address a;
};

int main() {
    struct employee e;

    printf("enter name: ");
    scanf("%s", e.name);
    printf("enter id: ");
    scanf("%d", &e.id);
    printf("enter city: ");
    scanf("%s", e.a.city);
    printf("enter state: ");
    scanf("%s", e.a.state);

    printf("name: %s\n", e.name);
    printf("id: %d\n", e.id);
    printf("city: %s\n", e.a.city);
    printf("state: %s\n", e.a.state);

    return 0;
}