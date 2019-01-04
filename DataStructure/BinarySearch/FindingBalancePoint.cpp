#include <stdio.h>
#include <iostream>

/*
 * Date: 2019.01.03
 * Description: the problem can be found at https://www.swexpertacademy.com
 * The question number is 1245.
 * Keywords: Binary Search
 * What I Learned: binary search to efficiently do Full Navigation, Not to forget to initialize at the right place, right moment!
 * */

 
using namespace std;
 
int main(){
    int test=0;
    int nums =0;
    double pos[10];
    double mass[10];
    double forceL;
    double forceR;
    double diff;
    double left, right;
    double x, ans;
 
   
 
    cin>>test;
    for(int T=1;T<=test;T++){
        cin >> nums;
        for(int i=0;i<nums;i++){
            cin >> pos[i];    
        }
        for(int i=0;i<nums;i++){
            cin >> mass[i];       
        }
 
        cout<<"#"<<T<<" ";
 
        //for every two points in series
        for(int i=0;i<nums-1;++i){
            left = pos[i], right = pos[i+1], ans=0.0;
             
            for(int k=0;k<50;++k){   
                //calculate Fleft and Fright
                x = (right+left)/2; 
                forceL=0.0, forceR=0.0;
                for(int j=0;j<nums;j++){
                    if(pos[j]<x)
                        forceL += mass[j]/((x-pos[j])*(x-pos[j]));
                    else
                        forceR += mass[j]/((x-pos[j])*(x-pos[j]));
                }
 
                // binary search
                diff= forceL-forceR;
                if(diff>0){  //forceR>forceL
                    left = x;
                    // left continues
                }else{  //forceR<forceL
                    if(diff==0){
                        ans =x;
                        break;
                    }
                    ans=x;
                    right = x;
                }           
            }
            printf("%.10f ",ans);
        }
        cout<<endl;
    }
}
