#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;
#define sc(x) scanf("%d",&x);
#define scs(xx) scanf("%s",xx);
#define p(s) printf("%s\n",s);

struct student
{
	int roll;
	char name[15];
	int marks;
	
};
bool cmp(student a,student b){

		if(a.marks>b.marks) return true;
		else{
				if(a.marks<b.marks) return false;
				else if(a.roll<b.roll) return true;
		}
		


		return false;

}

int main(int argc, char const *argv[])
{
	std::vector<student>result;
	student s;
// string ss="Roll%|%Name%|%Marks-------------------------";
          p("Roll | Name       | Marks\n-------------------------");
         // p("");

    int n;
    sc(n);
    for(int i=0;i<n;i++){
    	sc(s.roll);
    	scs(s.name);
    	sc(s.marks);
    	result.push_back(s);


    }

    sort(result.begin(),result.end(),cmp);

    for (int i = 0; i < n; ++i)
    {
    	int k=result[i].roll,d=0;

    	while(k){
    		d++;
    		k/=10;
    	}
    	// char *xx=result[i].name;
    	// int x=sizeof(xx)/sizeof(xx[0]);
    	int x=strlen(result[i].name);
    	//cout<<x<<endl;
    	for(int i=1;i<5-d;i++)printf(" ");

    		printf("%d ", result[i].roll);


    	printf("| %s",result[i].name);
    	for(int i=0;i<11-x;i++)printf(" ");
    		printf("| %d",result[i].marks);

    	printf("\n");
    }


  
	
	
}


