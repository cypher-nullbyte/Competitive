#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;


int main()
{
    fstream file1,file2,file3;
    string word1,word2,word3,filename,f1="",f2="",f3="";
    cin>>filename;
    file1.open(filename.c_str());
    while (file1>>word1) f1+=(word1+" ");
    filename="biology.txt";
    file2.open(filename.c_str());
    while(file2>>word2) f2+=(word2+ " ");
    filename="chemistry.txt";
    file3.open(filename.c_str());
    while(file3>>word3) f3+=(word3 + " ");
    
    int bio=0,chem=0;
    string final1="",final2="";
    stringstream iss1(f1);
    do {
        string subs;
        iss1>>subs;
        string subs2=subs;
        stringstream temp_stream(f2);
        do{
            string b_word,count;
            temp_stream>>b_word;
            temp_stream>>count;
            stringstream toInt(count);
            int int_count=0;
            toInt>>int_count;
            if(subs==b_word){
                bio+=int_count;
                transform(subs.begin(),subs.end(),subs.begin(),::toupper);
            }
        }while(temp_stream);
        if(subs==" END" || subs=="END" ) subs="";
        final1+=(subs+" ");
        
        
        stringstream temp_stream2(f3);
        do{
            string c_word,count;
            temp_stream2>>c_word;
            temp_stream2>>count;
            stringstream toInt(count);
            int int_count=0;
            toInt>>int_count;
            if(subs==c_word){
                chem+=int_count;
                transform(subs2.begin(),subs2.end(),subs2.begin(),::toupper);
            }
        }while(temp_stream2);
        if(subs2==" END"|| subs2=="END") subs2="";
        final2+=(subs2+" ");
        
    }while(iss1);
    // cout<<f1<<endl<<f2<<endl<<f3;
    cout<<bio<<endl<<chem<<endl;
    if(bio>chem)cout<<final1;
    else cout<<final2;
    return 0;
}


