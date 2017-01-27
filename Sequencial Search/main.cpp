#include <iostream>

using namespace std;

/*
 * scrivere una funzione che prende in input un array di interi a e un
intero n e ritorna true o false a seconda che n si trova in a
oppure no. Edit: Ho modificato un po' il programa, migliorandola

 */
const int max_size = 10;

int fill_array(int arr[], int size, int& number_used);

int search(const int arr[], int number_used, int target);


int main() {
    int array[max_size], list_size, target;

    fill_array(array, max_size, list_size);

    int result;
    cout << " Enter a number to search for: \n";
    cin >> target;
    result = search(array, list_size, target);
    if( result == -1){
        cout << target << " " << "is not on the list :(" << endl;
    } else cout << target << " " << "is at index" << " " << result;

    return 0;
}
int search(const int arr[], int number_used, int target) {
    int index = 0;
    bool found = false;
    while((!found) && (index < number_used)){
        if(target == arr[index]){
            found = true;
        } else index++;
    }
    if (found){
        return index;
    }
    else return -1;
}

int fill_array(int arr[], int size, int& number_used){
    int n, index = 0;
    cout << "Enter a list of numbers. -1 to end list" << "\n" << "Max numbers: " << max_size << "\n";
    cin >> n;
    while((n >= 0) && (index < size)){
        arr[index] = n;
        index++;
        cin >> n;
    }
    number_used = index;
    return 0;
}
