#include <iostream>
#include <string>
using namespace std;
int main(){
	string jautajumi [10] = {"1. Kura no funkcijam nenoapalo veselu skaitli uz leju?",	// Izveido mas�vu un aizpilda to ar testa jaut�jumiem.
	  "2. Kadu rezultatu nevar iegut noapalojot 2.3 ar round() funkciju?",
	  "3. Kadu funkciju jaizmanto, lai noapalojot 4.6 var iegut 5.0?",
	  "4. Kura no definicijam neatbilst funkcijai max(x,y)?",
	  "5. Kurs funkcijas piemers atgriezis rezultatu 5?",
	  "6. Bez kura virsrakstfaila nav iespejams izmantot funkciju rand()?",
	  "7. Kurs funkcijas rand() piemers generes nejausu skaitli intervala no 0 l�dz 22?",
	  "8. Kura no funkcijam neatgriez skaitla moduli?",
	  "9. Kuru no pow() funkcijam jaizmanto, lai iegutu rezultatu 16?",
	  "10. Kads skaitlis ietilps funkcijas rand()%15-4 generetaja intervla?"};
	
	string atbildesVarianti [10] = {"A)round()\nB)ceil()\nC)floor()\nD)rand()\n",	// Izveido mas�vu un aizpilda to ar testa jaut�jumu atbil�u variantiem.
	"A)2.0\nB)3.0\nC)2.5\nD)3.3\n",
	"A)round()\nB)ceil()\nC)floor()\nD)trunc()\n",
	"A)max(x,y) - nosaka mazako no 2 skaitliem.\nB)max(x,y) - nosaka starpibu starp x un y.\nC)max(x,y) - kapina x pakape y.\nD)max(x,y) - nosaka lielako vertibu no 2 skaitliem.\n",
	"A)max(5,2);\nB)max(5,6);\nC)min(5,9);\nD)min(5,3);\n",
	"A)<cstring>\nB)<cstdlib>\nC)<cmath>\nD)<ctime>\n",
	"A)rand()%23;\nB)rand()%23+0;\nC)rand()%1+22;\nD)rand()%1-22;\n",
	"A)sqrt(x)\nlog(x)\nabs(x)\ncos(x)\n",
	"A)pow(3,4)\nB)pow(2,4)\nC)pow(16,1)\nD)pow(8,2)\n",
	"A)-4\nB)8\nC)11\nD)-15\n"}; 

	cout<<"Sveicinati testa, lai parbauditu Jusu zinasanas par matematiskajam funkcijam!\nLai atbildetu, ievadiet atbilzu varianta burtu.\nLai veicas!\n";	//Izvada pazi�ojumu, lai iepaz�stin�tu ar testu.

	string atbilde [10];	//Izveido mas�vu kur� uzglab�s lietot�ja ievad�t�s atz�mes.
	
	  for(int i=0;i<10;i++){	//Izveido ciklu ar skait�t�ju, kur� nostr�d�s 10 reizes.
	  	cout<<"\n"<<jautajumi[i]<<"\n";	//Izvada jaut�jumu.
	  	cout<<atbildesVarianti [i]<<"\n";	//Izvada atbil�u variantus.
	  	cout<<"Tava atbilde:";	//Prasa lietot�jam ievad�t savu atbildi.
	  	cin>>atbilde[i];	//Nolasa lietot�ja ievad�to atbildi
		}
		
	int pareizoSkaits=0;	//Izveido main�go, lai skait�tu pareizi atbild�tus jaut�jumus un pie��ir tam v�rt�bu 0.
	string nepareiziJautajumi [10];	//Izveido mas�vu, kur� uzglab�s nepareizi atbild�tus jaut�jumus.
		
	if(atbilde[0]== "a" || atbilde[0]== "A" || atbilde[0]== "b" || atbilde[0]== "B" || atbilde[0]== "d" || atbilde[0]== "D"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[0]=jautajumi[0];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[1]=="c" || atbilde[1]=="C" || atbilde[1]=="b" || atbilde[1]=="B" || atbilde[1]=="d" || atbilde[1]=="D"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[1]=jautajumi[1];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[2]=="a" || atbilde[2]=="A" || atbilde[2]=="b" || atbilde[2]=="B"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[2]=jautajumi[2];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[3]=="a" || atbilde[3]=="A" || atbilde[3]=="b" || atbilde[3]=="B" || atbilde[3]=="c" || atbilde[3]=="C"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[3]=jautajumi[3];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[4]=="a" || atbilde[4]=="A" || atbilde[4]=="c" || atbilde[4]=="C"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[4]=jautajumi[4];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[5]=="b" || atbilde[5]=="B" || atbilde[5]=="d" || atbilde[5]=="D"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[5]=jautajumi[5];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[6]=="b" || atbilde[6]=="B" || atbilde[6]=="a" || atbilde[6]=="A"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[6]=jautajumi[6];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[7]=="a" || atbilde[7]=="A" || atbilde[7]=="b" || atbilde[7]=="B" || atbilde[7]=="d" || atbilde[7]=="D"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[7]=jautajumi[7];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[8]=="c" || atbilde[8]=="C" || atbilde[8]=="b" || atbilde[8]=="B"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[8]=jautajumi[8];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	if(atbilde[9]=="a" || atbilde[9]=="A" || atbilde[9]=="b" || atbilde[9]=="B"){	//P�rbauda vai lietot�ja ievad�ta atbilde sakr�t ar pareizo atbildi.
		pareizoSkaits++;	// Ja lietot�js atbild�jis pareizi, tad palielina pareizi atbild�to jaut�jumu skaitu par 1.
	}else{
		nepareiziJautajumi[9]=jautajumi[9];	//Ja lietot�js atbild�jis nepareizi, tad �o jaut�jumu pievieno mas�vam, kur� uzglab� nepareizi atbild�tos jaut�jumus.
	}
	
	cout<<"\nApsveicu, Tu atbildeji pareizi uz "<<pareizoSkaits<<" jautajumiem!\n";	//Izvada main�go, kur� saglab�ts pareizi atbild�to jaut�jumu skaits.
	cout<<"\nDiemzel, Tu atbildeji nepareizi uz siem jautajumiem: \n";	//Izvada pazi�ojumu par nepareizi atbild�tiem jaut�jumiem.
	for (int i=0; i<10; i++){	//Izveido ciklu ar skait�t�ju, lai izvad�tu nepareizi atbild�tos jaut�jumus.
		cout<<"\n"<<nepareiziJautajumi[i];	//Izvada mas�vu, kur� saglab�ti jaut�jumi uz kuriem atbild�ts nepareizi.
	}
	system("pause"); //Ne�auj programmai uzreiz aizv�rties p�c koda izpildes, lai lietot�js redz�tu testa rezult�tus.
}
