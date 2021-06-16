#include <iostream>
#include <string>
#include <fstream>
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
	  
		string nepareiziJautajumi [10];
	
	string atbildesVarianti [10] = {"A)round()\nB)ceil()\nC)floor()\nD)rand()\n",
	"A)2.0\nB)3.0\nC)2.5\nD)3.3\n",
	"A)round()\nB)ceil()\nC)floor()\nD)trunc()\n",
	"A)max(x,y) - nosaka mazako no 2 skaitliem.\nB)max(x,y) - nosaka starpibu starp x un y.\nC)max(x,y) - kapina x pakape y.\nD)max(x,y) - nosaka lielako vertibu no 2 skaitliem.\n",
	"A)max(5,2);\nB)max(5,6);\nC)min(5,9);\nD)min(5,3);\n",
	"A)<cstring>\nB)<cstdlib>\nC)<cmath>\nD)<ctime>\n",
	"A)rand()%23;\nB)rand()%23+0;\nC)rand()%1+22;\nD)rand()%1-22;\n",
	"A)sqrt(x)\nlog(x)\nabs(x)\ncos(x)\n",
	"A)pow(3,4)\nB)pow(2,4)\nC)pow(16,1)\nD)pow(8,2)\n",
	"A)-4\nB)8\nC)11\nD)-15\n"}; 

	int pareizoSkaits=0;
	string atbilde [10];
	
	  for(int i=0;i<10;i++){
	  	cout<<"\n"<<jautajumi[i]<<"\n";
	  	cout<<atbildesVarianti [i]<<"\n";
	  	cout<<"Tava atbilde:";
	  	cin>>atbilde[i];
		}
		
	
	if(atbilde[0]== "a" || atbilde[0]== "A" || atbilde[0]== "b" || atbilde[0]== "B" || atbilde[0]== "d" || atbilde[0]== "D"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[0]=jautajumi[0];
	}
	
	if(atbilde[1]=="c" || atbilde[1]=="C" || atbilde[1]=="b" || atbilde[1]=="B" || atbilde[1]=="d" || atbilde[1]=="D"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[1]=jautajumi[1];
	}
	
	if(atbilde[2]=="a" || atbilde[2]=="A" || atbilde[2]=="b" || atbilde[2]=="B"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[2]=jautajumi[2];
	}
	
	if(atbilde[3]=="a" || atbilde[3]=="A" || atbilde[3]=="b" || atbilde[3]=="B" || atbilde[3]=="c" || atbilde[3]=="C"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[3]=jautajumi[3];
	}
	
	if(atbilde[4]=="a" || atbilde[4]=="A" || atbilde[4]=="c" || atbilde[4]=="C"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[4]=jautajumi[4];
	}
	
	if(atbilde[5]=="b" || atbilde[5]=="B" || atbilde[5]=="d" || atbilde[5]=="D"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[5]=jautajumi[5];
	}
	
	if(atbilde[6]=="b" || atbilde[6]=="B" || atbilde[6]=="a" || atbilde[6]=="A"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[6]=jautajumi[6];
	}
	
	if(atbilde[7]=="a" || atbilde[7]=="A" || atbilde[7]=="b" || atbilde[7]=="B" || atbilde[7]=="d" || atbilde[7]=="D"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[7]=jautajumi[7];
	}
	
	if(atbilde[8]=="c" || atbilde[8]=="C" || atbilde[8]=="b" || atbilde[8]=="B"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[8]=jautajumi[8];
	}
	
	if(atbilde[9]=="a" || atbilde[9]=="A" || atbilde[9]=="b" || atbilde[9]=="B"){
		pareizoSkaits++;
	}else{
		nepareiziJautajumi[9]=jautajumi[9];
	}
	
	cout<<"\nApsveicu, Tu atbildeji pareizi uz "<<pareizoSkaits<<" jautajumiem!\n";
	cout<<"\nDiemzel, Tu atbildeji nepareizi uz siem jautajumiem: \n";
	for (int i=0; i<10; i++){
		cout<<"\n"<<nepareiziJautajumi[i];
	}
}
