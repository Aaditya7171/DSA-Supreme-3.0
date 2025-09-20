class MyCircularQueue {
public:
    int * arr;
    int n, f, b;
    MyCircularQueue(int k) {
        this->n = k;
        arr = new int[n];
        f = -1;
        b = -1;
    }
    
    bool enQueue(int value) {
        if((f == 0 && b == n - 1) || (b == f - 1)){
            return false;
        }
        else if(f == -1 && b == -1){
            f++, b++;
            arr[f] = value;
        }
        else if(b == n - 1 && f != 0){
            b = 0;
            arr[b] = value;
        }
        else {
            b++;
            arr[b] = value;
        }
        return true;;
    }

    
    bool deQueue() {
        if(f == -1 &&  b == -1){
            return false;
        }
        else if(f == b){
            arr[f] = -1;
            f = -1;
            b = -1;
        }
        else if(f == n - 1){
            arr[f] = -1;
            f = 0;
        }
        else {
            arr[f] = -1;
            f++;
        }
        return true;
    }
    
    int Front() {
        if(f != -1){
            return arr[f];
        } 
        return -1;
    }
    
    int Rear() {
        if(b != -1){
            return arr[b];
        } 
        return -1;
    }
    
    bool isEmpty() {
       if(f != -1 && b != -1){
           return false;
       }  
        return true;
    }
    
    bool isFull() {
        return ((f == 0 && b == n - 1) || (b == f - 1));
    }
};
