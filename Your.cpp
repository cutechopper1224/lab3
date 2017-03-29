#include<iostream>
#include<vector>
#include<cstdlib>
#include<fstream>
#include<string>
#include<algorithm>
#include"Clock.h"
using namespace std;



void insertion_sort(vector<int> & v)
{
    int insert,moveItem;
      for(int next = 1;next < v.size();next++)
{
  insert = v.at(next);
  moveItem = next;
while((moveItem > 0) && (v.at(moveItem - 1) > insert))
{
    v.at(moveItem) = v.at(moveItem - 1);
         --moveItem;
}
v.at(moveItem) = insert;
}
}



int main()
{
//A
   ifstream input("file.in",ios::in);
       if(!input)
{
cout << "Failed Opening." << endl;
exit(-1);
}
vector<int> cow;
int w;
while(input >> w)
{
cow.push_back(w);

}
sort(cow.begin(),cow.end());
int s = cow.size() - 1;
int sum = cow.at(s) + cow.at(s - 1) + cow.at(s - 2) + cow.at(s - 3) + cow.at(s - 4);
ofstream output("stdout",ios::out);
if(!output)
{
cout << "Failed Opening." << endl;
exit(-1);
}
output << sum << endl;

//B


Clock clk;

vector<int> v1,v2;
vector<int> vs(1000),vt(10000),vu(100000),vv(1000000);
srandom(time(NULL));
for(int i = 0;i < 1000;++i)
vs.at(i) = random();
v1 = vs;v2 = vs;
cout << "1000" << endl;
clk.start();
sort(v1.begin(),v1.end());
cout << "sort():" << clk.getElapsedTime() << "seconds\n";
clk.start();
insertion_sort(v2);
cout << "insertion_sort():" << clk.getElapsedTime() << "seconds\n";

for(int i = 0;i < 10000;++i)
vt.at(i) = random();
v1 = vt;v2 = vt;
cout << "10000" << endl;
clk.start();
sort(v1.begin(),v1.end());
cout << "sort():" << clk.getElapsedTime() << "seconds\n";
clk.start();
insertion_sort(v2);
cout << "insertion_sort():" << clk.getElapsedTime() << "seconds\n";

for(int i = 0;i < 100000;++i)
vu.at(i) = random();
v1 = vu;v2 = vu;
cout << "100000" << endl;
clk.start();
sort(v1.begin(),v1.end());
cout << "sort():" << clk.getElapsedTime() << "seconds\n";
clk.start();
insertion_sort(v2);
cout << "insertion_sort():" << clk.getElapsedTime() << "seconds\n";

for(int i = 0;i < 1000000;++i)
vv.at(i) = random();
v1 = vv;v2 = vv;
cout << "1000000" << endl;
clk.start();
sort(v1.begin(),v1.end());
cout << "sort():" << clk.getElapsedTime() << "seconds\n";
clk.start();
insertion_sort(v2);
cout << "insertion_sort():" << clk.getElapsedTime() << "seconds\n";
return 0;
}
