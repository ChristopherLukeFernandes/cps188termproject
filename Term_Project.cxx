#include <stdio.h>
#include <stdlib.h>
void questionOne(double Sup [], double Mich [], double Huron [], double Erie [], double Ont [], double Clr []) {
	double
	totSup = 0, avgSup, 
	totMich = 0, avgMich,
	totHuron = 0, avgHuron,
	totErie = 0, avgErie,
	totOnt = 0, avgOnt,
	totClr = 0, avgClr,
	totComb, avgComb;
	for (int i = 0; i < 366; i++){
			totSup += Sup [i];
			totMich += Mich [i];
			totHuron += Huron [i];
			totErie += Erie [i];
			totOnt += Ont [i];
			totClr += Clr [i];
		}
	avgSup = totSup / 366;
	printf("\nThe average temperature of Lake Superior in 2020 was %.2lf degrees celsius", avgSup);
	avgMich = totMich / 366;
	printf("\nThe average temperature of Lake Michigan in 2020 was %.2lf degrees celsius", avgMich);
	avgHuron = totHuron / 366;
	printf("\nThe average temperature of Lake Huron in 2020 was %.2lf degrees celsius", avgHuron);
	avgErie = totErie / 366;
	printf("\nThe average temperature of Lake Erie in 2020 was %.2lf degrees celsius", avgErie);
	avgOnt = totOnt / 366;
	printf("\nThe average temperature of Lake Ontario in 2020 was %.2lf degrees celsius", avgOnt);
	avgClr = totClr / 366;
	printf("\nThe average temperature of Lake St. Clair in 2020 was %.2lf degrees celsius", avgClr);
	totComb = totSup + totMich + totHuron + totErie + totOnt + totClr;
	avgComb = (totComb / 6) / 366;
	printf("\nThe average temperature of all lakes in 2020 was %.2lf degrees celsius", avgComb);
	printf("\n----------------------------------------------------------------");
	}

void questionTwo (double Sup [], double Mich [], double Huron [], double Erie [], double Ont [], double Clr []) {
	double
	totSup = 0, avgSup, 
	totMich = 0, avgMich,
	totHuron = 0, avgHuron,
	totErie = 0, avgErie,
	totOnt = 0, avgOnt,
	totClr = 0, avgClr,
	totComb, avgComb;
	char names [6][9]	{
				{'S', 'u', 'p', 'e', 'r', 'i', 'o', 'r'},
				{'M', 'i', 'c', 'h', 'i', 'g', 'a', 'n'},
				{'H', 'u', 'r', 'o', 'n'},
				{'E', 'r', 'i', 'e'},
				{'O', 'n', 't', 'a', 'r', 'i', 'o'},
				{'S', 't', '.', ' ', 'C', 'l', 'a', 'i', 'r'}
				};
	for (int i = 0; i < 366; i++){
			totSup += Sup [i];
			totMich += Mich [i];
			totHuron += Huron [i];
			totErie += Erie [i];
			totOnt += Ont [i];
			totClr += Clr [i];
		}
	avgSup = totSup / 366;
	avgMich = totMich / 366;
	avgHuron = totHuron / 366;
	avgErie = totErie / 366;
	avgOnt = totOnt / 366;
	avgClr = totClr / 366;
	totComb = totSup + totMich + totHuron + totErie + totOnt + totClr;
	avgComb = (totComb / 6) / 366;
	double avgs [] = {avgSup, avgMich, avgHuron, avgErie, avgOnt, avgClr};
	for (int i = 0; i < 6; ++i) 
        {
            for (int j = i + 1; j < 6; ++j) 
            {
                if (avgs[i] < avgs[j]) 
                {
                    double temp = avgs[i];
                    avgs[i] = avgs[j];
                    avgs[j] = temp;
                    for (int k = 0; k < 9; k++){
						char temp [9];
						for (int l = 0; l < 9; l++){
							temp [l] = names [i][l];
							}
						for (int m = 0; m < 9; m++){
							names [i][m] = names [j][m];
							}
						for (int n = 0; n < 9; n++){
							names [j][n] = temp [n];
							}
						}
                }
            }
        }
	printf("\nThe coldest lake in 2020 was Lake ");
	for (int j = 0; j < 9; j++){
			printf("%c", names [5][j]);
			}
	printf("\nThe warmest lake in 2020 was Lake ");
	for (int j = 0; j < 9; j++){
			printf("%c", names [0][j]);
			}
	printf("\n\nLake Superior was ");
	if (avgSup > avgComb){
		printf("above average");
		}
		else{
			printf("below average");
			}
	printf("\nLake Michigan was ");
	if (avgMich > avgComb){
		printf("above average");
		}
		else{
			printf("below average");
			}
	printf("\nLake Huron was ");
	if (avgHuron > avgComb){
		printf("above average");
		}
		else{
			printf("below average");
			}
	printf("\nLake Erie was ");
	if (avgErie > avgComb){
		printf("above average");
		}
		else{
			printf("below average");
			}
	printf("\nLake Ontario was ");
	if (avgOnt > avgComb){
		printf("above average");
		}
		else{
			printf("below average");
			}
	printf("\nLake St. Clair was ");
	if (avgClr > avgComb){
		printf("above average");
		}
		else{
			printf("below average");
			}
	printf("\n----------------------------------------------------------------");
	}

