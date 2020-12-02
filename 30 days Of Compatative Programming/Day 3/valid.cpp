#include<stdio.h>
#include <string.h>
bool validation(char c[],int len){
    int i;
    for(i=0;i<len;i++){
        if(c[i]!='a'||c[i]!='b'){
            return false;
    }
            return true;

    }

}
int main(){
char s[100];
int i;
printf("Enter The String :");
scanf("%s",&s);
i= strlen(s);
if(validation(s,i)){
if(s[0]=='a'&& s[i-1]=='a'){
        printf(" Valid String and Accepted");


}else{
printf("Valid String but Not Accepted");
}

}else{
            printf("The Enter String Contains the Wrong value Plese enter a valid string");


}
}
