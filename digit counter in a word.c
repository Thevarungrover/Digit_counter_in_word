#include<stdio.h>
main()
{
// Variable declaration
int i=0,count=0;
char data[20];
char key;
// Reading input from user
	printf("Enter a  word(max 20 characters) :");
	gets(data); // reading word
// Reading a character to be searched
	printf("Enter the word to check frequency :");
	scanf("%c",&key); 
// Calculating frequency of a digit
	for(i=0;data[i]!='\0' /*it checks the value of every case and checks the value not equal to '\0',which means null for string. */;i++)
	{
		if(key==data[i])
		{
		count++;
		}
	}
// Output
printf("\nThe frequency of %c in %c is %d",key, data, count);
}
