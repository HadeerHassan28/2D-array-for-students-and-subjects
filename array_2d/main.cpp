#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

#define STD 4//Student, test with 2
#define SUB 5 //subject, test with 3

using namespace std;
//2D array:

int main()
{
    float marks[STD][SUB];
    float total[STD]={0},sum=0,ave=0,m=0;
    int i,j,maxIndex=0;


    //fill student data:
    for(i=0;i<STD;i++)
    {
        for(j=0;j<SUB;j++)
        {
            //cout <<"please enter mark" << endl;
            cin >> marks[i][j];
            total[i]+= marks[i][j];
        }
    }
    //print total:
    for(i=0;i<STD;i++){
        cout <<"total of student " << i+1<<" is " <<total[i] <<endl;
    }
    // cal ave of sub for students and print it
    for(j=0;j<SUB;j++) //loop for subjects
    {
        for(i=0;i<STD;i++)  //loops for students
        {
            sum += marks[i][j];
        }
            ave = sum /i;
        cout <<"ave is" << ave <<endl;
    }
    //to get the max:
    for(i=0;i<STD;i++)
    {
        m= total [0];
        // if(total[i] > m)
        //{
           // m = total [i];
           // maxIndex=i;

      //}
      m= (m>total[i]) ? m : total[i];
      maxIndex = ( m> total [i]) ? maxIndex : i;
      }
      cout <<" the max student is " << maxIndex +1 << endl;


    return 0;
}
