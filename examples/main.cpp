#include<iostream>
#include<fstream>
#include <sstream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include "header.hpp"
using namespace std;

ifstream dict("new-dict.txt");
//ifstream dict2(path_dict);

ifstream dict0(path_dict);  


 
void funct()
{
    string st0,s10,word0; 
    char a0[5];
    int k0=0,T0=0;
    vector<int> v0,v10;
    
    ifstream in0(path_file);
    getline(in0,st0);
 
    
    for ( int i=0; i < 26; i++)
    {
      v0.push_back(0);
        
        for (int j = 0; j < st0.length(); j++)
        {
            if (int(st0[j])==97+i)
            {
                v0[i]++;
            }
            
           
        }
        
    }
    
    int max0=*max_element(v0.begin(),v0.end());
    
    for(int i=0;i<=max0;i++)
    {   
        v10.push_back(st0[i]);
        for(int j=0;j<26;j++)
        {if(max0-i==v0[j])
        {a0[k0]=char(j+97);
        k0++;}
        }
        if(k0>4)
        break;
    }

 ofstream out0("new-dict.txt");


    dict0>>word0;
     while(!dict0.eof())
    {
        
        if(word0.length()==6)
    {
        {
            if(word0[0]+32==a0[0]&&word0[4]+32==a0[1]||word0[0]+32==a0[0]&&word0[4]+32==a0[2]||word0[0]+32==a0[0]&&word0[4]+32==a0[3]||word0[0]+32==a0[0]&&word0[4]+32==a0[4]||word0[0]+32==a0[0]&&word0[4]+32==a0[5]||word0[0]+32==a0[1]&&word0[4]+32==a0[2]||word0[0]+32==a0[1]&&word0[4]+32==a0[3]||word0[0]+32==a0[1]&&word0[4]+32==a0[4]||word0[0]+32==a0[1]&&word0[4]+32==a0[5]||word0[0]+32==a0[2]&&word0[4]+32==a0[3]||word0[0]+32==a0[2]&&word0[4]+32==a0[4]||word0[0]+32==a0[2]&&word0[4]+32==a0[5]||word0[0]+32==a0[3]&&word0[4]+32==a0[4]||word0[0]+32==a0[3]&&word0[4]+32==a0[5]||word0[0]+32==a0[4]&&word0[4]+32==a0[5]||word0[0]+32==a0[1]&&word0[4]+32==a0[0]||word0[0]+32==a0[2]&&word0[4]+32==a0[0]||word0[0]+32==a0[3]&&word0[4]+32==a0[0]||word0[0]+32==a0[4]&&word0[4]+32==a0[0]||word0[0]+32==a0[5]&&word0[4]+32==a0[0]||word0[0]+32==a0[2]&&word0[4]+32==a0[1]||word0[0]+32==a0[3]&&word0[4]+32==a0[1]||word0[0]+32==a0[4]&&word0[4]+32==a0[1]||word0[0]+32==a0[5]&&word0[4]+32==a0[1]||word0[0]+32==a0[3]&&word0[4]+32==a0[2]||word0[0]+32==a0[4]&&word0[4]+32==a0[2]||word0[0]+32==a0[5]&&word0[4]+32==a0[2]||word0[0]+32==a0[4]&&word0[4]+32==a0[3]||word0[0]+32==a0[5]&&word0[4]+32==a0[3]||word0[0]+32==a0[5]&&word0[4]+32==a0[4])

            {
                out0<<word0<<" ";
                dict0>>word0;dict0>>word0;
            }
            else 
            {dict0>>word0;dict0>>word0;}
            
        }
        
    }
    else 
    {
        dict0>>word0;dict0>>word0;
    }
    }
    
}


