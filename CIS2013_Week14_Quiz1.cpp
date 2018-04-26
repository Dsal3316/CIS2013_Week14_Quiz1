#include <iostream>
#include <cstring>
using namespace std;

class game{

	private:

		string name;
		int score;

	public:

		void get_name(){
			cout<<"Please name board: " << endl;
			cin>> name;
			
			}
		void get_score(){
			
		}

		void set_score(){

		}

		void set_name(){

		}
};

class minesweeper: public game{

	private:

		int x,y;
		int board_size=0;
		int board_rows=x;
		int board_columns=y;
		int selected_squares=0;
		int bomb_squares=0;

	public:

		void get_columns(){
			cout<<"Please enter number of columns: " << endl;
			cin>> board_columns;

		}

		void get_rows(){
			cout<<"Please enter number of rows: " << endl;
			cin>> board_rows;

		}

		void set_board(){
			int **arr = new int * [x];  

			for(int i=0 ; i<board_rows ; ++i)
			{
  			 arr[i] = new int[y]; 
			}
			

		}
		void print(unsigned char** board, int x, int y){
			cout << '\t';
			for (int i = 0; i < x;i++)
			{
				cout << i << ' ';
			}
			cout << '\n';
			for (int i = 0; i < y; i++)
		{
				cout << i << '\t';
				for (int j = 0; j < x;j++)
			{
				cout << set_board[x][y] << ' ';
			}
			cout << '\n';
		}
}

		
		void get_square(){
		}
};

int main(){
	int x,y;
	int board_rows=x;
	int board_columns=y;

	

	cout<<"Welcome to mindsweeper " << endl;
	cout<< endl;
	cout<<"Please enter number of columns: " << endl;
	cin>> board_columns;
	cout<<"Please enter number of rows: " << endl;
	cin>> board_rows;


	minesweeper newA;


	print.newA(x,y);
	

	






	return 0;
}

		
		


