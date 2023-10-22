#include<iostream>
#include<iomanip>

using namespace std;
void cargoTransport(int cargo);

int main(){
    int cargo;
    cout<<"Enter the count of cargo for transportation: ";
    cin >>cargo;
    cargoTransport(cargo);
}

void cargoTransport(int cargo){
    float tons,busTons=0,truckTons=0,trainTons=0,totalTons=0;
    float busPercent,truckPercent,trainPercent,Average;
     int cargoNo=1;
    for(int x=1; x<=cargo;x++){
   
    cout<<"Enter the tonnage of cargo "<<cargoNo<<": ";
    cin>>tons;
    cargoNo+=1;
    if(tons<=3 && tons>0){
        busTons=busTons+tons;
    }
    else if(tons>3 && tons<=11){
        truckTons=truckTons+tons;
    }
    else if(tons>11){
        trainTons=trainTons+tons;
    }
  
    
                               }
   
totalTons=busTons+truckTons+trainTons;
    busPercent=(busTons/totalTons)*100;
    trainPercent=(trainTons/totalTons)*100;
    truckPercent=(truckTons/totalTons)*100;
    Average=(((busTons*200)+(truckTons*175)+(trainTons*120))/totalTons);
cout << fixed;
cout << setprecision(2);

cout<<Average<<endl;
cout<<busPercent<<"%"<<endl;
cout<<truckPercent<<"%"<<endl;
cout<<trainPercent<<"%"<<endl;
}