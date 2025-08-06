#include<iostream>
using namespace std;

int main(){
    int arr[2][2];
    cout << "Enter elements of a 2x2 matrix(row-wise):" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>> arr[i][j];
        }
        cout<<endl;
    }
    cout << "The matrix is:" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


/*OUTPUT
Enter elements of a 2x2 matrix(row-wise):
1 2

3 4

The matrix is:
1 2
3 4

*/
