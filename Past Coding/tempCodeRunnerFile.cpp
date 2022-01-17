#include<bits/stdc++.h>
using namespace std;
int n;
int findmax(int a[]){
    int max,i,k=0;
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            k=i;
        }
    }
    return k;
}
int main(){
    int seq[30],fr[5],pos[5],find,flag,max,i,j,m,k,t,s;
    int count=1,pf=0,p=0;
    float pfr;
    cout<<"\nEnter maximum limit of the sequence: ";
    cin>>max;
    cout<<"\nEnter the sequence: ";
    for(i=0;i<max;i++){
        cin>>seq[i];
    }
    cout<<"\nEnter no. of frames: ";
    cin>>n;
    cout<<"\n";
    fr[0]=seq[0];
    pf++;
    cout<<fr[0]<<"\t";
    i=1;
    while(count<n){
        flag=1;
        p++;
        for(j=0;j<i;j++){
            if(seq[i]==seq[j]){
                flag=0;
            }
        }
 
        if(flag!=0){
            fr[count]=seq[i];
            cout<<fr[count]<<"\t";
            count++;
            pf++;
        }
        i++;
    }
    cout<<"\n";
    for(i=p;i<max;i++){
        flag=1;
        for(j=0;j<n;j++){
            if(seq[i]==fr[j]){
                flag=0;
            }
        }
        if(flag!=0){
            for(j=0;j<n;j++){
                m=fr[j];
                for(k=i;k<max;k++){
                    if(seq[k]==m){
                        pos[j]=k;
                        break;
                    }
                    else{
                        pos[j]=1;
                    }
                }
            }
            for(k=0;k<n;k++){
                if(pos[k]==1){
                    flag=0;
                }
            }
            if(flag!=0){
                s=findmax(pos);
            }
            if(flag==0)
            {
                for(k=0;k<n;k++)
                {
                    if(pos[k]==1)
                    {
                        s=k;
                        break;
                    }
                }
            }
            fr[s]=seq[i];
            for(k=0;k<n;k++){
                cout<<fr[k]<<"\t";
            }
            pf++;
            cout<<"\n";
        }
    }
    pfr=(float)pf/(float)max;
    cout<<"\nThe no. of page faults are :"<<pf<<endl;
    cout<<"\nPage fault rate : "<<pfr<<endl; 
    return 0;
}
