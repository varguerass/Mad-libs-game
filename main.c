#include <stdio.h>
#include <string.h>

int main(){

    // MAD LIBS GAME

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strcspn(adjective1, "\n")] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcspn(noun, "\n")] = '\0';

    printf("Enter an adjective(description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strcspn(adjective2, "\n")] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = '\0';

    printf("Enter an adjective(description): ");
    fgets(adjective3, sizeof(adjective3), stdin);    
    adjective3[strcspn(adjective3, "\n")] = '\0';

    printf("\nToday I went to the zoo.\n");
    printf("I saw a very %s %s.\n", adjective1, noun);
    printf("It was %s and was %s all day long.\n", adjective2, verb);
    printf("Everyone said it was the most %s thing they had ever seen.\n", adjective3);
    printf("I will never forget that %s %s.\n", adjective1, noun);
 

    return 0;
}