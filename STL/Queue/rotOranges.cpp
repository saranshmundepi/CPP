/* Program to find min time to rot all oranges

0--Empty cell
1--Fresh Orange
2--Rotten Orange

 __			            __
|    2	1	0	2	1     |
|    1	0	1	1	1     |
|__  1	0	0	0	1   __|

--Learning: Implementation of Breadth First Search

*/

#include<iostream>
#include<queue>
#define ROW 3
#define COL 5

using namespace std;

struct coord{
    int x;
    int y;
};

int giveTimeToRot(int arrm[ROW][COL])
{
	queue<coord> Q;
	int visited[ROW][COL]={0};
	int i,j,minTime=0;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(arrm[i][j]==2)
			{
				coord t;
				t.y=i;t.x=j;
				Q.push(t);
				visited[i][j]=1;
				minTime=1;      //no need to check whether minTime is greater than any other time value, as it is the first pass
			}

		}
	}
    queue<coord> Qtemp=Q;

        while(!Qtemp.empty())
        {
		cout<<Qtemp.front().x<<" "<<Qtemp.front().y<<endl;
		Qtemp.pop();
        }
    cout<<endl;

	for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            cout<<visited[i][j]<<" ";

        }
        cout<<endl;

    }
    cout<<endl;

	while(!Q.empty())
    {
        struct coord temp;
        temp=Q.front();
        Q.pop();

        cout<<endl<<temp.x<<" "<<temp.y<<"<--"<<endl<<endl;

        queue<coord> Qtemp=Q;

        while(!Qtemp.empty())
        {
		cout<<Qtemp.front().x<<" "<<Qtemp.front().y<<endl;
		Qtemp.pop();
        }
        cout<<endl;


        //Adding left neighbor
        if(temp.x >= 1)
        {
            if(arrm[temp.y][temp.x - 1]==1 && visited[temp.y][temp.x - 1]==0)
            {
                struct  coord t1;
                t1.x=temp.x-1;
                t1.y=temp.y;
                Q.push(t1);
                visited[t1.y][t1.x]=visited[temp.y][temp.x]+1;
                if(minTime<visited[t1.y][t1.x])
                    minTime=visited[t1.y][t1.x];
            }
        }

        //Adding right neighbor
        if(temp.x < (COL-1))
        {
            if(arrm[temp.y][temp.x + 1]==1 && visited[temp.y][temp.x + 1]==0)
            {
                struct  coord t1;
                t1.x=temp.x+1;
                t1.y=temp.y;
                Q.push(t1);
                visited[t1.y][t1.x]=visited[temp.y][temp.x]+1;
                if(minTime<visited[t1.y][t1.x])
                    minTime=visited[t1.y][t1.x];
            }
        }

        //Adding top neighbor
        if(temp.y >= 1)
        {
            if(arrm[temp.y-1][temp.x]==1 && visited[temp.y-1][temp.x]==0)
            {
                struct  coord t1;
                t1.x=temp.x;
                t1.y=temp.y-1;
                Q.push(t1);
                visited[t1.y][t1.x]=visited[temp.y][temp.x]+1;
                if(minTime<visited[t1.y][t1.x])
                    minTime=visited[t1.y][t1.x];
            }
        }

        //Adding below neighbor
        if(temp.y < (ROW-1))
        {
            if(arrm[temp.y+1][temp.x]==1 && visited[temp.y+1][temp.x]==0)
            {
                struct  coord t1;
                t1.x=temp.x;
                t1.y=temp.y+1;
                Q.push(t1);
                visited[t1.y][t1.x]=visited[temp.y][temp.x]+1;
                if(minTime<visited[t1.y][t1.x])
                    minTime=visited[t1.y][t1.x];
            }
        }
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            cout<<visited[i][j]<<" ";

        }
        cout<<endl;

    }
    cout<<endl;

    }

    return minTime;
}
int main()
{
	int arrMatrix[ROW][COL]
	={{2,1,0,2,1},
	  {1,0,1,1,1},
	  {1,0,0,0,1}
    };

	cout<<giveTimeToRot(arrMatrix);

	return 0;
}
