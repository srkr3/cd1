#include <stdio.h>
#include <stdlib.h>
// ab(a+b)* pattern
int main() {
    char input[100];
    int i=0;
    printf("Enter the string: ");
    scanf("%s", input);
    
    int state = 0;
    while(input[i] != '\0'){
        if (state == 0 && input[i] == 'a') 
		{
            state = 1;
        } 
		else if (state == 1 && input[i] == 'b') 
		{
            state = 2;
        } 
		else if (state == 2 && (input[i] == 'a' || input[i] == 'b')) 
		{
            state = 2;
        } 
		else {
           printf("invalid string");
           exit(0);
        }
        i++;
    }

    if (state == 2) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}
