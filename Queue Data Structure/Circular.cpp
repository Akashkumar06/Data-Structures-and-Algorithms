#include<iostream>
#define MAX 5
using namespace std;
class CircularQueue{
private:
    int front;
    int a[MAX];
    int rear;
public:
    CircularQueue(){
    front=-1;
    rear=-1;
    for(int i=0;i<4;i++)
        a[i]=0;

    }
 bool IsEmpty(){
        if(front==-1&&rear==-1)
                return true;
        else
            return false;


    }


       bool IsFull(){
        if((rear+1)%MAX==front)
            return true;
       else

        return false;

    }
void enqueue(){
        int val;


if(IsFull()){
        cout<<"Cannot Enter the values: The Queue Is Empty"<<endl;

}



          else if(front==-1&& rear==-1){
            cout<<"Enter the item You want to enqueue via empty"<<endl;
            cin>>val;

            front=0;
            rear=0;


            a[rear]=val;

          }
        else{
                cout<<rear;
        cout<<front;
             cout<<"Enter the item You want to enqueue else part"<<endl;
             cin>>val;
             rear=(rear+1)% MAX;
                a[rear]=val;

        }

    }
            int dequeue(){
                int val=0;
                if(IsEmpty()){
                        cout<<"Item Cannot delete due to queue under loading"<<endl;
                        return 0;

                }



                else if(front==rear){
                    val=a[front];
                    a[front]=0;
                    front=-1;
                    rear=-1;
                    return val;
                }
                else{
                    val=a[front];
                    a[front]=0;
                    front=(front +1)%MAX;
                    return val;
                }
            }
            void display(){

                cout<<"The Items Present In Queue Are: "<<endl;
                for(int i=front;i!=rear;i=(i+1)%MAX){
                    cout<<"["<<i<<"]"<<a[i]<<" "<<endl;
                }


            }









};
int main(){
CircularQueue qc;
int ch;
int val;
do{
    cout<<"-----Enter The Appropriate Operation Of Queue You Want To Perform(Select Any One and 0 for Exit) ------"<<endl;
    cout<<"1.Enqueue()"<<endl;
    cout<<"2.Dequeue()"<<endl;
    cout<<"3.IsEmpty()"<<endl;
    cout<<"4.IsFull()"<<endl;
    cout<<"5.Display()"<<endl;
    cout<<"6.Clear Screen()"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
                qc.enqueue();
                break;
        case 2: qc.dequeue();
        break;
        case 3: if(qc.IsEmpty())
                       cout<<"Queue is totally Empty"<<endl;
                else
                       cout<<"Queue is Not Empty"<<endl;
                break;
        case 4: if(qc.IsFull())
                       cout<<"Queue is full"<<endl;
                else
                       cout<<"Queue is Not Full"<<endl;
                       break;
        case 5 : qc.display();
                        break;
        case 6 : system("CLR");
        break;
        default :
            cout<<"Please Enter an Valid Operation From the GIven menue"<<endl;


    }

}while(ch!=0);


return 0;
}
