class MyCircularDeque {
public:
    int * arr;
    int n, f, b;
    MyCircularDeque(int k) {
        this->n = k;
        arr = new int[n];
        f = -1;
        b = -1;
    }
    
    bool insertFront(int value) {
        if((f == 0 && b == n - 1)|| (b == f - 1)){
            return false;
        }
        else if(f == -1 && b == -1){
            f++;
            b++;
            arr[f] = value;
        }
        else if(f == 0 && b != n - 1){
            f = n - 1;
            arr[f] = value;
        }
        else{
            f--;
            arr[f] = value;
        }
        return true;
    }
    
    bool insertLast(int value) {
        if((f == 0 && b == n - 1) || (b == f - 1)){
            return false;
        }
        else if(f == -1 && b == -1){
            f++, b++;
            arr[b] = value;
        }
        else if(b == n - 1 && f != 0){
            b = 0;
            arr[b] = value;
        }
        else {
            b++;
            arr[b] = value;
        }
        return true;
    }
    
    bool deleteFront() {
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
    
    bool deleteLast() {
        if(f == -1 && b == -1){
            return false;
        }
        else if(f == b){
            arr[b] = -1;
            f = -1;
            b = -1;
        }
        else if(b == 0){
            arr[b] = -1;
            b = n - 1;
        }
        else {
            arr[b] = -1;
            b--;
        } 
        return true;   
    }
    
    int getFront() {
        if(f == -1){
            return -1;
        }
        return arr[f];
    }
    
    int getRear() {
        if(b == -1){
            return -1;
        } 
        return arr[b];
    }
    
    bool isEmpty() {
        if(f == -1 && b == -1){
            return true;
        } 
        return false;
    }
    
    bool isFull() {
        return ((f == 0 && b == n - 1) || (b == f - 1));
    }
};
