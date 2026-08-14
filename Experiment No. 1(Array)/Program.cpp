#include <iostream>
#include <algorithm>
using namespace std;

void linear(int arr[],int size){
      cout << "You using Linear search \n";
     char ch ;
     
    do{
         int count = 0;
    
     int target;
         cout << "key ";
        cin >> target ;    
      for(int i = 0 ;i<size;i++){  
        if(arr[i] == target){
            count++;
            cout << "Student is present \n";
            break;
        }
       
        
            }
     
    if(count == 0){
        cout << "student is absent\n"; 
      
    }
     
   cout << "Do you want to search again in linear search? (Y/N) : ";
   cin >> ch;
    
}while(ch =='Y'|| ch == 'y');
}





void binary(int arr[],int size){
    cout << "You using Binary search \n";
    sort(arr, arr + size);
    cout << "Sorted Array" << endl;
     char ch ;
     
    do{
         int count = 0;
     int st=0; int end=size-1;
     int target;
         cout << "key ";
        cin >> target ;    
      while(st<=end){  
       
         int mid=(st+end)/2;
        if(arr[mid]>target){
            end= mid-1;         
        } 
        else if(arr[mid]<target){
            st=mid+1;         
        }
        else{
            
            count++;
             cout << "student is present\n"; 
            break;
            }
     }
    if(count == 0){
        cout << "student is absent\n"; 
      
    }
     
   cout << "Do you want to search again in binary search? (Y/N): ";
   cin >> ch;
    
}while(ch =='Y'|| ch == 'y');
   
}

int main(){
    cout << " how many student is: ";
    int size;
    
    cin >> size;
    cout << "enter a student roll no. : " ;
    int  arr[size] = {};
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }

    
    char a;
    cout << "finding student by which search (B/L) : ";
    cin >> a;
    switch(a) {
          case 'B':
          case 'b':
        
        binary(arr,size);
        break;

        
        case 'L':
        case 'l':
        linear(arr,size);
        break;

        default:
        cout << "your not fault ";
    }

    
    return 0;
}
