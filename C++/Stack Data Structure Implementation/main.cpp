#include <iostream>
using namespace std;

constexpr int maxsize = 10;
//variabile n tiene traccia del numero di elementi presenti nell'array

bool empty(int n);

int push(int a[], int &n, int val);

int pop(int a[], int &n);

void stampa(int a[]);


int main(){
    int n = 0;
    int array[maxsize];
    int op;
    do{
        cout << "1. Push" << endl << "2. Pop" << endl << "3. Pila vuota" << endl
                                                                         << "4. Stampa" << endl << "Inserisci num operazione: \n";
        cin >> op;
        if(op == 1){
            int val;
            cout << "Inserisci elemento da inserire: \n";
            cin >> val;
            push(array, n, val);
        }
        else if (op == 2){
            cout << "L'ultimo elemento e' stato eliminato." << endl;
            pop(array,n);
        }
        else if(op == 3){
            if(empty(n)){
                cout << "Pila vuota" << endl;
            } else cout << "Pila non vuota" << endl;
        }
        else if ( op == 4){
            stampa(array);
        }
    }while(op >=0 && op<=4);

    return 0;
}
bool empty(int n){
    if(n == 0){
        return true;
    }
    else{
        return false;
    }

}

int push(int a[], int &n, int val){
    if(n != maxsize){
        a[n] = val;
        n++;
    } else
        cout << "Overflow \n" << endl;
}
int pop(int a[], int &n){
    if(empty(n)){
        cout << "Pila e' gia' vuota" << endl;
    } else{
        a[n-1] = 0;
        n--;
    }
}
void stampa(int a[]){
    for(int i = 0; i < maxsize; i++){
        cout << a[i] << " ";
    }
}