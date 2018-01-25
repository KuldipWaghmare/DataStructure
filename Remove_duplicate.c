#include<stdio.h>

int main() {
    char str[100],res[100];
    scanf("%s",str);
    int i=0,j=0,count=0,flag;
    res[0]=str[0];
    while(str[i]!='\0'){
        j=count;
        while(j>=0){
           
                  if(str[i]!=res[j]){
                      flag=1;
                     
                  }else{
                    flag=0;
                      break;
            
              }
               j--;
            }
            
            if(flag==1){
                  count++;
                      res[count]=str[i];
            }
            i++;
        }
     i=0,j=0,count;
    while(res[i]!='\0'){
        count=0;
        j=0;
        while(str[j]!='\0'){
            
                if(res[i]==str[j]){
                    count++;
                
                    
            }
            j++;
        }
        printf("\n%c ",res[i]);
        printf("%d\n",count);
        i++;
    }
}

    
   



Language Version:  GCC 7.2.0