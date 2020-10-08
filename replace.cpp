#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    long n,p,k;
    long long x,el;
    
    //a1



        sort(arr.begin(),arr.end());
        //a2
            if(n==1){
            if(arr[0]==x){
                // cout<<":";
                cout<<"0\n";
            }
            else{
                // cout<<":2:";
                cout<<"1\n";
            }
        }


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
