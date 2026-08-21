#include <iostream>
using namespace std;

void select(float arr[], int n){
    
    cout << "You are using a selection sort \n";
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j= i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
        for(int i =0;i<n;i++){
            cout << arr[i] << " ";
        }
         cout << endl;    
    }
     cout << "top 3 in class : " ;

        for(int i=n-1;i>=n-3;--i){
            cout << arr[i] << " ";
         } 

         cout << endl;
}



void bubble(float arr[],int n){
    cout << "You are using a bubble sort \n";
    for(int i = 0; i<n-1; i++){
        for(int j= 0; j<n-1-i;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
       
        for(int i =0;i<n;i++){
            cout << arr[i] << " ";
        }
         cout << endl;
    }
   cout << "top 3 in class : " ;

        for(int i=n-1;i>=n-3;--i){
            cout << arr[i] << " ";
         } 

         cout << endl;
   
}

int main(){
    char choice;
     do
    {
    cout << "Number of student " ;
    
    int n ;
    cin >> n;
    cout << "Enter a student`s percentage :" ;
    float arr[n] = {};
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    cout << "which sorting algorithm do you want to(Bubble:1,Selection:2)" ;
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        bubble(arr,n);
        break;
    case 2:
        select(arr,n);
        break;
    default:
        cout << "Invaild a input";
    }
    cout << "Do you want to sort again with new roll numbers(yes,no) " ;
    cin >> choice;
      } while (choice == 'Y' || choice == 'y');
    return 0;
}
