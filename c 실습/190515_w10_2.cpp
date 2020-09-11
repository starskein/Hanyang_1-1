#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int comp(int var1,int var2){
    if(var1>var2) return 1;
    if(var1<var2) return -1;
    if(var1==var2) return 0;
}

int main(){
    int n,x;
    srand(time(NULL));
    int ans=rand()%101;
    while(1){
        printf("Number=?\n");
        scanf("%d",&n);
        x=comp(n,ans);
        if(x==1) printf("Smaller than %d\n",n);
        else if(x==-1) printf("Larger than %d\n",n);
        else{
            printf("Yes. Right.\n");
            break;
        }
    }
    return 0;
}
