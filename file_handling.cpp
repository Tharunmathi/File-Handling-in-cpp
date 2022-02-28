# include<iostream>
# include <fstream>
using namespace std;
int main(){
    char arr[100];
    cout<<"enter the name and age"<<endl;
    cin.getline(arr,100);
    ofstream myfile("xyz.txt");
    //myfile.open("xyz.txt");
    myfile<<arr;
    myfile.close();
    cout<<"file opened succesfully"<<endl<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"array content:"<<arr1<<endl;
    cout<<"file for reading"<<endl;
    obj.close();
    return 0;
    
}
