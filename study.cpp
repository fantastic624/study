#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  float m;
  int k,c,d;
  cin>>m>>k;
  m=m*100;
  int b=(int)m;
  c=b%10;
  d=(b/10)%10;
  if (k==0)
     cout<<b;
  else if (c>=5)
   {
      d++;
   printf("%.1f",(m+d)/100);
   }
   
  
 
  
   
   

   return 0;
}

/*int a,b,e,f;
   char z;
   int a=getchar()
   cin>>a;
   b=a/10;
   e=b%10;
   f=a/1000;
   f=f%10;
   z=f*10+e;
   cout<<z;



   float n;
   cin >> n;

   if ((95 * n) >= 300)
   {
      n = 0.85 * n;
      printf("%.2f", 95*n);
   }
   else
      printf("%.2f", 95*n);
      int a,b,c;
   cin>>a>>b>>c;
   if (a>b&&a>c)
     cout<<a*a;
   else 
   {
      if (b>c)
      cout<<b*b;
      else 
      cout<<c*c;
   }
   int a,b,c,max;
   cin>>a>>b>>c;
   max=a;
   if (b>max)
   max=b;
   if (c>max)
   max=c;
   cout<<max*max;
   char a,b;
   cin>>a>>b;
   if (a>b)
   cout<<a<<">"<<b;
   else if (a==b)
   cout<<a<<"="<<b;
   else
   cout<<a<<"<"<<b;
   int a;
   cin>>a;
   if (0<=a&&59>=a)
   cout<<"C";
   else if (a>60&&a<=89)
   cout<<"B";
   else
   cout<<"A";
   */
      