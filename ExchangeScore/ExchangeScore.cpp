// HackTerrorist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


void TotalWins(int StockCountwin, int TimeCountWin);
void ComeBackWins(int* const pStockCountwin, int* const pTimeCountWin);

int main()
{
	//shows the expected screen of the account
	int StockWins;
	int Fox = 1000000000;
	int Bird = 1000000;
	int Kirby = 290;
	int CFalcon = 33;
	//Setting up the base value
	cout << "First Scores" << endl;
	cout << "Fox: " << Fox << endl;
	cout << "Kirby wins: " << Kirby << endl;
	cout << "Falco: " << Bird << endl;
	cout << "Captain Falcon wins: " << CFalcon << endl;
	//ICIE is dominating in funds for a terrorist organization
	TotalWins(CFalcon, Kirby);
	cout << "Normal values" << endl;
	cout << "Fox wins: " << Fox << endl;
	cout << "Kirby wins: " << Kirby << endl;
	cout << "Falco wins : " << Bird << endl;
	cout << "Captain falcon wins: " << CFalcon << endl;
	//The funds for the poor Coffee shop has now a chance of recovery
	ComeBackWins(&CFalcon, &Kirby);
	cout << "Normal values" << endl;
	cout << "Fox Reversal wins: " << Fox << endl;
	cout << "Kirby Reversal wins: " << Kirby << endl;
	cout << "Falco Reverse wins: " << Bird << endl;
	cout << "Captain Falcon Reverse wins: " << CFalcon << endl;
	//Recalculates reversals for wins
	cout << "Reversal wins being calculated" << endl;
	system("pause");
	return 0;
}

void TotalWins(int StockCountWin, int TimeCountWin)
{
	int temp = StockCountWin;
	StockCountWin = TimeCountWin;
	TimeCountWin = temp;
}

void ComeBackWins(int* const pStockCountwin, int* const pTimeCountWin)
{
	//stpre value tjat were pointed by pX in the temp from before
	int temp = *pStockCountwin;
	//values have been stored
	*pStockCountwin = *pTimeCountWin;
	*pTimeCountWin = temp;
}
