#include<iostream>
using namespace std;
char Matrix[3][3]={'1','2','3','4','5','6','7','8','9'}; 
char Player= 'X';

void printMatrix(){
	system("cls");//system("clear"); 	
	cout<<" .........  \n";
	for(int i=0;i<3;i++){

		cout<<"|  ";
	
		for(int j=0;j<3;j++){
			cout<<Matrix[i][j]<<" ";
		}
        cout<<" |";
		cout<< endl;
	}
	cout<<" .........   \n";
} 
void play(){
	char Pos;
	cout<<"choose your position -Player("<<Player<<"):";
	cin>>Pos;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(Matrix[i][j]==Pos){
				Matrix[i][j]=Player;
			}
		}
		
	}
	if(Player=='X'){
		Player='O';
	}else{
		Player='X';
	}
}
char Whowin(){
	int Xc=0,Oc=0;
	int counter =0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(Matrix[i][j]!='X'&&Matrix[i][j]!='O')counter++;
			if(Matrix[i][j]!='X'||Matrix[i][j]!='O'){
				counter++;
			}
			if(Matrix[i][j]=='X'){
				Xc++;
			}else if(Matrix[i][j]=='O'){
				Oc++;
			}
			if(Xc==3||Oc==3){
				return Xc > Oc ?'X':'O';
			}
			}
			Xc=0;
			Oc=0;
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(Matrix[j][i]=='X'){
				Xc++;
			}else if(Matrix[j][i]=='O'){
				Oc++;
			}
			if(Xc==3||Oc==3){
				return Xc > Oc ?'X':'O';
			}
			}
			Xc=0;
			Oc=0;
	}
	if(Matrix[0][0]=='X'&&Matrix[1][1=='X']&&Matrix[2][2]=='X')return 'X';
	else if(Matrix[0][0]=='O'&&Matrix[1][1]=='O'&&Matrix[2][2]=='O')return 'O'; 
	else if(Matrix[0][2]=='X'&&Matrix[1][1]=='X'&&Matrix[2][0]=='X')return 'X';
	else if(Matrix[0][2]=='O'&&Matrix[1][1]=='O'&&Matrix[2][0]=='O')return 'O';
	
	if(counter==0) return 'Z';
	return '.';
}
int main(){
	while(Whowin()== '.'){
	printMatrix();
	play();
	}
	printMatrix();
	if(Whowin()== 'Z')
	 cout <<"\nNo Winner !! \n\n" << endl;
    else
	 cout <<"\nthe Winner Is Player(" << Whowin() << ") ,congratulation !! \n\n";
	system("pause ");
	return 0;
}
