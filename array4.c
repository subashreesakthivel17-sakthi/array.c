#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int stop[n];
    for(int i=0;i<n;i++){
        scanf("%d",&stop[i]);
    }
    int i=0,j=n-1,temp;
    while(i<j){
        temp=stop[i];
        stop[i]=stop[j];
        stop[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d",stop[i]);
    }
    return 0;
}