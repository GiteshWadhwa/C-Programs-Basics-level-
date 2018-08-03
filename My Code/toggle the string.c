#include <stdio.h>

int main()
{
  char s[101];
  int i=0;
  scanf("%[^\n]",s);
  while(s[i])
  {
  if(s[i]>='A'&&s[i]<='Z')

      s[i]=s[i]+32;

  else if(s[i]>='a'&&s[i]<='z')

      s[i]=s[i]-32;

  i++;
}
  printf("%s\n",s);




    return 0;
}
