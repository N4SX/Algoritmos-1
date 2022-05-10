#include<stdio.h>

main(){
    int a=0 ,b=1 ,c,i,n;
    scanf("%d",&n);

    for(i=1;i<=n-1;i++){
    	
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;

    }
    printf("%d\n",a);
    
    return 0;
}