void yearToDate (int day) {
	int monthCount = 0;
	int days [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char months [12] [3] {	{'J', 'A', 'N'},
							{'F', 'E', 'B'},
							{'M', 'A', 'R'},
							{'A', 'P', 'R'},
							{'M', 'A', 'Y'},
							{'J', 'U', 'N'},
							{'J', 'U', 'L'},
							{'A', 'U', 'G'},
							{'S', 'E', 'P'},
							{'O', 'C', 'T'},
							{'N', 'O', 'V'},
							{'D', 'E', 'C'} };
	while (day > days [monthCount]) {
		day = day - days [monthCount];
		monthCount++;
		}
	printf ("%c%c%c %d", months [monthCount] [0], months [monthCount] [1], months [monthCount] [2], day);
	}

void questionThreeFour (double Sup [], double Mich [], double Huron [], double Erie [], double Ont [], double Clr [], int Question) {
	
	double 	lowSup = 100.0, highSup = -100.0,
			lowMich = 100.0, highMich = -100.0,
			lowHuron = 100.0, highHuron = -100.0,
			lowErie = 100.0, highErie = -100.0,
			lowOnt = 100.0, highOnt = -100.0,
			lowClr = 100.0, highClr = -100.0;
	int 	lowDaySup [3], highDaySup [3],
			lowDayMich [3], highDayMich [3],
			lowDayHuron [3], highDayHuron [3],
			lowDayErie [3], highDayErie [3],
			lowDayOnt [3], highDayOnt [3],
			lowDayClr [3], highDayClr [3];
			for (int i = 0; i < 3; i++){
				lowDaySup [i] = 0;
				lowDayMich [i] = 0;
				lowDayHuron [i] = 0;
				lowDayErie [i] = 0;
				lowDayOnt [i] = 0;
				lowDayClr [i] = 0;
				highDaySup [i] = 0;
				highDayMich [i] = 0;
				highDayHuron [i] = 0;
				highDayErie [i] = 0;
				highDayOnt [i] = 0;
				highDayClr [i] = 0;
				}
	int		lowCountSup = 0, highCountSup = 0,
			lowCountMich = 0, highCountMich = 0,
			lowCountHuron = 0, highCountHuron = 0,
			lowCountErie = 0, highCountErie = 0,
			lowCountOnt = 0, highCountOnt = 0,
			lowCountClr = 0, highCountClr = 0;
	for (int i = 0; i < 366; i++){
			if (Sup [i] < lowSup){
				lowSup = Sup [i];
				lowDaySup [0] = i + 1;
				lowCountSup = 0;
				}
			else if (Sup [i] == lowSup){
				lowCountSup++;
				lowDaySup[lowCountSup] = i + 1;
				}
			else if (Sup [i] > highSup) {
				highSup = Sup [i];
				highDaySup [0] = i + 1;
				highCountSup = 0;
			}
			else if (Sup [i] == highSup) {
				highCountSup++;
				highDaySup[highCountSup] = i + 1;
				}
			if (Mich [i] < lowMich){
				lowMich = Mich [i];
				lowDayMich [0] = i + 1;
				lowCountMich = 0;
				}
			else if (Mich [i] == lowMich){
				lowCountMich++;
				lowDayMich[lowCountMich] = i + 1;
				}
			else if (Mich [i] > highMich) {
				highMich = Mich [i];
				highDayMich [0] = i + 1;
				highCountMich = 0;
			}
			else if (Mich [i] == highMich) {
				highCountMich++;
				highDayMich[highCountMich] = i + 1;
				}
			if (Huron [i] < lowHuron){
				lowHuron = Huron [i];
				lowDayHuron [0] = i + 1;
				lowCountHuron = 0;
				}
			else if (Huron [i] == lowHuron){
				lowCountHuron++;
				lowDayHuron[lowCountHuron] = i + 1;
				}
			else if (Huron [i] > highHuron) {
				highHuron = Huron [i];
				highCountHuron = 0;
				highDayHuron [0] = i + 1;
				highCountHuron = 0;
			}
			else if (Huron [i] == highHuron) {
				highCountHuron++;
				highDayHuron[highCountHuron] = i + 1;
				}
			if (Erie [i] < lowErie){
				lowErie = Erie [i];
				lowDayErie [0] = i + 1;
				lowCountErie = 0;
				}
			else if (Erie [i] == lowErie){
				lowCountErie++;
				lowDayErie[lowCountErie] = i + 1;
				}
			else if (Erie [i] > highErie) {
				highErie = Erie [i];
				highCountErie = 0;
				highDayErie [0] = i + 1;
				highCountErie = 0;
			}
			else if (Erie [i] == highErie) {
				highCountErie++;
				highDayErie[highCountErie] = i + 1;
				}
			if (Ont [i] < lowOnt){
				lowOnt = Ont [i];
				lowDayOnt[0] = i + 1;
				lowCountOnt = 0;
				}
			else if (Ont [i] == lowOnt){
				lowCountOnt++;
				lowDayOnt[lowCountOnt] = i + 1;
				}
			else if (Ont [i] > highOnt) {
				highOnt = Ont [i];
				highDayOnt [0] = i + 1;
				highCountOnt = 0;
			}
			else if (Ont [i] == highOnt) {
				highCountOnt++;
				highDayOnt[highCountOnt] = i + 1;
				}
			if (Clr [i] < lowClr){
				lowClr = Clr [i];
				lowDayClr[0] = i + 1;
				lowCountClr = 0;
				}
			else if (Clr [i] == lowClr){
				lowCountClr++;
				lowDayClr[lowCountClr] = i + 1;
				}
			else if (Clr [i] > highClr) {
				highClr = Clr [i];
				highDayClr [0] = i + 1;
				highCountClr = 0;
			}
			else if (Clr [i] == highClr) {
				highCountClr++;
				highDayClr[highCountClr] = i + 1;
				}
		}
		if (Question == 3){
		printf ("\n   	Superior	Michigan	Huron		Erie		Ontario 	St. Clair");
		printf ("\nLow	%.2lf		%.2lf		%.2lf		%.2lf		%.2lf		%.2lf", lowSup, lowMich, lowHuron, lowErie, lowOnt, lowClr);
		printf ("\n\nDates");
		printf ("	");
		yearToDate(lowDaySup[0]);
		printf ("		");
		yearToDate(lowDayMich[0]);
		printf ("		");
		yearToDate(lowDayHuron[0]);
		printf ("		");
		yearToDate(lowDayErie[0]);
		printf ("		");
		yearToDate(lowDayOnt[0]);
		printf ("		");
		yearToDate(lowDayClr[0]);
		printf ("\n	");
		if (lowDaySup [1] > lowDaySup [0]){
			yearToDate(lowDaySup[1]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (lowDayMich [1] > lowDayMich [0]){
			yearToDate(lowDayMich[1]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (lowDayHuron [1] > lowDayHuron [0]){
			yearToDate(lowDayHuron[1]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (lowDayErie [1] > lowDayErie [0]){
			yearToDate(lowDayErie[1]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (lowDayOnt [1] > lowDayOnt [0]){
			yearToDate(lowDayOnt[1]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (lowDayClr [1] > lowDayClr [0]){
			yearToDate(lowDayClr[1]);
			}
			else {
				printf ("");
				}
		printf ("\n	");
		if (lowDaySup [2] > lowDaySup [0]){
			yearToDate(lowDaySup[2]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (lowDayMich [2] > lowDayMich [0]){
			yearToDate(lowDayMich[2]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (lowDayHuron [2] > lowDayHuron [0]){
			yearToDate(lowDayHuron[2]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (lowDayErie [2] > lowDayErie [0]){
			yearToDate(lowDayErie[2]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (lowDayOnt [2] > lowDayOnt [0]){
			yearToDate(lowDayOnt[2]);
			}
			else {
				printf ("");
			}
		printf ("		");
		if (lowDayClr [2] > lowDayClr [0]){
			yearToDate(lowDayClr[2]);
			}
			else {
				printf ("");
				}
		printf ("\n\nHigh	%.2lf		%.2lf		%.2lf		%.2lf		%.2lf		%.2lf", highSup, highMich, highHuron, highErie, highOnt, highClr);
		printf ("\n\nDates");
		printf ("	");
		yearToDate(highDaySup[0]);
		printf ("		");
		yearToDate(highDayMich[0]);
		printf ("		");
		yearToDate(highDayHuron[0]);
		printf ("		");
		yearToDate(highDayErie[0]);
		printf ("		");
		yearToDate(highDayOnt[0]);
		printf ("		");
		yearToDate(highDayClr[0]);
		printf ("\n	");
		if (highDaySup [1] > highDaySup [0]){
			yearToDate(highDaySup[1]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (highDayMich [1] > highDayMich [0]){
			yearToDate(highDayMich[1]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (highDayHuron [1] > highDayHuron [0]){
			yearToDate(highDayHuron[1]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (highDayErie [1] > highDayErie [0]){
			yearToDate(highDayErie[1]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (highDayOnt [1] > highDayOnt [0]){
			yearToDate(lowDayOnt[1]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (highDayClr [1] > highDayClr [0]){
			yearToDate(highDayClr[1]);
			}
			else {
				printf ("");
				}
		printf ("\n	");
		if (highDaySup [2] > highDaySup [0]){
			yearToDate(highDaySup[2]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (highDayMich [2] > highDayMich [0]){
			yearToDate(highDayMich[2]);
			}
			else {
				printf ("");

				}
		printf ("		");
		if (highDayHuron [2] > highDayHuron [0]){
			yearToDate(highDayHuron[2]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (highDayErie [2] > highDayErie [0]){
			yearToDate(highDayErie[2]);
			}
			else {
				printf ("");
				}
		printf ("		");
		if (highDayOnt [2] > highDayOnt [0]){
			yearToDate(highDayOnt[2]);
			}
			else {
				printf ("");
			}
		printf ("		");
		if (highDayClr [2] > highDayClr [0]){
			yearToDate(highDayClr[2]);
			}
			else {
				printf ("");
			}
		}
		else if (Question == 4) {
			int namesHigh [] = {1, 2, 3, 4, 5, 6,};
			double allTempsHigh [] = {highSup, highMich, highHuron, highErie, highOnt, highClr};
			int namesLow [] = {1, 2, 3, 4, 5, 6,};
			double allTempsLow [] = {lowSup, lowMich, lowHuron, lowErie, lowOnt, lowClr};
			for (int i = 0; i < 6; i++){
				for (int j = i + 1; j < 6; j++){
					if (allTempsHigh [i] < allTempsHigh [j]){
						double temp = allTempsHigh[i];
						allTempsHigh[i] = allTempsHigh[j];
						allTempsHigh[j] = temp;
						int tempName = namesHigh [i];
						namesHigh [i] = namesHigh [j];
						namesHigh [j] = tempName;
						}
					if (allTempsLow [i] > allTempsLow [j]){
						double temp = allTempsLow[i];
						allTempsLow[i] = allTempsLow[j];
						allTempsLow[j] = temp;
						int tempName = namesLow [i];
						namesLow [i] = namesLow [j];
						namesLow [j] = tempName;
						}
					}
				}
				printf("\nThe lake with the warmest temperature in 2020 was Lake ");
			if (namesHigh [0] == 1){
				printf("Superior with a temperature of %.2lf\nDate(s) - ", allTempsHigh [0]);
				yearToDate(highDaySup [0]);
				}
				else if (namesHigh [0] == 2){
					printf("Michigan with a temperature of %.2lf\nDate(s) - ", allTempsHigh [0]);
					yearToDate(highDayMich [0]);
				}
				else if (namesHigh [0] == 3){
					printf("Huron with a temperature of %.2lf\nDate(s) - ", allTempsHigh [0]);
					yearToDate(highDayHuron [0]);
				}
				else if (namesHigh [0] == 4){
					printf("Erie with a temperature of %.2lf\nDate(s) - ", allTempsHigh [0]);
					yearToDate(highDayErie [0]);
				}
				else if (namesHigh [0] == 5){
					printf("Ontario with a temperature of %.2lf\nDate(s) - ", allTempsHigh [0]);
					yearToDate(highDayOnt [0]);
				}
				else if (namesHigh [0] == 6){
					printf("St. Clair with a temperature of %.2lf\nDate(s) - ", allTempsHigh [0]);
					yearToDate(highDayClr [0]);
				}
			printf("\nThe lake with the coldest temperature in 2020 was Lake ");
			if (namesLow [0] == 1){
					printf("Superior with a temperature of %.2lf\nDate(s) - ", allTempsLow [0]);
					yearToDate(lowDaySup [1]);
					printf ("  ");
					yearToDate(lowDaySup [2]);
				}
				else if (namesLow [0] == 2){
					printf("Michigan with a temperature of %.2lf\nDate(s) - ", allTempsLow [0]);
					yearToDate(lowDayMich [0]);
					printf ("  ");
					yearToDate(lowDayMich [1]);
				}
				else if (namesLow [0] == 3){
					printf("Huron with a temperature of %.2lf\nDate(s) - ", allTempsLow [0]);
					yearToDate(lowDayHuron [0]);
				}
				else if (namesLow [0] == 4){
					printf("Erie with a temperature of %.2lf\nDate(s) - ", allTempsLow [0]);
					yearToDate(lowDayErie [0]);
				}
				else if (namesLow [0] == 5){
					printf("Ontario with a temperature of %.2lf\nDate(s) - ", allTempsLow [0]);
					yearToDate(lowDayOnt [0]);
				}
				else if (namesLow [0] == 6){
					printf("St. Clair with a temperature of %.2lf\nDate(s) - ", allTempsLow [0]);
					yearToDate(lowDayClr [0]);
					printf ("  ");
					yearToDate(lowDayClr [1]);
					printf ("  ");
					yearToDate(lowDayClr [2]);
					
				}
			}
		printf("\n----------------------------------------------------------------");
}

void questionFive (double Sup [], double Mich [], double Huron [], double Erie [], double Ont [], double Clr []){
	double 
	totSup = 0, 
	totMich = 0,
	totHuron = 0,
	totErie = 0,
	totOnt = 0,
	totClr = 0;
	double	avgSup,
			avgMich,
			avgHuron,
			avgErie,
			avgOnt,
			avgClr;
	char names [6][9]	{
				{'S', 'u', 'p', 'e', 'r', 'i', 'o', 'r'},
				{'M', 'i', 'c', 'h', 'i', 'g', 'a', 'n'},
				{'H', 'u', 'r', 'o', 'n'},
				{'E', 'r', 'i', 'e'},
				{'O', 'n', 't', 'a', 'r', 'i', 'o'},
				{'S', 't', '.', ' ', 'C', 'l', 'a', 'i', 'r'}
				};
	int count = 0;
	for (int i = 171; i < 265; i++){
			totSup += Sup [i];
			totMich += Mich [i];
			totHuron += Huron [i];
			totErie += Erie [i];
			totOnt += Ont [i];
			totClr += Clr [i];
			count++;
		}
	avgSup = totSup / count;
	avgMich = totMich / count;
	avgHuron = totHuron / count;
	avgErie = totErie / count;
	avgOnt = totOnt / count;
	avgClr = totClr / count;
	double avgs [] = {avgSup, avgMich, avgHuron, avgErie, avgOnt, avgClr};
	for (int i = 0; i < 6; ++i) 
        {
            for (int j = i + 1; j < 6; ++j) 
            {
                if (avgs[i] < avgs[j]) 
                {
                    double temp = avgs[i];
                    avgs[i] = avgs[j];
                    avgs[j] = temp;
                    for (int k = 0; k < 9; k++){
						char temp [9];
						for (int l = 0; l < 9; l++){
							temp [l] = names [i][l];
							}
						for (int m = 0; m < 9; m++){
							names [i][m] = names [j][m];
							}
						for (int n = 0; n < 9; n++){
							names [j][n] = temp [n];
							}
						}
                }
            }
        }
    printf ("\nAverage summer lake temperatures from greatest to least\n");
    for (int i = 0; i < 6; i++){
		for (int j = 0; j < 9; j++){
			printf("%c", names [i][j]);
			}
		printf("      %.2lf Dregrees Celsius\n", avgs [i]);
		}
	printf("\n----------------------------------------------------------------");
	}

void questionSix (double Sup [], double Mich [], double Huron [], double Erie [], double Ont [], double Clr []){
	double 
	totSup = 0, avgSup, 
	totMich = 0, avgMich,
	totHuron = 0, avgHuron,
	totErie = 0, avgErie,
	totOnt = 0, avgOnt,
	totClr = 0, avgClr;
	int count = 0;
	char names [6][9]	{
				{'S', 'u', 'p', 'e', 'r', 'i', 'o', 'r'},
				{'M', 'i', 'c', 'h', 'i', 'g', 'a', 'n'},
				{'H', 'u', 'r', 'o', 'n'},
				{'E', 'r', 'i', 'e'},
				{'O', 'n', 't', 'a', 'r', 'i', 'o'},
				{'S', 't', '.', ' ', 'C', 'l', 'a', 'i', 'r'}
				};
	for (int i = 0; i < 79; i++){
			totSup += Sup [i];
			totMich += Mich [i];
			totHuron += Huron [i];
			totErie += Erie [i];
			totOnt += Ont [i];
			totClr += Clr [i];
			count++;
		}
	for (int i = 354; i < 366; i++){
			totSup += Sup [i];
			totMich += Mich [i];
			totHuron += Huron [i];
			totErie += Erie [i];
			totOnt += Ont [i];
			totClr += Clr [i];
			count++;
		}
	avgSup = totSup / count;
	avgMich = totMich / count;
	avgHuron = totHuron / count;
	avgErie = totErie / count;
	avgOnt = totOnt / count;
	avgClr = totClr / count;
	double avgs [] = {avgSup, avgMich, avgHuron, avgErie, avgOnt, avgClr};
	for (int i = 0; i < 6; ++i) 
        {
            for (int j = i + 1; j < 6; ++j) 
            {
                if (avgs[i] < avgs[j]) 
                {
                    double temp = avgs[i];
                    avgs[i] = avgs[j];
                    avgs[j] = temp;
                    for (int k = 0; k < 9; k++){
						char temp [9];
						for (int l = 0; l < 9; l++){
							temp [l] = names [i][l];
							}
						for (int m = 0; m < 9; m++){
							names [i][m] = names [j][m];
							}
						for (int n = 0; n < 9; n++){
							names [j][n] = temp [n];
							}
						}
                }
            }
        }
    printf ("\nAverage winter lake temperatures from greatest to least\n");
    for (int i = 0; i < 6; i++){
		for (int j = 0; j < 9; j++){
			printf("%c", names [i][j]);
			}
		printf("      %.2lf Dregrees Celsius\n", avgs [i]);
		}
	printf("\n----------------------------------------------------------------");
	}

void questionSeven (double Sup [], double Mich [], double Huron [], double Erie [], double Ont [], double Clr []) {
	int countSup = 0, countMich = 0, countHuron = 0, countErie = 0, countOnt = 0, countClr = 0;
	for (int i = 0; i < 366; i++){
			if (Sup [i] > 20.0){
				countSup++;
				}
			if (Mich [i] > 20.0){
				countMich++;
				}
			if (Huron [i] > 20.0){
				countHuron++;
				}
			if (Erie [i] > 20.0){
				countErie++;
				}
			if (Ont [i] > 20.0){
				countOnt++;
				}
			if (Clr [i] > 20.0){
				countClr++;
				}
			}
	printf("\nThere were %d days in 2020 when Lake Superior was sutible for swimming", countSup);
	printf("\nThere were %d days in 2020 when Lake Michigan was sutible for swimming", countMich);
	printf("\nThere were %d days in 2020 when Lake Huron was sutible for swimming", countHuron);
	printf("\nThere were %d days in 2020 when Lake Erie was sutible for swimming", countErie);
	printf("\nThere were %d days in 2020 when Lake Ontario was sutible for swimming", countOnt);
	printf("\nThere were %d days in 2020 when Lake St. Clair was sutible for swimming", countClr);
	printf("\n----------------------------------------------------------------");
	}
		
void questionEight (double Sup [], double Mich [], double Huron [], double Erie [], double Ont [], double Clr []) {
	int countSup = 0, countMich = 0, countHuron = 0, countErie = 0, countOnt = 0, countClr = 0;
		for (int i = 0; i < 366; i++){
			if (Sup [i] < 0.0) {
				countSup++;
				}
			if (Mich [i] < 0.0){
				countMich++;
				}
			if (Huron [i] < 0.0){
				countHuron++;
				}
			if (Erie [i] < 0.0){
				countErie++;
				}
			if (Ont [i] < 0.0){
				countOnt++;
				}
			if (Clr [i] < 0.0){
				countClr++;
				}
			}
	printf("\nThere were %d days in 2020 when Lake Superior was frozen", countSup);
	printf("\nThere were %d days in 2020 when Lake Michigan was frozen", countMich);
	printf("\nThere were %d days in 2020 when Lake Huron was frozen", countHuron);
	printf("\nThere were %d days in 2020 when Lake Erie was frozen", countErie);
	printf("\nThere were %d days in 2020 when Lake Ontario was frozen", countOnt);
	printf("\nThere were %d days in 2020 when Lake St. Clair was frozen", countClr);
	printf("\n----------------------------------------------------------------");
	}

void questionNine (){
	int day;
double
	tempSup, totSup = 0, avgSup, 
	tempMich, totMich = 0, avgMich,
	tempHuron, totHuron = 0, avgHuron,
	tempErie, totErie = 0, avgErie,
	tempOnt, totOnt = 0, avgOnt,
	tempClr, totClr = 0, avgClr,
	totComb, avgComb;
    FILE * file = fopen("2019_Info.txt", "r"); // Opening file
	while (!feof(file)){ // Loops as long as there is still data in the file
 		fscanf(file, "%d", &day);
    	fscanf(file, "%lf", &tempSup);
    	totSup += tempSup;
    	fscanf(file, "%lf", &tempMich);
    	totMich += tempMich;
    	fscanf(file, "%lf", &tempHuron);
    	totHuron += tempHuron;
    	fscanf(file, "%lf", &tempErie);
    	totErie += tempErie;
    	fscanf(file, "%lf", &tempOnt);
    	totOnt += tempOnt;
    	fscanf(file, "%lf", &tempClr);
    	totClr += tempClr;
	}
	avgSup = totSup / 365;
	printf("\nThe average temperature of Lake Superior in 2019 was %.2lf degrees celsius", avgSup);
	avgMich = totMich / 365;
	printf("\nThe average temperature of Lake Michigan in 2019 was %.2lf degrees celsius", avgMich);
	avgHuron = totHuron / 365;
	printf("\nThe average temperature of Lake Huron in 2019 was %.2lf degrees celsius", avgHuron);
	avgErie = totErie / 365;
	printf("\nThe average temperature of Lake Erie in 2019 was %.2lf degrees celsius", avgErie);
	avgOnt = totOnt / 365;
	printf("\nThe average temperature of Lake Ontario in 2019 was %.2lf degrees celsius", avgOnt);
	avgClr = totClr / 365;
	printf("\nThe average temperature of Lake St. Clair in 2019 was %.2lf degrees celsius", avgClr);
	totComb = totSup + totMich + totHuron + totErie + totOnt + totClr;
	avgComb = (totComb / 6) / 365;
	printf("\nThe average temperature of all lakes in 2019 was %.2lf degrees celsius", avgComb);
	printf("\n----------------------------------------------------------------");
	}

int main()
{
	int selection, day;
	bool loop = true;
	double
	Sup [366],
	Mich [366],
	Huron [366],
	Erie [366],
	Ont [366],
	Clr [366];
    FILE * file = fopen("2020_Info.txt", "r"); // Opening file
	for (int i = 0; i < 366; i++){
 		fscanf(file, "%d %lf %lf %lf %lf %lf %lf", &day, &Sup [i], &Mich [i], &Huron [i], &Erie [i], &Ont [i], &Clr [i]);
	}
	while (loop){
		printf("\nPlease enter the question number you are trying to view, or enter 0 to exit: ");
		scanf("%d", &selection);
		switch(selection){
			case 0:
				loop = false;
				printf("Thank you for viewing my project");
				break;
		
			case 1:
				printf("Question 1 - Yearly Values of 2020\n----------------------------------------------------------------");
				questionOne(Sup, Mich, Huron, Erie, Ont, Clr);
				break;
		
			case 2:
				printf("Question 2 - Warmest/coldest & avove/below average\n----------------------------------------------------------------");
				questionTwo (Sup, Mich, Huron, Erie, Ont, Clr);
				break;
		
			case 3:
				printf("Question 3 - Warmest/coldest for each lake with dates\n----------------------------------------------------------------");
				questionThreeFour(Sup, Mich, Huron, Erie, Ont, Clr, 3);
				break;
		
			case 4:
				printf("Question 4 - Warmest/coldest of all lakes with dates\n----------------------------------------------------------------");
				questionThreeFour (Sup, Mich, Huron, Erie, Ont, Clr, 4);
				break;
		
			case 5:
				printf("Question 5 - Summer Averages\n----------------------------------------------------------------");
				questionFive (Sup, Mich, Huron, Erie, Ont, Clr);
				break;
		
			case 6:
				printf("Question 6 - Winter Averages\n----------------------------------------------------------------");
				questionSix (Sup, Mich, Huron, Erie, Ont, Clr);
				break;
		
			case 7:
				printf("Question 7 - Days You Can Swim in Each Lake\n----------------------------------------------------------------");
				questionSeven (Sup, Mich, Huron, Erie, Ont, Clr);
				break;
		
			case 8:
				printf("Question 8 - Days Each Lake is Frozen\n----------------------------------------------------------------");
				questionEight (Sup, Mich, Huron, Erie, Ont, Clr);
				break;
		
			case 9:
				printf("Question 9 - Yearly Values of 2019\n----------------------------------------------------------------");
				questionNine();
				break;
		
			default:
				printf("Invalid Input!");
				break;
		}
	}
}
