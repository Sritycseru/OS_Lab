#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout <<"Enter the number of process : ";
    cin >> n;
    int a[n],waiting_time[n],sum=0;
    float avg;
    for(i=0;i<n;i++){
        cout <<"Enter the burst time for process "<<i+1<<": ";
        cin >> a[i];
        if(i==0)
            waiting_time[i] = 0;
        else {
            waiting_time[i] = waiting_time[i-1]+a[i-1];
            sum+=waiting_time[i];
        }
    }
    cout << endl << endl;
    for(i=0;i<n;i++){
        cout <<"Waiting time for process "<<i+1<<" is : "<<waiting_time[i]<<endl;
    }
    avg = sum*1.0/n;
    cout << "\n\navarage wating time is : " << avg <<endl;
}
