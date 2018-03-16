void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}
 
/* Driver function to test above functions */
int main()
{
  char s[] = "i like this program very much";
  char *temp = s;
  reverseWords(s);
  printf("%s", s);
  getchar();
  return 0;
}
