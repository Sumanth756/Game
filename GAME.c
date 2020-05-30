#include <stdio.h>
int win=0;
char player[3][3]={[0][0]='1',[0][1]='2',[0][2]='3',[1][0]='4',[1][1]='5',[1][2]='6',[2][0]='7',[2][1]='8',[2][2]='9'};
int row(int x)
   {
      switch(x)
        {
          case 1: return (0);
          break;
          case 2: return (0);
          break;
          case 3: return (0);
          break;
          case 4: return (1);
          break;
          case 5: return (1);
          break;
          case 6: return (1);
          break;
          case 7: return (2);
          break;
          case 8: return (2);
          break;
          case 9: return (2);
          break;
        }
   }
int column(int x)
   {
      switch(x)
        {
          case 1: return (0);
          break;
          case 2: return (1);
          break;
          case 3: return (2);
          break;
          case 4: return (0);
          break;
          case 5: return (1);
          break;
          case 6: return (2);
          break;
          case 7: return (0);
          break;
          case 8: return (1);
          break;
          case 9: return (2);
          break;
        }
   }
void check()
    {
        if (player[0][0]==player[0][1] && player[0][1]==player[0][2] || player[1][0]==player[1][1] && player[1][0]==player[1][2] || player[2][0]==player[2][1] && player[2][1]==player[2][2] || player[0][0]==player[1][1] && player[1][1]==player[2][2] || player[0][2]==player[1][1] && player[0][2]==player[2][0] || player[0][0]==player[1][0] && player[1][0]==player[2][0] || player[0][1]==player[1][1] && player[1][1]==player[2][1] || player[0][2]==player[1][2] && player[1][2]==player[2][2])
        {
            printf("\nGame Completed\n");
            win=1;
        }
    }
void print(void)
    {
                for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
               printf("| %c |",player[i][j]);
            }
            printf("\n---------------\n");
        }
    }
int main()
{
    int Player1,Player2;
    printf("\t\t\t\t\t\tX and O\n\t\t\t\t\t\tG A M E\nInstructions:Each Player selects Position in the Grid to place their respective symbols\n");
    print();
    while (win==0)
    {
        printf("Player1(X) Enter Number ");
        scanf("%d",&Player1);
        player[row(Player1)][column(Player1)]='X';
        check();
        print();
        printf("Player2(O) Enter Number ");
        scanf("%d",&Player2);
        player[row(Player2)][column(Player2)]='O';
        check();
        print();
    }
}