void keyf(string word, char (&key)[2][26])  
{   
    char ini=word[5]-5;
for(int j=0;j<26;j++)
    {
        key[0][j]='A'+j;
        
     if(j<6)
     {key[1][j]=word[j];
     }
     else if(j>=6)
     {  if(ini+j<='Z')
      {
        if(ini+j!=key[1][0]&&ini+j!=key[1][1]&&ini+j!=key[1][2]&&ini+j!=key[1][3]&&ini+j!=key[1][4]&&ini+j!=key[1][5])
        {
            
            key[1][j]=ini+j;
            
        }
        else
        {ini=ini+1;j--;
        continue;}
     }
     else
     {ini='A'-j;j--;
      }
     
    }
    }

}

void replace(char key[2][26],string &s1)
{
    for (int i=0; i<s1.length();i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if(s1[i]==key[1][j])
            {s1[i]=key[0][j];
            break;}
        }
        
    }
    
}

bool output(string word,string stword,char (&key)[2][26],string s1,string word2,int n)
{ int T=0;
            ifstream dict2(path_dict);
            dict2>>word2;
             keyf(word,key);
             replace(key,s1); 
            stringstream ss(s1);
            for(int z=0;z<n;z++)
            ss>>stword;
            
            while(!dict2.eof())
            {   
                if(stword==word2)
                {T++;break;}
                else
                {dict2>>word2;dict2>>word2;}
                
                
            }
            dict2.close();
            
            
            if(T>0)
            return true;
            else
            return false;
            
    
}  

int main()
{ 
    funct();
    int z=0;
    string st,s1;
    char key[2][26]; 
    char a[5];
    int k=0,T=0;
    vector<int> v,v1;
    vector<char> rw;
    rw={'E','T','A','I'};
    
    ifstream in(path_file);
    getline(in,st);
 
    
    for ( int i=0; i < 26; i++)
    {
      v.push_back(0);
        
        for (int j = 0; j < st.length(); j++)
        {
            if (int(st[j])==97+i)
            {
                v[i]++;
            }
            
           
        }
        
    }
    
    int max=*max_element(v.begin(),v.end());
    
    for(int i=0;i<=max;i++)
    {   
        v1.push_back(st[i]);
        for(int j=0;j<26;j++)
        {if(max-i==v[j])
        {a[k]=char(j+97);
        k++;}
        }
        if(k>4)
        break;
    }

    // e o q y w => E T A I
    transform(st.begin(), st.end(), st.begin(), ::toupper);

    for(int i=0;i<st.length();i++)
    {
        if(st[i]==92&&(st[i+1]=='N'||st[i+1]=='T'))
        st[i]=st[i+1]=char(32);
        if((st[i]>'Z'||st[i]<'A')&&(st[i]>57||st[i]<48))
        st[i]=char(32);

    }


    s1=st;
    
    string word,word2,stword;
    //for(int i=0;i<9;i++)
    dict>>word;//stringstream ss(s1);
    //dict2>>word2;//ss>>stword;

//output(word,stword,key,s1,word2);
 int m=0;
    string s;
    ifstream in1(path_file);
    in1>>s;
    while (s.length()<=6)
    {
        z++;
        in1>>s;
    }

   while(!dict.eof())
    {  
        int p=0;

            for(int i=0;i<50;i++)
            {
                //if(output(word,stword,key,s1,word2,i+1));
                if(output(word,stword,key,s1,word2,i))
                p++;
            }  
     if(p>=40)
     {
        for(int i=0;i<=52;i++)
        cout<<"-";
        cout<<endl;
        for(int i=0;i<26;i++)
        cout<<"|"<<key[0][i];
        cout<<"|"<<endl;
        for(int i=0;i<=52;i++)
        cout<<"-";
        cout<<endl;
        for(int i=0;i<26;i++)
        cout<<"|"<<char(key[1][i]+32);
        cout<<"|"<<endl;
        for(int i=0;i<=52;i++)
        cout<<"-";
        cout<<endl;
        
        m++;
        break;
     }
    
     else
     {s1=st;dict>>word;}
    }
    if(m==0)
    cout<<"INVALID"<<endl;


 return 0;
}