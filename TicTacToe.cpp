#include <bits/stdc++.h>
using namespace std;
char player='X';
char board[3][3]={'1','2','3','4','5','6','7','8','9'};
void show()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void TogglePlayer()
{
    if(player=='X') player='O';
    else player='X';
}
char CheckWin()
{
    for(int i=0;i<3;i++)
    {
        char ch=board[i][0];int f=0;
        for(int j=1;j<3;j++)
        {
            if(board[i][j]!=ch) f=1;
        }
        if(!f) return ch;
    }
    for(int j=0;j<3;j++)
    {
        char ch=board[0][j];int f=0;
        for(int i=1;i<3;i++)
        {
            if(board[i][j]!=ch) f=1;
        }
        if(!f) return ch;
    }
    if((board[0][0]==board[1][1]) && (board[2][2]==board[0][0])) return board[0][0];
    if((board[0][2]==board[1][1]) && (board[2][0]==board[1][1])) return board[1][1];
    return 'D';
}
void Input()
{
    //start of code 1234
    int a;
    cout<<"Enter the cell number u choose :";
    cin>>a; 

    if(a==1)
    {
        if(board[0][0]==1)  board[0][0]=player;
        else cout<<"Invalid cell .Try Again";
    }
    else if(a==2) 
    {
        if(board[0][1]==2) board[0][1]=player;
        else cout<<"Invalid cell .Try Again";
    }
    else if(a==3) 
    {
        if(board[0][2]==3) board[0][2]=player;
        else cout<<"Invalid cell .Try Again";
    }
    else if(a==4) 
    {
        if(board[1][0]==4) board[1][0]=player;
        else cout<<"Invalid cell .Try Again";
    }
    else if(a==5) 
    {
        if(board[1][1]==5) board[1][1]=player;
        else cout<<"Invalid cell .Try Again";
    }
    else if(a==6) 
    {
        if(board[1][2]==6) board[1][2]=player;
        else cout<<"Invalid cell .Try Again";
    }
    else if(a==7)
    {
        if(board[2][0]==7) board[2][0]=player;
        else cout<<"Invalid cell .Try Again";
    } 
    else if(a==8) 
    {
        if(board[2][1]==8) board[2][1]=player;
        else cout<<"Invalid cell .Try Again";
    }
    else if(a==9) 
    {
        if(board[2][2]==9) board[2][2]=player;
        else cout<<"Invalid cell .Try Again";
    }  
}
int  main()
{
    show();
    int f=0;
    for(int i=0;i<9;i++)
    {
        Input();
        show();
        TogglePlayer();
        char ch=CheckWin();
        if(ch=='X') {cout<<"Player1 wins"<<"\n";f=1;break;}
        else if(ch=='O') {cout<<"Player2 wins"<<"\n";f=1;break;}
    }
    if(!f)
    {char ch=CheckWin();
    if(ch=='X') cout<<"Player1 wins"<<"\n";
    else if(ch=='O') cout<<"Player2 wins"<<"\n";
    else cout<<"DRAW"<<"\n";}
    return 0;
}


