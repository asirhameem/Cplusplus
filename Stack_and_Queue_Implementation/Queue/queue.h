/* Circular queue implementation */

using namespace std;

class myQue{

private:
    int frnt, rear, MaxSize, que[5];

public:
    myQue(int sz = 5){
        frnt = -1;
        rear = -1;
        MaxSize = sz;
    }

    bool isEmpty(){
        return (frnt==-1) && (rear==-1);
    }

    bool isFull(){
        //return (rear == (MaxSize-1));
        return (((rear+1)%MaxSize) == frnt);
    }

    bool enqueue(int x){
        if(isFull()){
            cout<<"Can't add elements... Queue Already Full\n";
            return false;
        }

        if(isEmpty()){
            frnt=rear=0;
        }
        else{
            //rear++;
            rear = (rear + 1)%MaxSize;
        }
        que[rear]=x;
        return true;
    }

    bool dequeue(){
        if(isEmpty()){
            cout<<"Can't Dequeue. Queue is empty\n";
            return false;
        }
        else if(frnt==rear){
            frnt=rear=-1;
            return true;
        }
        else{
            //frnt++;
            frnt = (frnt+1)%MaxSize;
            return true;
        }
    }

    char frontt(){
        return que[frnt];
    }

    void show(){
        int i;

        if(isEmpty()){
            cout<<"No element in the queue\n";
            return;
        }

        if(rear>=frnt)
        {
            for(i=frnt;i<=rear;i++)
            {
                cout<<que[i]<<" ";;
            }
        }
        else
        {
            for(i=frnt;i<MaxSize;i++)
            {
                cout<<que[i]<<" ";;
            }
            for(i=0;i<=rear;i++)
            {
                cout<<que[i]<<" ";;
            }
        }

        cout<<endl;
    }

};
