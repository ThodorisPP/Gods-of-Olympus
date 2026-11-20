#include <stdio.h> 

int main () {
	int x;
	int score;
	dias:
		score=0;
		printf ("posa paidia eixe o dias;\n");
		printf ("1)10\n2)30\n3)50\n4)100\n");
		scanf ("%d",&x);
		if  (x==4) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
	    
	    printf ("posa aderfia eixe o dias;\n");
		printf ("1)3\n2)5\n3)7\n4)10\n");
		scanf ("%d",&x);
		if  (x==2) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
		
		printf ("poia einai h mana tou dia;\n");
		printf ("1)rhea\n2)hra\n3)afroditi\n4)eleni\n");
		scanf ("%d",&x);
		if  (x==1) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
	    printf ("pou menei o dia;\n");
		printf ("1)crhth\n2)parnitha\n3)olympo\n4)likabito\n");
		scanf ("%d",&x);
		if  (x==3) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }	
		
		 printf ("poio einai to oplo tou;\n");
		printf ("1)h triena\n2)o keraunos\n3)to spathi\n4)h aspida\n");
		scanf ("%d",&x);
		if  (x==2) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
		
		
		if (score==5) {
			printf ("proxoras parakato\n");
		}
		else {
			printf ("try a\n");
			goto dias;
	   	}
		 poseidwnas:
			score=0;
			printf("Poios itan o Poseidonas;\n");
          printf("1)Theos tou polemou\n2)Theos thalassas\n3)Theos tou ouranou\n4)Theos tis agapis\n");
         scanf("%d",&x);
         if (x==2) {
           printf("correct\n");
         score++;
}
          else {
           printf("wrong\n");
}


           printf("Poio itan to symvolo tou Poseidona;\n");
