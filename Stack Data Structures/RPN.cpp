#include<iostream>
#include<string>
#define MAX 400
using namespace std;
int top=-1;
char s[MAX];
char push(char ch){
    if(top==MAX-1){
        return(-1);
    }
    else{
        top++;
        s[top]=ch;
    }

}
char pop(){
    if(top==-1){
        return(-1);
    }
    else{

        char ch=s[top];
        s[top]='\0';
        top--;
        return ch;
    }


}
int priority(char alpha){
    if(alpha=='+'||alpha=='-')
        return (1);
    if(alpha=='*'||alpha=='/')
        return (2);
         if(alpha=='^'||alpha=='$')
        return (3);

}


string evaluate(string infix){
    int i=0;
    string postfix="";
    while(infix[i]!='\0'){
            if(infix[i]>='a'&&infix[i]<='z'||infix[i]>='A'&&infix[i]<='Z'){
              postfix.insert(postfix.end(),infix[i]);
              i++;
            }
            else if(infix[i]=='('||infix[i]=='['||infix[i]=='{'){
                        push(infix[i]);

                    }
            else if(infix[i]==')'||infix[i]==']'||infix[i]=='}'){
                if(infix[i]==')'){
                 while(s[top]=='('){
                    postfix.insert(postfix.end(),pop());
                   }
                   pop();
                   i++;
                   }
                   if(infix[i]=='}'){
                 while(s[top]=='{'){
                    postfix.insert(postfix.end(),pop());
                   }
                   pop();
                   i++;
                   }if(infix[i]==']'){
                 while(s[top]=='['){
                    postfix.insert(postfix.end(),pop());
                   }
                   pop();
                   i++;
                   }
            }
            else{
                if(top==-1){
                    push(infix[i]);
                    i++;
                }

            else if(priority(infix[i])<=priority(s[i])){
                postfix.insert(postfix.end(),pop());
                while(priority(s[top])==priority(infix[i])){
                    postfix.insert(postfix.end(),pop());
                    if(top<0){
                        break;
                    }
                }
                    push(infix[i]);
    i++;
            }
            else if(priority(infix[i])>priority(s[top])){
                push(infix[i]);
                i++;
            }


    }
                }
    while(top!=-1){
        postfix.insert(postfix.end(),pop());
    }
    cout<<postfix<<endl;
    return postfix;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    string infix,postfix;
    cin>>infix;
    postfix=evaluate(infix);
    }
    return 0;
}

