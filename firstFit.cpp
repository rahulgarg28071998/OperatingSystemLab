#include<iostream> 
using namespace std; 
int main()
{ 
    int num_blocks,num_files,blocks[10],files[10],fragment[10],filesAl[10];  
    int i=0,j=0; 
    for(i=0;i<10;i++)  
    {  
        fragment[i]=1;  
        filesAl[i]=0;  
    } 
    cout<<"\nEnter the No. of Blocks: ";
    cin>>num_blocks; 
    cout<<"\nEnter the No. of Files: ";
    cin>>num_files; 
    cout<<"\nEnter the sizes of blocks "; 
    for(i=0;i<num_blocks;i++) 
    { 
        cout<<"\nBlock["<<i+1<<"]: ";  
        cin>>blocks[i]; 
    } 
    cout<<"\nEnter the sizes of files "; 
    for(i=0;i<num_files;i++) 
    { cout<<"\nFile["<<i+1<<"]: ";  cin>>files[i]; } 
    for(i=0;i<num_files;i++) 
    { for(j=0;j<num_blocks;j++)  
        { if(files[i]<=blocks[j])   
            {    blocks[j]=blocks[j]-files[i];    
            if(blocks[j]!=0)    
            {      fragment[j]++;    }    
            filesAl[i]=1;    
            break;   
            } 
        } 
    }
    cout<<"\nBLOCKS\tREMAIN\tFRAGMENTS"; 
    for(i=0;i<num_blocks;i++) 
    cout<<endl<<i+1<<"\t"<<blocks[i]<<"\t"<<fragment[i]; 
    cout<<"\n\nFiles which are not allcoated memory \n"; 
    for(i=0;i<num_files;i++) 
    { 
        if(filesAl[i]==0) 
        { cout<<"\nFile "<<i+1; } 
    } 
return 0; 
} 
