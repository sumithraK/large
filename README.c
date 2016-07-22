#include<stdio.h>
void quick(int *a,int f,int l){
    int i,j,p,t;
    if(f<l)
    {
        i=f;
        p=f;
        j=l;
        while(i<j){
            while(a[i]>=a[p]&&i<l)
            i++;
            while(a[p]>a[j])
            j--;

            if(i<j)
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
            t=a[p];
                a[p]=a[j];
                a[j]=t;
                quick(a,f,j-1);
                quick(a,j+1,l);

    }
    return ;
}
int main(){
int n,i,t=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
for(i=0;i<n;i++){
  printf("%d",a[i]);
}
return 0;
}
