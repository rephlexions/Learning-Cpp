#include <iostream>

int binary_search(int v, const int a[], int min_index, int max_index);

int main(){
    int array[]={0,10,20,30,40,50,60,70,80,90,100};
    std::cout << binary_search(20,array,0,11);
    return 0;
}
int binary_search(int v, const int a[], int min_index, int max_index){
    if(min_index > max_index)
        return (-1);
    else{
        int mid = (min_index + max_index) /2;
        if(a[mid] == v)
            return (mid);
        else if(a[mid] > v)
            return binary_search(v,a,min_index,mid - 1);
        else return binary_search(v,a,mid + 1, max_index);
    }
}