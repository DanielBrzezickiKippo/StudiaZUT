#include "pch.h"
#include <iostream>

int get_values(int t[10], int elements) {
	int x;
	printf_s("Podaj 10 cyfr:\n");
	for (int i = 0; i < elements; i++) {
		scanf_s("%d", &x);
		t[i] = x;
	}

	return 0;
}

int show_values(int t[10], int elements) {
	for (int i = 0; i < elements; i++) {
		printf_s("%d. %d\n", i+1, t[i]);
	}

	return 0;
}

int add(int t[10], int elements) {
	int sum = 0;
	for (int i = 0; i < elements; i++) {
		sum += t[i];
	}

	return sum;
}


int average(int t[10], int elements) {
	return add(t, elements) /elements;
}

int min(int t[10], int elements) {
	int min = t[0];
	for (int i = 0; i < elements; i++) {
		if (min > t[i]) {
			min = t[i];
		}
	}

	return min;
}
int max(int t[10], int elements) {
	int max = t[0];
	for (int i = 0; i < elements; i++) {
		if (max < t[i]) {
			max = t[i];
		}
	}

	return max;
}

int add_tabs(int t1[10], int t2[10], int t3[10],int elements) {
	for (int i = 0; i < elements; i++) {
		t3[i] = t1[i] + t2[i];
	}

	return 0;
}

int main()
{
	int tab[10];
	int elements = 10;
	int tab2[10];
	for (int i = 0; i < elements; i++) {
		tab[i] = tab2[i] = 12-i;
	}

	int tab3[10];

	//get_values(tab, elements);
	show_values(tab, elements);
	printf_s("Dodawanie: %d\n", add(tab, elements));
	printf_s("Srednia: %d\n", average(tab, elements));
	printf_s("Min: %d\n", min(tab, elements));
	printf_s("Max: %d\n", max(tab, elements));

	add_tabs(tab, tab2, tab3, elements);
	show_values(tab3, elements);
}

