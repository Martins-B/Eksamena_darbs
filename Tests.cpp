#include <iostream>
#include <string>
using namespace std;
int main(){
	string jautajumi [10] = {"1. Kura no funkcijam nenoapalo veselu skaitli uz leju?",	// Izveido masîvu un aizpilda to ar testa jautâjumiem.
	  "2. Kadu rezultatu nevar iegut noapalojot 2.3 ar round() funkciju?",
	  "3. Kadu funkciju jaizmanto, lai noapalojot 4.6 var iegut 5.0?",
	  "4. Kura no definicijam neatbilst funkcijai max(x,y)?",
	  "5. Kurs funkcijas piemers atgriezis rezultatu 5?",
	  "6. Bez kura virsrakstfaila nav iespejams izmantot funkciju rand()?",
	  "7. Kurs funkcijas rand() piemers generes nejausu skaitli intervala no 0 lîdz 22?",
	  "8. Kura no funkcijam neatgriez skaitla moduli?",
	  "9. Kuru no pow() funkcijam jaizmanto, lai iegutu rezultatu 16?",
	  "10. Kads skaitlis ietilps funkcijas rand()%15-4 generetaja intervla?"};
	
	string atbildesVarianti [10] = {"A)round()\nB)ceil()\nC)floor()\nD)rand()\n",	// Izveido masîvu un aizpilda to ar testa jautâjumu atbilşu variantiem.
	"A)2.0\nB)3.0\nC)2.5\nD)3.3\n",
	"A)round()\nB)ceil()\nC)floor()\nD)trunc()\n",
	"A)max(x,y) - nosaka mazako no 2 skaitliem.\nB)max(x,y) - nosaka starpibu starp x un y.\nC)max(x,y) - kapina x pakape y.\nD)max(x,y) - nosaka lielako vertibu no 2 skaitliem.\n",
	"A)max(5,2);\nB)max(5,6);\nC)min(5,9);\nD)min(5,3);\n",
	"A)<cstring>\nB)<cstdlib>\nC)<cmath>\nD)<ctime>\n",
	"A)rand()%23;\nB)rand()%23+0;\nC)rand()%1+22;\nD)rand()%1-22;\n",
	"A)sqrt(x)\nlog(x)\nabs(x)\ncos(x)\n",
	"A)pow(3,4)\nB)pow(2,4)\nC)pow(16,1)\nD)pow(8,2)\n",
	"A)-4\nB)8\nC)11\nD)-15\n"}; 

	cout<<"Sveicinati testa, lai parbauditu Jusu zinasanas par matematiskajam funkcijam!\nLai atbildetu, ievadiet atbilzu varianta burtu.\nLai veicas!\n";	//Izvada paziòojumu, lai iepazîstinâtu ar testu.

	string atbilde [10];	//Izveido masîvu kurâ uzglabâs lietotâja ievadîtâs atzîmes.
	
	  for(int i=0;i<10;i++){	//Izveido ciklu ar skaitîtâju, kurğ nostrâdâs 10 reizes.
	  	cout<<"\n"<<jautajumi[i]<<"\n";	//Izvada jautâjumu.
	  	cout<<atbildesVarianti [i]<<"\n";	//Izvada atbilşu variantus.
	  	cout<<"Tava atbilde:";	//Prasa lietotâjam ievadît savu atbildi.
	  	cin>>atbilde[i];	//Nolasa lietotâja ievadîto atbildi
		}
		
	int pareizoSkaits=0;	//Izveido mainîgo, lai skaitîtu pareizi atbildçtus jautâjumus un pieğíir tam vçrtîbu 0.
	string nepareiziJautajumi [10];	//Izveido masîvu, kurâ uzglabâs nepareizi atbildçtus jautâjumus.
		
	if(atbilde[0]== "a" || atbilde[0]== "A" || atbilde[0]== "b" || atbilde[0]== "B" || atbilde[0]== "d" || atbilde[0]== "D"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[0]=jautajumi[0];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[1]=="c" || atbilde[1]=="C" || atbilde[1]=="b" || atbilde[1]=="B" || atbilde[1]=="d" || atbilde[1]=="D"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[1]=jautajumi[1];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[2]=="a" || atbilde[2]=="A" || atbilde[2]=="b" || atbilde[2]=="B"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[2]=jautajumi[2];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[3]=="a" || atbilde[3]=="A" || atbilde[3]=="b" || atbilde[3]=="B" || atbilde[3]=="c" || atbilde[3]=="C"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[3]=jautajumi[3];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[4]=="a" || atbilde[4]=="A" || atbilde[4]=="c" || atbilde[4]=="C"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[4]=jautajumi[4];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[5]=="b" || atbilde[5]=="B" || atbilde[5]=="d" || atbilde[5]=="D"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[5]=jautajumi[5];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[6]=="b" || atbilde[6]=="B" || atbilde[6]=="a" || atbilde[6]=="A"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[6]=jautajumi[6];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[7]=="a" || atbilde[7]=="A" || atbilde[7]=="b" || atbilde[7]=="B" || atbilde[7]=="d" || atbilde[7]=="D"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[7]=jautajumi[7];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[8]=="c" || atbilde[8]=="C" || atbilde[8]=="b" || atbilde[8]=="B"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[8]=jautajumi[8];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[9]=="a" || atbilde[9]=="A" || atbilde[9]=="b" || atbilde[9]=="B"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[9]=jautajumi[9];	//Ja lietotâjs atbildçjis nepareizi, tad ğo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	cout<<"\nApsveicu, Tu atbildeji pareizi uz "<<pareizoSkaits<<" jautajumiem!\n";	//Izvada mainîgo, kurâ saglabâts pareizi atbildçto jautâjumu skaits.
	cout<<"\nDiemzel, Tu atbildeji nepareizi uz siem jautajumiem: \n";	//Izvada paziòojumu par nepareizi atbildçtiem jautâjumiem.
	for (int i=0; i<10; i++){	//Izveido ciklu ar skaitîtâju, lai izvadîtu nepareizi atbildçtos jautâjumus.
		cout<<"\n"<<nepareiziJautajumi[i];	//Izvada masîvu, kurâ saglabâti jautâjumi uz kuriem atbildçts nepareizi.
	}
	system("pause"); //Neïauj programmai uzreiz aizvçrties pçc koda izpildes, lai lietotâjs redzçtu testa rezultâtus.
}
