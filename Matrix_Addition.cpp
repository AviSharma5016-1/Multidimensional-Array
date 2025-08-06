#include<iostream>
using namespace std;

int main(){
    int arr1[2][2];
    cout << "Enter elements of a 2x2 matrix(row-wise):" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>> arr1[i][j];
        }
        cout<<endl;
    }
    cout << "The 1st matrix is:" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
     int arr2[2][2];
    cout << "Enter elements of a 2x2 matrix(row-wise):" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>> arr2[i][j];
        }
        cout<<endl;
    }
    cout << "The 2nd matrix is:" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
        cout<< endl;
    int sum[2][2];
    
    for(int i=0; i<2;i++){
        for(int j=0; j<2;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "The sum of the two matrices is:" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << sum[i][j] << " ";
       }
    cout << endl;
    }
    
    
    return 0;
}


/*OUTPUT
Enter elements of a 2x2 matrix(row-wise):
1 2

3 4

The 1st matrix is:
1 2
3 4
Enter elements of a 2x2 matrix(row-wise):
5 6

7 8

The 2nd matrix is:
5 6
7 8

The sum of the two matrices is:
6 8 
10 12

*/

