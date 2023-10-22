 #include<iostream>

using namespace std;
void upperHalf(int number);
void lowerHalf(int number);


int main(){
    int number;
    cout <<"Enter desired number of rows: ";
    cin>>number;
    upperHalf(number);
    lowerHalf(number);
}

void upperHalf(int number){
    for(int i=1; i<=number/2;i++){
        for(int j=1; j<=(number/2)-i;j++){
            cout<<" ";
        }
            for(int k=1;k<=i;k++){
                cout<<"*";

            }
             cout<<endl;
        }
       
    }
    

void lowerHalf(int number){
    for(int i=number/2; i>=1;i--){
        for(int j=(number/2)-i;j>=1;j-- ){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<"*";
        }
        cout<<endl;
    }

}