<!DOCTYPE HTML>
<HTML lang="pl">
	<HEAD>
		<META charset="UTF-8">
		<style>
			HTML{
			  background-image: url("background.jpg");
			  background-repeat: no-repeat;
			  background-attachment: fixed; 
			  background-size: cover;
			  font-family: Arial;
			}
			BODY{
				width: 970px;
				padding: 25px;
				margin-top: 25px;
				margin-bottom: 25px;
				margin-left: auto;
				margin-right: auto;
				background: rgba(255,255,255,0.7);
				}
			div{
				background-image:url("baner1.jpg");
				width: 970px;
				height: 470px;
				background-size: cover;
				text-align: center;
				margin:auto;
			}
			p{
				font-size: 14pt;
				text-align: left;
				margin-bottom: 10px;
				margin-top: 0px;
				margin-left: 0px;
				margin-right: 0px;
			}
			h5{
				font-size:65px;
				padding-top:230px;
				margin:0 auto;
				color: white;
			}
			h1{
				font-size: 32pt;
				font-weight: bold;
				margin-top: 30px;
				margin-bottom: 30px;
			}
			#ustawienie{
				width: 640px;
				margin-top: 10px;
				margin-bottom: 20px;
				display: block;
				margin:0 auto;
			}
			h2{
				font-size: 22pt;
				font-weight: bold;
				margin-top: 20px;
				margin-bottom: 20px;
			}
			 
		</style>
		<title>Tytul strony</title>
	</HEAD>
	<BODY>
			<div><h5>BANER</h5></div>
			<H1>Czym jest Breakdance?</H1>
			<p>Breakdance (inne nazwy: break, breaking, bboying, breakdancing) ??? rodzaj specyficznego i unikatowego ta??ca z du???? liczb?? element??w si??owo-sprawno??ciowych, oraz krok??w wykonywanych ???w parterze???, czyli r??kami i nogami (a cz??sto ca??ym cia??em) na ziemi. Osoba ta??cz??ca breakdance to b-boy/biboj (m????czyzna) lub b-girl/bigerl (kobieta). Jest to skr??t od s??owa break-boy/breakdance-boy. Po raz pierwszy s??owa "b-boy" u??y?? DJ Kool Herc na jednej z mi??dzyblokowych imprez (block party/street jam). Taniec ten narodzi?? si?? w latach 70. w Bronksie, dzielnicy Nowego Jorku i jest on jednym z czterech podstawowych i nieod????cznych element??w kultury hip hop obok rapu, DJingu (turntablismu) oraz graffiti[1].</p>
			<H2>Muzyka</H2>
			<p>Pierwotnie muzyk??, do kt??rej ta??czyli b-boye, by??a muzyka funk oraz soul puszczana na imprezach jako muzyka rozrywkowa. Z czasem DJe zacz??li zap??tla?? momenty, w kt??rych lecia??a sama perkusja (beat), co sta??o si?? podwalin?? i inspiracj?? dla gatunku breakbeat, b??d??cego najbli??ej ???idealnej??? muzyki do ta??ca. Z g??o??nik??w przeno??nych magnetofon??w w latach 80. oraz 90. lecia?? tak??e hip-hop oraz electro. Te w??a??nie gatunki (funk, soul, breakbeat, hip-hop, electro) uwa??ane s?? za muzyk?? do ta??czenia breakdance, co nie znaczy, ??e ka??dy utw??r posiadaj??cy cechy danego gatunku jest muzyk?? do breakdance. Np. wsp????czesnym odmianom tych gatunk??w (szczeg??lnie hip-hopu) bardzo daleko do ich pierwowzor??w, g????wnie dzi??ki nastawieniu na masowego odbiorc??. Arty??ci tworz??cy stricte b-boyowy breakbeat, to m.in. DJ Def Cut, DJ Zeb Roc Ski, DJ Kid Stretch, Esone, DJ Nas'D, DJ Woodoo, czy DJ M@R.</p>
			<img src="photo.jpg" alt="Smiley face" id="ustawienie" height="300" width="640">
			<H2>Pocz??tki</H2>
			<p>Breakdance mia?? sw??j pocz??tek w dzielnicy Bronx, w Nowym Jorku. Powsta?? on od tzw. Uprock Battles (bitwy uprockowe) uprawianych przez tamtejsze gangi. Uprock (rocking) polega pokazywaniu r????nych gest??w i p??z pod adresem przeciwnika (np. markowaniu uderze??, kopni???? itp., by??y one g????wnie improwizowane). Uprock nast??pnie przekszta??ci?? si?? w toprock (du???? inspiracj?? by?? taniec i muzyka Jamesa Browna). P????niej powsta??y kroki w parterze (footwork/floorrock) i szybsze, skomplikowane figury (powermoves). W??a??ciwa forma breaka to zas??uga g????wnie grup Rock Steady Crew i New York City Breakers. W Europie du???? popularno???? przyni??s?? ta??cu film ???Beat Street??? z 1984 r., na kt??rym uwieczniona jest m.in. bitwa wspomnianych dw??ch legendarnych ekip.</p>
			<H2>Pocz??tki w Polsce</H2>
			<p>Pierwsz?? p???? profesjonaln?? grup?? breakow?? by??a Szczeci??ska grupa Be-Bop, oraz pochodz??ca z Gniezna Flash Boys[2] za??o??ona oko??o roku 1986 w dwa lata po wielkim sukcesie Beat Street. Pierwsze mistrzostwa Polski odby??y si?? ju?? w roku 1985 w Piotrkowie Trybunalskim. Grupa Be-Bop wyrusza na drug?? edycj?? turnieju gdzie dominuje i zdobywa pierwsze miejsce. Po rozpadzie grupy Be-bop w Szczecinie powsta??a nowa grupa na podbudowie starej: Broken Steps. Ju?? po czasach ???wielkiej mody na breakdance??? w roku 1987 zostaje za??o??ona we W??oc??awku grupa Scrap Beat, kt??rej to liderem i za??o??ycielem jest Robert Niezna??ski. Grupa przez ponad dekad?? wyznacza??a standardy w technicznym opanowaniu breaka, g????wnie figur power-moves. W p????niejszym okresie swojej dzia??alno??ci grupa wy????czy??a si?? z aktywnego udzia??u w ??yciu ???podziemnej??? sceny breakdance i skupi??a si?? na dzia??alno??ci komercyjnej</p>
			<H2>Rywalizacja</H2>
			<p>Nieod????cznym elementem kultury b-boyingu s?? specyficzne formy rywalizacji w ta??cu. Klasyczne pokazy solowe lub grupowe oceniane przez s??dzi??w, tak charakterystyczne dla wszystkich ta??c??w nowoczesnych, w breakdance odchodz?? powoli do lamusa.</p>
	</BODY>
</HTML>
