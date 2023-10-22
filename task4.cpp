 #include<iostream>

using namespace std;
int triangle(int number);

int main(){

    int number;
    cout<<"Enter number of triangle: ";
    cin>>number;
    int total=triangle(number);
    cout<<"Dots in the Triangle: "<<total;
}
int triangle(int number){
    int totalDots;
    totalDots=number;
    int num=number;
    for (int x=1; x<number;x++){
        
    totalDots=totalDots+(num-1);
    num=num-1;
    
   
}
return totalDots;
}