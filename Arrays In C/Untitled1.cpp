#include <stdio.h>
int anagram(char [], char []);
int main()
{
  char s1[100], s2[100];
  printf("Enter a string\n");
  gets(s1);
 
  printf("Enter a string\n");
  gets(s2);
 
  if (anagram(s1,s2) == 1)
    printf("The strings are anagrams.\n");
  else
    printf("The strings aren't anagrams.\n");
 
  return 0;
}
 
int anagram(char s1[], char s2[])
{
  int x[20] = {0}, y[20] = {0}, c = 0;
  while (s1[c] != '\0')
  {
    x[s1[c]-'a']++;
    c++;
  }
 
  c = 0;
 
  while (s2[c] != '\0')
  {
    y[s2[c]-'a']++;
    c++;
  } 
  for (c = 0; c < 26; c++)
  {
    if (x[c] != y[c])
      return 0;
  }
 
  return 1;
}

