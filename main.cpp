#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iostream>
#include "TableTennisPlayer.h"
using namespace std;
int main(int argc, char** argv) {
	printf ("hello world\n"); 
	TableTennisPlayer player1("cai","pengbo",true);
	TableTennisPlayer player2("li","dong",false);
	player1.Name();
	if(player1.HasTable())
	{
		cout<<":has a table"<<endl;
	}
	else
	{
		cout<<":hasn't a table"<<endl;
	}
	player2.Name();
	if(player2.HasTable())
	{
		cout<<":has a table"<<endl;
	}
	else
	{
		cout<<":hasn't a table"<<endl;
	}
	
}
