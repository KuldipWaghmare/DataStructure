#include<stdio.h>

int main() {
    int num=9,count=0,flag=0;  
    unsigned int a;
    ;
    unsigned int  check=1<<(sizeof(int)*8-1);
    while(check!=0){
        int res=num & check;
       // printf("%d\n",res);
        if(res==check){
            count++;
            a=res&1;
            
            flag=1;
        }
        else{
            if(flag==1){
                count++;
                a=res&1;
               
            }
            
        }
       // printf("%d\n",check);
        check=check>>1;
        a=a>>1;
         printf("%d\n",a);
    }
    printf("%d",a);
}



Language Version:  GCC 7.2.0