int kmp(char t[],int n,char p[],int m)
{
int j=0,i=0;
prefix(p,m);
while(i<n)
{
    if(t[i]==p[i])
     { 
        if(j==m-1)
         {
            //starting point of pattern in  string 
            return i-j;
         }
         else
         {
         i++;j++;
         }
     }
     else if(j>0)
     {
         j=f[j-1];
      }
      else
      {
      i++;
      }
 }
 return -1;
 
}
    
