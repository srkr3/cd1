#include <stdio.h>
int main() {
    char input[100];
    printf("Enter the string: ");
    scanf("%s", input);
    
    int state = 0,i;
    for ( i = 0; input[i] != '\0'; i++) {
        if (state == 0 && input[i] == 'a') 
		{
            state = 1;
        } 
		else if (state == 1 && input[i] == 'a') 
		{
            state = 1;
        } 
		else if (state == 1 && input[i] == 'b') 
		{
            state = 2;
        } 
		else if (state == 2 && input[i] == 'b') 
		{
            state = 2;
        }
    }

    if (state == 2) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

