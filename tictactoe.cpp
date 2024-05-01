#include<iostream>
#include<cstdlib>
using namespace std;
void drawlines(char paper[3][3])
{
	cout<<"\n";
	for(int i=0;i<3;i++)
	{
		cout<<"---------------\n | ";
		for(int j=0;j<3;j++)
		{
			cout<<paper[i][j]<<" | ";
		}
		cout<<"\n";
	}
	cout<<"---------------\n";
}
int main()
{
	char ans;
	do
	{
		int n,i=0,row,col;
		char paper[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
		char player='X';
		drawlines(paper);
		do
		{
			cout<<"\nPlayer '"<<player<<"'";
			cout<<"\nEnter the row (1/2/3): ";
			cin>>row;
			cout<<"Enter column (1/2/3): ";
			cin>>col;
			//	getchar();
			system("cls");
			if((row>3||row<1)||(col>3||col<1))
			{
				cout<<"Invalid input. Try again";
				break;
			}
			row=row-1;
			col=col-1;
			if(paper[row][col]!=' ')
			{
				cout<<"Invalid input. Try again";
				break;
			}
			paper[row][col]=player;
			drawlines(paper);
			for(int i=0;i<3;i++)
			{
				if(((paper[i][0]=='X')&&(paper[i][1]=='X')&&(paper[i][2]=='X'))||((paper[i][0]=='O')&&(paper[i][1]=='O')&&(paper[i][2]=='O')))
				{
					n=20;
				}
				else if(((paper[0][i]=='X')&&(paper[1][i]=='X')&&(paper[2][i]=='X'))||((paper[0][i]=='O')&&(paper[1][i]=='O')&&(paper[2][i]=='O')))
				{
					n=20;
				}
				else if(((paper[0][0]=='X')&&(paper[1][1]=='X')&&(paper[2][2]=='X'))||((paper[0][0]=='O')&&(paper[1][1]=='O')&&(paper[2][2]=='O')))
				{
					n=20;
				}
				else if(((paper[0][2]=='X')&&(paper[1][1]=='X')&&(paper[2][0]=='X'))||((paper[0][2]=='O')&&(paper[1][1]=='O')&&(paper[2][0]=='O')))
				{
					n=20;
				}
			}
			if(n==20)
			{
				cout<<player<<" wins!!\n";
				break;
			}
			else if(player=='X')
			{
				player='O';
			}
			else if(player=='O')
			{
				player='X';
			}
			if(i==8)
			{
					cout<<"\nMatch Draw";
			}
			i++;
		}while(i<9);
		cout<<"\nDo you want to continue the game (Y/N) : ";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
	return 0;
}
