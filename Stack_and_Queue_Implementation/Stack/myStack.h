using namespace std;

class myStack {
private:
    int *stck, top, maxSize;

public:
    myStack(int sz = 5){
        maxSize = sz;
        stck = new int [sz];
        top = 0;
    }

    ~myStack(){
        delete [] stck;
    }

    bool isEmpty(){
        return (top==0);
    }

    bool isFull(){
        return (top==maxSize);
    }

    bool push(int element){
        if(isFull()){
            resiz();
        }

        stck[top++] = element;
        return true;
    }

    bool pop(){
        if(isEmpty()){
            cout<<"Stack Empty!\n";
            return false;
        }

        top--;
        return true;
    }

    int topElement(){
        return stck[top-1];
    }

    void resiz(int sz = 5){
        int *tempStk = new int [maxSize + sz];
        for(int i=0; i<maxSize; i++){
            tempStk[i] = stck[i];
        }
        maxSize = maxSize + sz;
        delete stck;
        stck = tempStk;
    }

    void show(){
        if(isEmpty()){
            cout<<"Stack is empty!\n";
            return;
        }

        for(int i=top-1; i>=0; i--){
            cout<<stck[i]<<" ";
        }
        cout<<endl;
    }
};
