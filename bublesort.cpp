#include <iostream>
#include <string>
using namespace std;

int arr[5];  // Deklarasi variable global array dengan panjang 20 dan arr
int n;  // Deklarasi variable global n untuk menyimpan elemen pada array

void input(){  // Prosedur input
    int d; 
    while (true){
        cout << "Masukan banyaknya elemen pada array ";
        cin >> n;
        if (n <= 5){
            break;
        }
        else {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukan element array" << endl;
    cout << "=====================" << endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-" << (i+1) << "=";
        cin >> arr[i];
    }
}

void bubbleSortArray(){
    int pass = 1;  //step 1
    do {
        for (int j=0;j<=n-1-pass;j++){ // step 2
            if (arr[j] > arr[j+1]) {    // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1; // step 4
    }while(pass <= n-1); // step 5
}





int main(){
    input();
    bubbleSortArray();
    display();
}
