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
	  "7. Kurs funkcijas rand() piemers generes nejausu skaitli intervala no 0 lidz 22?",
	  "8. Kura no funkcijam neatgriez skaitla moduli?",
	  "9. Kuru no pow() funkcijam jaizmanto, lai iegutu rezultatu 16?",
	  "10. Kads skaitlis ietilps funkcijas rand()%15-4 generetaja intervla?"};
	
	string atbildesVarianti [10] = {"A)round()\nB)ceil()\nC)floor()\nD)rand()\n",	// Izveido masîvu un aizpilda to ar testa jautâjumu atbilþu variantiem.
	"A)2.0\nB)3.0\nC)2.5\nD)3.3\n",
	"A)round()\nB)ceil()\nC)floor()\nD)trunc()\n",
	"A)max(x,y) - nosaka mazako no 2 skaitliem.\nB)max(x,y) - nosaka starpibu starp x un y.\nC)max(x,y) - kapina x pakape y.\nD)max(x,y) - nosaka lielako vertibu no 2 skaitliem.\n",
	"A)max(5,2);\nB)max(5,6);\nC)min(5,9);\nD)min(5,3);\n",
	"A)<cstring>\nB)<cstdlib>\nC)<cmath>\nD)<ctime>\n",
	"A)rand()%23;\nB)rand()%23+0;\nC)rand()%1+22;\nD)rand()%1-22;\n",
	"A)sqrt(x)\nB)log(x)\nC)abs(x)\nD_cos(x)\n",
	"A)pow(3,4)\nB)pow(2,4)\nC)pow(16,1)\nD)pow(8,2)\n",
	"A)-4\nB)8\nC)11\nD)-15\n"}; 

	cout<<"Sveicinati testa, lai parbauditu Jusu zinasanas par matematiskajam funkcijam, Jums bus jaatbild uz 10 jautajumiem!\nJautajumiem ir vairakas pareizas atbildes.\nLai atbildetu, ievadiet atbilzu variantu burtus, pimeram, AB vai BCA. Ievadiet lielos burtus.\nLai veicas!\n";	//Izvada paziòojumu, lai iepazîstinâtu ar testu.

	string atbilde [10];	//Izveido masîvu kurâ uzglabâs lietotâja ievadîtâs atzîmes.
	
	  for(int i=0;i<10;i++){	//Izveido ciklu ar skaitîtâju, kurð nostrâdâs 10 reizes.
	  	cout<<"\n"<<jautajumi[i]<<"\n";	//Izvada jautâjumu.
	  	cout<<atbildesVarianti [i]<<"\n";	//Izvada atbilþu variantus.
	  	cout<<"Tava atbilde:";	//Prasa lietotâjam ievadît savu atbildi.
	  	cin>>atbilde[i];	//Nolasa lietotâja ievadîto atbildi
		}
		
	int pareizoSkaits=0;	//Izveido mainîgo, lai skaitîtu pareizi atbildçtus jautâjumus un pieðíir tam vçrtîbu 0.
	string nepareiziJautajumi [10];	//Izveido masîvu, kurâ uzglabâs nepareizi atbildçtus jautâjumus.
		
	if(atbilde[0]== "ABD"|| atbilde[0]== "ADB" || atbilde[0]== "BAD" || atbilde[0]== "BDA" || atbilde[0]== "DAB" || atbilde[0]== "DBA"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[0]=jautajumi[0];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[1]=="CDB" || atbilde[1]=="CBD" || atbilde[1]=="DCB" || atbilde[1]=="DBC"|| atbilde[1]== "BCA" || atbilde[1]== "BAC"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[1]=jautajumi[1];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[2]=="AB" || atbilde[2]=="BA"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[2]=jautajumi[2];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[3]=="ABC" || atbilde[3]=="ACB" || atbilde[3]=="BAC" || atbilde[3]=="BCA" || atbilde[3]=="CAB" || atbilde[3]=="CBA"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[3]=jautajumi[3];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[4]=="AC" || atbilde[4]=="CA"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[4]=jautajumi[4];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[5]=="BD" || atbilde[5]=="DB"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[5]=jautajumi[5];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[6]=="BA" || atbilde[6]=="AB"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[6]=jautajumi[6];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[7]=="ABD" || atbilde[7]=="ADB" || atbilde[7]=="BAD" || atbilde[7]=="BDA" || atbilde[7]=="DBA" || atbilde[7]=="DAB"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[7]=jautajumi[7];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[8]=="CB" || atbilde[8]=="BC"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[8]=jautajumi[8];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	
	if(atbilde[9]=="AB" || atbilde[9]=="BA"){	//Pârbauda vai lietotâja ievadîta atbilde sakrît ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietotâjs atbildçjis pareizi, tad palielina pareizi atbildçto jautâjumu skaitu par 1.
	}else{
		nepareiziJautajumi[9]=jautajumi[9];	//Ja lietotâjs atbildçjis nepareizi, tad ðo jautâjumu pievieno masîvam, kurâ uzglabâ nepareizi atbildçtos jautâjumus.
	}
	cout<<"___________________________________________________________________\n";	//Izvada lîniju, lai uzlabotu grafisko saskarsni.
	cout<<"\nApsveicu, Tu atbildeji pareizi uz "<<pareizoSkaits<<" no 10 jautajumiem!\n";	//Izvada mainîgo, kurâ saglabâts pareizi atbildçto jautâjumu skaits.
	cout<<"\nDiemzel, Tu atbildeji nepareizi uz siem jautajumiem: \n\n";	//Izvada paziòojumu par nepareizi atbildçtiem jautâjumiem.
	for (int i=0; i<10; i++){	//Izveido ciklu ar skaitîtâju, lai izvadîtu nepareizi atbildçtos jautâjumus.
		if(nepareiziJautajumi[i]==""){	//Pârbauda vai masîva elements nav tukðs.
		}else cout<<nepareiziJautajumi[i]<<"\n";	//Izvada tikai tos masîva elementus, kuri nav tukði.
	}
	cout<<"\n"; //Izvada papildus rindiòu, lai atdalîtu jautâjumus no programmas beigâm.
	system("pause"); //Neïauj programmai uzreiz aizvçrties pçc koda izpildes, lai lietotâjs redzçtu testa rezultâtus.
}
