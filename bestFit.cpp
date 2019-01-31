#include <iostream> 
using namespace std; 
int main() 
{     
    int nBlocks,nProcess,blockSize[20],processSize[20];
    cout<<" Enter the number of blocks: ";     
    cin>>nBlocks;     
    cout<<" Enter the number of processes: ";     
    cin>>nProcess;     
    
    cout<<" Enter the size of "<<nBlocks<<" blocks: ";     
    for(int i=0;i<nBlocks;i++)      
    cin>>blockSize[i];     
    cout<<" Enter the size of "<<nProcess<<" processes: ";     
    for(int i=0;i<nProcess;i++)       
    cin>>processSize[i];     
    for(int i=0;i<nProcess;i++)     
    {        
         int min = 9999;         
         bool flag = false;         
         int pos=0;         
         for(int j=0;j<nBlocks;j++) 
         {            
             if(min > blockSize[j] && processSize[i]<=blockSize[j])             
             {                 
                 min = blockSize[j];                 
                 flag = true;                 
                 pos = j;             
             }         
         }         
         if(flag)         
         {             
             blockSize[pos] = blockSize[pos] - processSize[i];             
             cout<<"\n\n Process "<<i+1<<" is allocated to Block "<<pos+1;         
         }         
         else         
         {             
             cout<<"\n\n Process "<<i+1<<" cannot be allocated";         
         }         
         cout<<"\n Remaining Block size\n";         
         for(int j=0;j<nBlocks;j++)         
         cout<<" "<<blockSize[j];     
    }    
return 0;
} 
