#include<stdio.h>
int func(int n, int a[]){
    int size=n;
    while(size>1){
    int j=0;
    for(int i=0;i<n;i=i+2){
        if(a[i]<a[i+1] || a[i]==a[i+1])
            a[j]=a[i];
        else
            a[j] = a[i + 1];

            j++;
    }
    size/=2;
}
printf("Minimum element is: %d\n", a[0]);
}
int main(){
    int n;
    printf("How many numbers you want to store : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element you want to store : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Your entered elements are : ");
    for(int i=0;i<n;i++){
        printf("%d, ",a[i]);
    }
    func(n,a);
}