printf("1)Keravnos\n2)Trident\n3)Toxo\n4)Aspida\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to zwo tou Poseidona;\n");
printf("1)Delfini\n2)Aetos\n3)Liontari\n4)Koukouvagia\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o aderfos tou Poseidona;\n");
printf("1)Ares\n2)Apollonas\n3)Dias\n4)Ermis\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Pou zouse o Poseidonas;\n");
printf("1)Sto vytho tis thalassas\n2)Ston Olymbo\n3)Ston Ourano\n4)Ston Adi\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}		
		if (score==5) {
			printf ("proxoras parakato\n");
		}
		else {
			printf ("try a\n");
			goto poseidwnas;
         
		 }
		 aris:
score=0;

printf("Poios itan o Aris;\n");
printf("1)Theos tis thalassas\n2)Theos tou polemou\n3)Theos tis agapis\n4)Theos tou ouranou\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to symvolo tou Ari;\n");
printf("1)Dory\n2)Trident\n3)Keravnos\n4)Toxo\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i mitera tou Ari;\n");
printf("1)Ira\n2)Afroditi\n3)Demetra\n4)Athina\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i adelfi tou Ari;\n");
printf("1)Artemi\n2)Eris\n3)Athina\n4)Estia\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o Romanos antistoixos tou Ari;\n");
printf("1)Dias\n2)Poseidonas\n3)Mars\n4)Apollonas\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto aris;
}
athina:
score=0;

printf("Poia itan i Athina;\n");
printf("1)Thea tis thalassas\n2)Thea tis sofias\n3)Thea tou polemou\n4)Thea tis agapis\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to iero zwo tis Athinas;\n");
printf("1)Aetos\n2)Delfini\n3)Koukouvagia\n4)Liontari\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o pateras tis Athinas;\n");
printf("1)Dias\n2)Poseidonas\n3)Aris\n4)Apollonas\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Apo poio meros tou Dia gennithike i Athina;\n");
printf("1)Apo tin koilia\n2)Apo to kefali\n3)Apo ta podia\n4)Apo ta xeria\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Me poion the? sygkroustike gia tin prostasia tis Athinas;\n");
printf("1)Aris\n2)Apollonas\n3)Poseidonas\n4)Ermis\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto athina;
}

ira:
score=0;

printf("Poia itan i Ira;\n");
printf("1)Thea tis sofias\n2)Thea tou polemou\n3)Thea tou gamou kai tis oikogeneias\n4)Thea tis thalassas\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o syzygos tis Iras;\n");
printf("1)Poseidonas\n2)Dias\n3)Aris\n4)Apollonas\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to iero zwo tis Iras;\n");
printf("1)Pagoni\n2)Koukouvagia\n3)Delfini\n4)Aetos\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i mitera tis Iras;\n");
printf("1)Rhea\n2)Demetra\n3)Afroditi\n4)Lito\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o pateras tis Iras;\n");
printf("1)Kronos\n2)Ouranos\n3)Apollonas\n4)Hermis\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto ira;
}

apollonas:
score=0;

printf("Poios itan o Apollonas;\n");
printf("1)Theos tou polemou\n2)Theos tis thalassas\n3)Theos tis mousikis kai tou fotos\n4)Theos tou gamou\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to symvolo tou Apollona;\n");
printf("1)Lyra\n2)Trident\n3)Dory\n4)Aspida\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i adelfi tou Apollona;\n");
printf("1)Afroditi\n2)Artemi\n3)Athina\n4)Ira\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o pateras tou Apollona;\n");
printf("1)Poseidonas\n2)Dias\n3)Aris\n4)Kronos\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Se poio meros gennithike o Apollonas;\n");
printf("1)Kriti\n2)Athina\n3)Dilos\n4)Sparti\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto apollonas;
}

afroditi:
score=0;

printf("Poia itan i Afroditi;\n");
printf("1)Thea tis sofias\n2)Thea tis agapis kai tis omorfias\n3)Thea tou polemou\n4)Thea tis thalassas\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o syzygos tis Afroditis;\n");
printf("1)Aris\n2)Apollonas\n3)Ifestos\n4)Dias\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Apo pou gennithike i Afroditi;\n");
printf("1)Apo ton afrou tis thalassas\n2)Apo ton Olymbo\n3)Apo ena dentro\n4)Apo ton ourano\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to iero zwo tis Afroditis;\n");
printf("1)Aetos\n2)Peristeri\n3)Liontari\n4)Koukouvagia\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf ("Poios itan o gios tis Afroditis kai tou Ari\n");
printf("1)Eros\n2)Apollonas\n3)Ermis\n4)Dionysos\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto afroditi;
}

artemis:
score=0;

printf("Poia itan i Artemi;\n");
printf("1)Thea tis thalassas\n2)Thea tou kynigiou\n3)Thea tis sofias\n4)Thea tis agapis\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to iero zwo tis Artemidos;\n");
printf("1)Liontari\n2)Delfini\n3)Elafi\n4)Aetos\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o pateras tis Artemidos;\n");
printf("1)Poseidonas\n2)Dias\n3)Aris\n4)Apollonas\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o adelfos tis Artemidos;\n");
printf("1)Apollonas\n2)Ermis\n3)Ares\n4)Dionysos\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf ("Me poio antikeimeno apeikonizotan synithos i Artemi\n");
printf("1)Trident\n2)Toxo kai velia\n3)Lyra\n4)Keravnos\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto artemis;
}

ermis:
score=0;

printf("Poios itan o Ermis;\n");
printf("1)Theos tis thalassas\n2)Theos tou polemou\n3)Theos tou emporiou kai ton taxidioton\n4)Theos tis sofias\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to symvolo tou Ermi;\n");
printf("1)Kerykeio\n2)Trident\n3)Toxo\n4)Aspida\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o pateras tou Ermi;\n");
printf("1)Poseidonas\n2)Dias\n3)Aris\n4)Apollonas\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i mitera tou Ermi\n");
printf("1)Ira\n2)Maia\n3)Afroditi\n4)Demetra\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Ti rolo eixe o Ermis ston Olymbo;\n");
printf("1)Aggelos ton theon\n2)Theos tis georgias\n3)Theos tis thalassas\n4)Theos tou polemou\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto ermis;
}

ifaistos:
score=0;

printf("Poios itan o Ifaistos;\n");
printf("1)Theos tou polemou\n2)Theos tis fotias kai tis metallourgias\n3)Theos tis thalassas\n4)Theos tis sofias\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i mitera tou Ifaistou;\n");
printf("1)Afroditi\n2)Athina\n3)Ira\n4)Demetra\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i syzygos tou Ifaistou;\n");
printf("1)Afroditi\n2)Artemi\n3)Ira\n4)Estia\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to symvolo tou Ifaistou;\n");
printf("1)Trident\n2)Sfyri kai akmonas\n3)Toxo\n4)Keravnos\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Pou eixe to ergastiri tou Ifaistou\n");
printf("1)Ston Olymbo\n2)Mesa sta ifaisteia kai sta iifaisteia\n3)Mesa se ifaisteia volkania\n4)Sti thalassa\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto ifaistos;
}

dimitra:
score=0;

printf("Poia itan i Dimitra;\n");
printf("1)Thea tis georgias kai tis syggomidi_s\n2)Thea tou polemou\n3)Thea tis thalassas\n4)Thea tis sofias\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i kori tis Dimitras;\n");
printf("1)Athina\n2)Persefoni\n3)Artemi\n4)Afroditi\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o pateras tis Dimitras;\n");
printf("1)Poseidonas\n2)Kronos\n3)Dias\n4)Apollonas\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to iero zwo tis Dimitras\n");
printf("1)Aetos\n2)Fidi\n3)Delfini\n4)Gourouni\n");
scanf("%d",&x);
if (x==4) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Ti prosfere i Dimitra stous anthropous;\n");
printf("1)Tin fotia\n2)Tin kalliergeia kai tin kalliergeia sitariou\n3)Ton polemo\n4)Ti mousiki\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto dimitra;
}

dionisos:
score=0;

printf("Poios itan o Dionysos;\n");
printf("1)Theos tou polemou\n2)Theos tis thalassas\n3)Theos tou krasioy kai tis diaskedasis\n4)Theos tis sofias\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to iero zwo tou Dionysou;\n");
printf("1)Aetos\n2)Panthiras\n3)Koukouvagia\n4)Delfini\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poios itan o pateras tou Dionysou;\n");
printf("1)Dias\n2)Poseidonas\n3)Kronos\n4)Apollonas\n");
scanf("%d",&x);
if (x==1) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poia itan i mitera tou Dionysou;\n");
printf("1)Ira\n2)Maia\n3)Semeli\n4)Demetra\n");
scanf("%d",&x);
if (x==3) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


printf("Poio itan to symvolo tou Dionysou;\n");
printf("1)Trident\n2)Thyrsos\n3)Keravnos\n4)Dory\n");
scanf("%d",&x);
if (x==2) {
    printf("correct\n");
    score++;
}
else {
    printf("wrong\n");
}


if (score==5) {
    printf("proxoras parakato\n");
}
else {
    printf("try again\n");
    goto dionisos;
}
		 
		 
		 return 0;
		 
		 }
		 
		 

