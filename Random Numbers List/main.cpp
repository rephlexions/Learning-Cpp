#include <iostream>
struct lista{
    int val;
    lista* next;
};
typedef lista* ptr_lista;

//creates a linked list containing random nubers
lista* create(int n){
    ptr_lista prev;
    ptr_lista curr=NULL;

    for(int i = n; i > 0; i--){
        prev = new lista;
        prev->val=rand()%n;
        prev->next=curr;
        curr = prev;
    }
    return curr;
}

//prints the elements in the list
void print(lista* p){
    while(p!=NULL){
        std::cout << p->val;
        p=p->next;
        if(p!=NULL){
            std::cout << " -> ";
        }
    }
    std::cout <<"\n" << "End of list." << std::endl;
}

//return the average value of all the elements
double media(lista* p){
    double m=0;
    int count=0;
    while(p!=NULL){
        m = m + p->val;
        p=p->next;
        count++;
    }
    return m/count;
}


int main(){
    ptr_lista p;
    p=create(10);
    std::cout << "Elements in the list: \n";
    print(p);
    std::cout  << "Average value of all elements: \n" << media(p);



    return 0;
}
