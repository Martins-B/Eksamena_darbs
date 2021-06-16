#include <iostream>
using namespace std;
int main(){
	string jautajumi [10] = {"1. Kura no funkcijam nenoapalo veselu skaitli uz leju?",
	  "2. Kadu rezultatu nevar iegut noapalojot 2.3 ar round() funkciju?",
	  "3. Kadu funkciju jaizmanto, lai noapalojot 4.6 var iegut 5.0?",
	  "4. Kura no definicijam neatbilst funkcijai max(x,y)?",
	  "5. Kurs funkcijas piemers atgriezis rezultatu 5?",
	  "6. Bez kura virsrakstfaila nav iespejams izmantot funkciju rand()?",
	  "7. Kurs funkcijas rand() piemers generes nejausu skaitli intervala no 0 lîdz 22?",
	  "8. Kura no funkcijam neatgriez skaitla moduli?",
	  "9. Kuru no pow() funkcijam jaizmanto, lai iegûtu rezultatu 16?",
	  "10. Kads skaitlis ietilps funkcijas rand()%15-4 generetaja intervla?"};
	
	string atbildesVarianti [10] = {"A)round()\nB)ceil()\nC)floor()\nD)rand()\n",
	"A)2.0\nB)3.0\nC)2.5\nD)3.3\n",
	"A)round()\nB)ceil()\nC)floor()\nD)trunc()\n",
	"A)max(x,y) - nosaka mazâko no 2 skaitïiem.\nB)max(x,y) - nosaka starpîbu starp x un y.\nC)max(x,y) - kâpina x pakâpç y.\nD)max(x,y) - nosaka lielâko vçrtîbu no 2 skaitïiem.\n",
	"A)max(5,2);\nB)max(5,6);\nC)min(5,9);\nD)min(5,3);\n",
	"A)<cstring>\nB)<cstdlib>\nC)<cmath>\nD)<ctime>\n",
	"A)rand()%23;\nB)rand()%23+0;\nC)rand()%1+22;\nD)rand()%1-22;\n",
	"A)sqrt(x)\nlog(x)\nabs(x)\ncos(x)\n",
	"A)pow(3,4)\nB)pow(2,4)\nC)pow(16,1)\nD)pow(8,2)\n",
	"A)-4\nB)8\nC)11\nD)-15\n"}; 

	int pareizoSkaits;
	string atbilde;
	  for(int i=0;i<10;i++){
	  	cout<<jautajumi[i]<<"\n";
	  	cout<<atbildesVarianti [i]<<"\n";
	  	cout<<"Tava atbilde:";
	  	cin>>atbilde;
	  }
	 
	 
}
