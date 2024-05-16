#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[100];
    printf("Enter the string: ");
    scanf("%s", input);
    int n = strlen(input);
    
    if (input[n - 1] == '0' && input[n - 2] == '0') 
	{
        printf("Accepted");
    } 
	else 
	{
        printf("Rejected");
    }
    return 0;
}
