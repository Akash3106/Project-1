#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    long n,p,k;
    long long x,el;
    
    //a1
    cin>>t;
    for(int i=0;i<t;i++){
        vector<long long > arr;
        vector<long long>::iterator it;
        int count1=0;
        long long kval;
        cin>>n>>x>>p>>k;
        for(int j=0; j<n;j++){
            cin>>el;
            arr.push_back(el);
        }




        sort(arr.begin(),arr.end());
        //a2


        else{

            //a3
            
                else
                if((x<arr[p-1] && p<=k )|| (x>arr[p-1] && p>=k)){
                    long long c=count(arr.begin(), arr.end(), x);
                    it =find (arr.begin(), arr.end(), x);
                    if(c==1){
                        // cout<<":6";
                        count1=abs(it-arr.begin()-(p-1))+1;
                    }
                    else{
                        if(kval>x){
                           if(it-arr.begin()<p){
                            // cout<<":7";
                            count1=abs(abs(it-arr.begin()-(p-1))-(c-1))+1;
                        }
                        else{
                            // cout<<":8";
                            count1=abs(it-arr.begin()-(p-1));
                        } 
                        }
                        else
                        if(kval<x){
                            if(it-arr.begin()<p){
                            // cout<<":7";
                            count1=abs(abs(it-arr.begin()-(p-1))-(c-1))-1;
                        }
                        else{
                            // cout<<":8";
                            count1=abs(it-arr.begin()-(p-1))+1;
                        }
                        }
                        else{
                            if(it-arr.begin()<p){
                            // cout<<":7";
                            count1=abs(abs(it-arr.begin()-(p-1))-(c-1));
                        }
                        else{
                            // cout<<":8";
                            count1=abs(it-arr.begin()-(p-1));
                        }
                        }
                        
                        
                    }
                   //a4

            }
       
    }
    }
    return 0;
}
