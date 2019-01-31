#include<iostream> 
using namespace std; 
int main() 
{ 
    int nop,nof,page[20],i,count=0; 
    cout<<"\nEnter the No. of Pages:"; 
    cin>>nop;          
    cout<<"\n Enter the Reference String:"; 
    for(i=0;i<nop;i++) 
    { 
        cout<<"\t"; cin>>page[i];  
    } 
    cout<<"\n Enter the No of frames:-"; 
    cin>>nof; 
    int frame[nof],fcount[nof]; 
    for(i=0;i<nof;i++) 
    { 
        frame[i]=-1;  
        fcount[i]=0;   
    } 
    i=0; 
    while(i<nop) 
    { 
        int j=0,flag=0; 
        while(j<nof) 
        { 
            if(page[i]==frame[j])
            {  
                flag=1;
            } 
            j++; 
        }    
        j=0;   
        cout<<"\n"; 
        cout<<"\t"<<page[i]<<"-->";    
        if(flag==0) 
        { 
            if(i>=nof) 
            { 
                int max=0,k=0; 
                while(k<nof) 
                { 
                    int dist=0,j1=i+1; 
                    while(j1<nop) 
                    { 
                        if(frame[k]!=page[j1])  
                        dist++; 
                        else 
                        { break; } 
                        j1++; 
                    } 
                    fcount[k]=dist; 
                    k++;   
                }            
                k=0; 
                while(k<nof-1) 
                { 
                    if(fcount[max]<fcount[k+1]) 
                    max=k+1; 
                    k++;
                } 
                frame[max]=page[i];   
            } 
            else { frame[i%nof]=page[i]; } 
            count++;  
            while(j<nof) 
            { 
                cout<<"\t|"<<frame[j]<<"|"; j++; } } 
                i++;  
            } 
            cout<<"\n"; 
            cout<<"\n\tPage Fault is:"<<count<<"\n";  
            return 0; 
}