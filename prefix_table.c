//f is prefix table ....
int f[];

void prefix(char p[],int m)
{

int i=1,j=0,f[0]=0;
while(i<m)
{
if(p[i]==p[j])
{
  f[i]=j+1;
  i++;
  j++;
}
else if(j>0)
{
j=f[j-1];
}
else
{
   f[j]=0;
   i++;
}
}
}

