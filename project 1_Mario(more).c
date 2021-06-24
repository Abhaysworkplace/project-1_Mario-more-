#include<stdio.h>
int main(){
    int a;
    char s='#';
    label:
    printf("Height:");
    scanf("%d",&a);
    int x=a;
    if(a>0 && a<9){
    for(int i=1;i<=a;i++){
        for(int h=x-1;h>0;h--){
                printf(" ");
        }
        x--;
        for(int j=0;j<i;j++){
            printf("%c",s);
        }
        printf("  ");
        for(int j=0;j<i;j++){
            printf("%c",s);
        }
        printf("\n");
    }
    }else{
        printf("The number should be between 1(inclusive) and 8(inclusive)\n");
        goto label;
    }
    return 0;
}