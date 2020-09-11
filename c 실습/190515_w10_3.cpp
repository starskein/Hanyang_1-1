#include <stdio.h>

void printfLine(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    printfLine(n);
    return 0;
}
