#include<iostream>
using namespace std;

char coordinate[10]={'1','2','3','4','5','6','7','8','9'};
void board(){


cout<<"\t'W E L C O M E    T O    T I C    T A C    T O E    G A M E'\n\n       \t\t\t\t  ^_^"<<endl;
cout<<"\n";

cout<<"Player1 [X]\nPlayer2 [0]\n";
cout<<"\n";
cout<<"\t\t               |       |               \n";
cout<<"\t\t           "<< coordinate [0]<<"   |   "<<coordinate [1] <<"   |   " <<  coordinate [2]  <<"        \n";
cout<<"\t\t        _______|_______|_______        \n";
cout<<"\t\t               |       |               \n";
cout<<"\t\t           "<< coordinate [3]<<"   |   "<<coordinate [4] <<"   |   " <<  coordinate [5]  <<"        \n";
cout<<"\t\t        _______|_______|_______        \n";
cout<<"\t\t               |       |               \n";
cout<<"\t\t           "<< coordinate [6]<<"   |   "<<coordinate [7] <<"   |   " <<  coordinate [8]  <<"        \n";
cout<<"\t\t               |       |               \n";
cout<<"\n";
cout<<"Player1 [X] turn:\n";
}

int main(){
board();
}



void assignSign(){
    int n11, n12, n13, n14, n15, n21, n22, n23, n24;
    cout<<"Player 1 -> X"<<endl;
    cout<<"Player 2 -> O"<<endl;
    cout<<"Enter a Cell number you want to put mark\n";
    
        cout<<"Player 1 :";
        cin>>n11;
        coordinate[n11-1]='X';
        board();

        cout<<"Player 2 :";
        cin>>n21;
        if(n11==n21){
        cout<<"Wrong move\n";}
        else
        coordinate[n21-1]='O';
        board();
        

        cout<<"Player 1 :";
        cin>>n12;
        if(n12==n21||n12==n11)
        cout<<"Wrong move\n";
        else
        coordinate[n12-1]='X';
        board();
        

        cout<<"Player 2 :";
        cin>>n22;
        if(n22==n21||n22==n11||n22==n12)
        cout<<"Wrong move\n";
        else
        coordinate[n22-1]='O';
        board();

        cout<<"Player 1 :";
        cin>>n13;
        if(n13==n21||n13==n11||n13==n12||n13==n22)
        cout<<"Wrong move\n";
        else
        coordinate[n13-1]='X';
        board();
        result();

        cout<<"Player 2 :";
        cin>>n23;
        if(n23==n21||n23==n11||n23==n12||n23==n22||n23==n13)
        cout<<"Wrong move\n";
        else
        coordinate[n23-1]='O';
        board();
        result();

        cout<<"Player 1 :";
        cin>>n14;
        if(n14==n21||n14==n11||n14==n12||n14==n22||n14==n13||n14==n23)
        cout<<"Wrong move\n";
        else
        coordinate[n14-1]='X';
        board();
        result();

        cout<<"Player 2 :";
        cin>>n24;
        if(n24==n21||n24==n11||n24==n12||n24==n22||n24==n13||n24==n23||n24==n14)
        cout<<"Wrong move\n";
        else
        coordinate[n24-1]='O';
        board();
        result();

        cout<<"Player 1 :";
        cin>>n15;
        if(n15==n21||n15==n11||n15==n12||n15==n22||n15==n13||n15==n23||n15==n14||n15==n24)
        cout<<"Wrong move\n";
        else
        coordinate[n15-1]='X';
        board();
        result();
}
int main(){

}
