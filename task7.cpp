#include<iostream>


using namespace std;

void hospital(int days);

int main(){

int days;

cout<<"Enter number of days you visited Hospital: ";
cin>>days;
hospital(days);

}

void hospital(int days){
int dayNo=1,Patients,UntreatedPatients,treatedPatient;
int doctors=7,totalTreated=0,totalUntreated=0,totalTreated2days=0,totalUntreated2days=0;

for(int x=1;x<=days;x++)
{ 
cout<<"Number of patients who visited hospital on Day "<<dayNo<<": ";
     cin>>Patients;
     if(dayNo%3==0){

if(totalTreated2days<totalUntreated2days){

doctors++;
                               }
totalTreated2days=0;
totalUntreated2days=0;
              }
    if(Patients>doctors){

   UntreatedPatients=Patients-doctors;
   treatedPatient=doctors;
                        }
else if(Patients==doctors){
   treatedPatient=doctors;
   UntreatedPatients=0;
    }
    else if(Patients<doctors){
treatedPatient=Patients;
UntreatedPatients=0;
    }

totalTreated2days=totalTreated2days+treatedPatient;
totalUntreated2days=totalUntreated2days+UntreatedPatients;
totalTreated=totalTreated+treatedPatient;
totalUntreated=totalUntreated+UntreatedPatients;
cout<<totalUntreated;


dayNo++;



}
cout<<"Treated Patients: "<<totalTreated<<endl;
cout<<"Untreated Patients: "<<totalUntreated;


                       }
