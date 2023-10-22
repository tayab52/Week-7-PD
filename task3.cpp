 #include<iostream>

using namespace std;
void amplify(int number);

int main(){
    int number;
    cout<<"Enter the number to amplify: ";
    cin>>number;
    amplify( number);
   
}
void amplify(int number){
for(int num=1;num<=number; num++){
    if(num%4==0){
        cout<<num*10<<", ";
    }
    else{
   cout<<num<<", ";
    }
    
}

}