#include <iostream>
using namespace std;


int main(){

//PRIMERA PREGUNTA "COM EM DIC?"	
cout<< "\nHo hem poses un 4 o et hackejo la vida, advertit estas\n";


cout<<"\n\n#     # ####### #          #    ### ### ###\n"; 
cout<<"#     # #     # #         # #   ### ### ###    \n";
cout<<"#     # #     # #        #   #  ### ### ###    \n";
cout<<"####### #     # #       #     #  #   #   #     \n";
cout<<"#     # #     # #       #######                \n";
cout<<"#     # #     # #       #     # ### ### ###    \n";
cout<<"#     # ####### ####### #     # ### ### ###    \n";





cout<<"\n\n\n\n######  ####### #     # #     # ### #     #  #####  #     # #######\n"; 
cout<<"#     # #       ##    # #     #  #  ##    # #     # #     #    #           \n";
cout<<"#     # #       # #   # #     #  #  # #   # #       #     #    #           \n";
cout<<"######  #####   #  #  # #     #  #  #  #  # #  #### #     #    #           \n";
cout<<"#     # #       #   # #  #   #   #  #   # # #     # #     #    #           \n";
cout<<"#     # #       #    ##   # #    #  #    ## #     # #     #    #           \n";
cout<<"######  ####### #     #    #    ### #     #  #####   #####     #           \n";


cout<<"\n   #    #          #     # ####### #     #    ####### #######  #####  #######\n"; 
cout<<"  # #   #          ##   ## #       #     #       #    #       #     #    #     \n";
cout<<" #   #  #          # # # # #       #     #       #    #       #          #     \n";
cout<<"#     # #          #  #  # #####   #     #       #    #####    #####     #     \n";
cout<<"####### #          #     # #       #     #       #    #             #    #     \n";
cout<<"#     # #          #     # #       #     #       #    #       #     #    #     \n";
cout<<"#     # #######    #     # #######  #####        #    #######  #####     #     \n";


cout<<"\n1)Com em dic?\n";
int variable1;
int variable2;

cout <<"Escriu el meu nom (Manel=1, Oriol=2, Enric=3 i Arnau=4)\n";
cin >>variable1;

if(variable1 == 1 || variable1 == 2 || variable1 == 4){
	cout<<"Ho has fet malament\n\n";
	variable2 --;
	
	cout<< "La teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #     \n";
cout<<"  # #      \n";
cout<<"   #       \n";
cout<<"  # #      \n";
cout<<" #   #     \n";
cout<<"#     #    \n";
}	
	else if(variable1 == 3){
	cout<<"Ho has fet be\n\n";
	variable2 ++;
		
	cout<< "La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}	
 
else if (variable1 >= 5){
 cout<<"Numero massa gran\n";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
 cout<<"\n\n#     #\n"; 
cout<<" #   #      \n";
cout<<"  # #       \n";
cout<<"   #        \n";
cout<<"  # #       \n";
cout<<" #   #      \n";
cout<<"#     #     \n";
 }
 
else {
	variable1 --;
}
	
//SEGONA PREGUNTA "COM ES DIU EL MEU GOS?"	
	
cout<< "\n\n2)Com es deiu el meu gos?\n";

cout<< "Escriu el seu nom (Boliche=1, Jack=2, Ida=3 i Flaqui=4)\n";
cin>>variable1;


if(variable1 == 1 || variable1 == 3 || variable1 == 4){
	cout<<"Ho has fet malament\n\n";
	variable2 --;
	cout<< "El valor de la variable es:" << variable2;
	
cout << "\n\n#     #\n"; 
cout << " #   #  \n";
cout << "  # #   \n";
cout << "   #    \n";
cout << "  # #   \n";
cout << " #   #  \n";
cout << "#     # \n";
}	

else if(variable1 == 2){
	cout<<"Ho has fet be\n\n";
	
	variable2 ++;
	cout << "La teva puntuacio es:" << variable2;	
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"Numero massa gran\n";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }

else {
	variable1 --;
}

//TERCERA PREGUNTA "DE QUIN COLOR SON ELS MEUS ULLS?"

cout << "\n\n3)De quin color tinc els ulls?\n";

cout << "Escriu el color (Marro=1, Verd=2, Balus=3 i Verd/Marro=4\n";
cin >> variable1;

if (variable1 == 1 || variable1 == 2 || variable1==3){
	cout<<"Ho has fet malament\n\n";
	variable2 --;
	cout<<"La teva puntuacio es:\n" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}

else if (variable1 == 4){
	cout << "Ho has fet be\n\n";
	variable2 ++;
	cout << "La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"Numero massa gran";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 
else {
	variable1 --;
}

//QUARTA PREGUNTA "DE QUIN COLOR TINC EL PEL?"

cout << "\n\n4)De quin color tinc el pel?\n";

cout << "Escriu el color (Castany=1, Negre=2, Ros=3 i No tinc pel=4)\n";
cin >> variable1;

if (variable1==1){
	cout << "Ho has fet be\n\n";
	variable2 ++;
	cout << "La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}
	
else if (variable1 == 2 || variable1 == 3){
	cout << "Ho has fet malament\n\n";
	variable2 --;
	cout << "La teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}
else if (variable1 = 4){


cout<<"\n     #   ##           #   ##\n";   
cout<<"     #  #  #          #  #  # \n"; 
cout<<"     # #    #         # #    # \n";
cout<<"     # ######         # ###### \n";
cout<<"#    # #    #    #    # #    # \n";
cout<<" ####  #    #     ####  #    # \n";


cout<<"\n ####  #    # # #    #   ##       ####  #####    ##    ####  #   ##\n";   
cout<<"#    # #    # # ##   #  #  #     #    # #    #  #  #  #    # #  #  # \n"; 
cout<<"#    # #    # # # #  # #    #    #      #    # #    # #      # #    # \n";
cout<<"#  # # #    # # #  # # ######    #  ### #####  ###### #      # ###### \n";
cout<<"#   #  #    # # #   ## #    #    #    # #   #  #    # #    # # #    # \n";
cout<<" ### #  ####  # #    # #    #     ####  #    # #    #  ####  # #    # \n";

variable2 --;
cout<<"\nLa teva puntuacio es:" <<variable2;
}

else if (variable1>=5){
 cout<<"Numero massa gran";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 	
else {
	variable1 --;
}

//CINQUENTA PREGUNTA "QUAN MEDEIXO?"

cout << "\n\n5)Quina es la meva alçada?\n";

cout << "Escriu la alçada (1.60m=1, 1.63m=2, 1.70m=3 i 1.65m=4)\n";
cin >> variable1;

if (variable1 == 1 || variable1 == 2 || variable1 == 3){
	cout << "Ho has fet malament\n\n";
	variable2 --;
	cout << "La teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}

else if (variable1 == 4){
	cout << "Ho has fet be\n\n";
	variable2 ++;
	cout << "La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"\nNumero massa gran";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 
else {
	variable1 --;
}

//SEXTA PREGUNTA "QUIN ES EL MEU COLOR PREFERIT?"

cout << "\n\n6)Quin es el meu color preferit?\n";

cout << "Escriu el color (Verd=1, Negre=2, Blau=3 i Groc=4)\n";
cin >> variable1;

if (variable1 == 1 || variable1 == 3 || variable1 == 4){
	cout<<"Ho has fet malament\n\n";
	variable2 --;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}

else if (variable1==2){
	cout<<"Ho has fet be\n\n";
	variable2 ++;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"\nNumero massa gran";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 
else {
	variable1 --;
}

//SETENA PREGUNTA "FINS QUINA PROFUNDITAT MAXIMA HAS BAIXAT EN EL SUBMARINISME?"

cout<<"\n\n7)Fins quina profunditat maxima he baixat en el submarinisme?\n";

cout<<"Escriu el metres (20m=1, 25m=2, 30,=3, 35m=4)\n";
cin>>variable1;

if (variable1==1 || variable1==2 || variable1==4){
	cout<<"No ho has fet malament\n\n";
	variable2 --;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}

else if (variable1==3){
	cout<<"Ho has fet be\n\n";
	variable2 ++;
	cout<<"La teva puntuacio es:" <<variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"\nNumero massa gran";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 
else {
	variable1 --;
}

//VUITENA PREGUNTA "ASSIGNATURA PREFERIDA?"

cout<<"\n\n8)Quina es la teva assignatura preferida?\n";

cout<<"Escriu l'assignatura (Multimedia=1, Angles=2, Socials=3 i Matematiques=4\n";
cin>>variable1;

if (variable1==2 || variable1==3 || variable1==4){
	cout<<"Ho has fet malament\n\n";
	variable2 --;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}

else if (variable1==1){
	cout<<"Ho has fet be\n\n";
	variable2 ++;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"\nNumero massa gran";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 
else {
	variable1 --;
}

//NOVENA PREGUNTA "QUANTS MOVILS E ARRIBAT A TINDRE?"

cout<<"\n\n9)Quants movils e arribat a tindre?\n";

cout<<"Escriu la quantitat (2 movils=1, 5 movils=2, 3 movils=3 i 0 movils=4\n";
cin>>variable1;

if (variable1==1 || variable1==3 || variable1==4){
	cout<<"Ho has fet malament\n\n";
	variable2 --;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}

else if (variable1==2){
	cout<<"Ho has fet be\n";
	variable2 ++;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"\nNumero massa gran\n";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 
else {
	variable1 --;
}

//DECENA PREGUNTA "TREURE UN DEU EN AQUESTA FEINA?"

cout<<"\n\n10)Treure un deu en questa feina?\n";

cout<<"Escriu la teva opinio (si=1, no=2, si pero no=3 i si perque el Carles es transformara en un Deu i aprovara a tothom=4\n";
cin>>variable1;

if (variable1==1 || variable1==2 || variable1==3){
	cout<<"Ho has fet malament\n\n";
	variable2 --;
	cout<<"\nLa teva puntuacio es:" << variable2;
	
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
}

else if (variable1==4){
	cout<<"Ho has fet be\n\n";
	variable2 ++;
	cout<<"La teva puntuacio es:" << variable2;
	
cout<<"\n...../ )       \n";
cout<<"....' /          \n";
cout<<".---' (_____     \n";
cout<<"....... ((__)    \n";
cout<<"..... _ ((___)   \n";
cout<<"..... -'((__)    \n";
cout<<"--.___((_)       \n";
}

else if (variable1>=5){
 cout<<"\nNumero massa gran\n";
 variable2 --;
 cout<<"\nLa teva puntuacio es:" <<variable2;
 
cout<<"\n\n#     #\n"; 
cout<<" #   #  \n";
cout<<"  # #   \n";
cout<<"   #    \n";
cout<<"  # #   \n";
cout<<" #   #  \n";
cout<<"#     # \n";
 }
 
else {
	variable1 --;
}

 if (variable1==69){
	cout<<"                          __...------------._                        \n";
cout<<"                         ,-'                   `-.                  \n ";           
cout<<"                      ,-'                         `.                 \n";
cout<<"                    ,'                            ,-`.               \n";
cout<<"                   ;                              `-' `.             \n";
cout<<"                  ;                                 .-. \            \n";
cout<<"                 ;                           .-.    `-'  \           \n";
cout<<"                ;                            `-'          \          \n";
cout<<"               ;                                          `.         \n";
cout<<"               ;                                           :         \n";
cout<<"              ;                                            |         \n";
cout<<"             ;                                             ;         \n";
cout<<"            ;                            ___              ;          \n";
cout<<"           ;                        ,-;-','.`.__          |          \n";
cout<<"       _..;                      ,-' ;`,'.`,'.--`.        |          \n";
cout<<"      ///;           ,-'   `. ,-'   ;` ;`,','_.--=:      /           \n";
cout<<"     |'':          ,'        :     ;` ;,;,,-'_.-._`.   ,'            \n";
cout<<"     '  :         ;_.-.      `.    :' ;;;'.ee.    \|  /              \n";
cout<<"      \.'    _..-'/8o. `.     :    :! ' ':8888)   || /               \n";
cout<<"       ||`-''    \\88o\ :     :    :! :  :`""'    ;;/                \n";
cout<<"       ||         \"88o\;     `.    \ `. `.      ;,'                 \n";
cout<<"       /)   ___    `.'''/(--.._ `.    `.`.  `-..-' ;--.              \n";
cout<<"       \(.=''''''==.. ''-'     `.|      `-`-..__.-' `. `.            \n";
cout<<"        |          `''==.__      )                    )  ;           \n";
cout<<"        |   ||           `''--- '                   .'  .'           \n";
cout<<"        /\,,||||  | |           \                .'   .'             \n";
cout<<"        | |||'|' |'|'           \|             .'   _.' \            \n";
cout<<"        | |\' |  |           || ||           .'    .'    \           \n";
cout<<"        ' | \ ' |'  .   ``-- `| ||         .'    .'       \          \n";
cout<<"          '  |  ' |  .    ``-.._ |  ;    .'    .'          `.        \n";
cout<<"       _.--,;`.       .  --  ...._,'   .'    .'              `.__    \n";
cout<<"     ,'  ,';   `.     .   --..__..--'.'    .'                __/_\   \n";
cout<<"   ,'   ; ;     |    .   --..__.._.'     .'                ,'     `. \n";
cout<<"  /    ; :     ;     .    -.. _.'     _.'                 /         `\n";
cout<<" /     :  `-._ |    .    _.--'     _.'                   |           \n";
cout<<"/       `.    `--....--''       _.'                      |           \n";
cout<<"          `._              _..-'                         |           \n";
cout<<"             `-..____...-''                              |           \n";
cout<<"                                                         |           \n";
cout<<"                                                         |           \n";
}




if (variable2>=5){
	cout<<" \n\n   #    ######  ######  ####### #     #    #    ### #######\n"; 
cout<<"  # #   #     # #     # #     # #     #   # #   ###    #   \n";
cout<<" #   #  #     # #     # #     # #     #  #   #   #     #   \n"; 
cout<<"#     # ######  ######  #     # #     # #     # #      #   \n";
cout<<"####### #       #   #   #     #  #   #  #######        #   \n";
cout<<"#     # #       #    #  #     #   # #   #     #        #   \n";
cout<<"#     # #       #     # #######    #    #     #        #   \n";
}


if (variable2<=5){

cout<<"\n\n #####  #     #  #####  ######  #######  #####\n"; 
cout<<"#     # #     # #     # #     # #       #     #  \n";
cout<<"#       #     # #       #     # #       #        \n";
cout<<" #####  #     #  #####  ######  #####    #####   \n";
cout<<"      # #     #       # #       #             #  \n";
cout<<"#     # #     # #     # #       #       #     #  \n";
cout<<" #####   #####   #####  #       #######  #####   \n";

	cout<<"\n\n                     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶             \n";
cout<<"                 ¶¶¶¶¶¶´´´´´´´´´´´´´¶¶¶¶¶¶¶                \n";
cout<<"              ¶¶¶¶´´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶              \n";
cout<<"             ¶¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶¶             \n";
cout<<"            ¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶            \n";
cout<<"           ¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶           \n";
cout<<"          ¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶          \n";
cout<<"          ¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´¶¶          \n";
cout<<"          ¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´¶¶          \n";
cout<<"          ¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´¶¶          \n";
cout<<"          ¶¶´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶¶          \n";
cout<<"          ¶¶´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶¶          \n";
cout<<"           ¶¶´¶¶´´´¶¶¶¶¶¶¶¶´´´´´´¶¶¶¶¶¶¶´´´¶¶´¶¶           \n";
cout<<"            ¶¶¶¶´¶¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶¶¶´¶¶¶¶¶           \n";
cout<<"    ¶¶¶       ¶¶´´¶¶¶¶¶¶¶¶´´´´´´´¶¶¶¶¶¶¶¶¶´¶¶        ¶¶¶¶  \n";
cout<<"   ¶¶¶¶¶     ¶¶´´´¶¶¶¶¶¶¶´´´¶´¶´´´¶¶¶¶¶¶¶´´´¶¶     ¶¶¶¶¶¶  \n";
cout<<"  ¶¶´´´¶¶    ¶¶´´´´´¶¶¶´´´´¶¶¶¶¶´´´´¶¶¶´´´´´¶¶    ¶¶´´´¶¶  \n";
cout<<" ¶¶¶´´´´¶¶¶¶  ¶¶´´´´´´´´´´¶¶¶´¶¶¶´´´´´´´´´´¶¶  ¶¶¶¶´´´´¶¶¶ \n";
cout<<"¶¶´´´´´´´´´¶¶¶¶¶¶¶¶´´´´´´´¶¶¶´¶¶¶´´´´´´´¶¶¶¶¶¶¶¶¶´´´´´´´´¶¶\n";
cout<<"¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶´´´´¶¶¶´¶¶¶´´´´¶¶¶¶¶¶¶¶´´´´´´¶¶¶¶¶¶¶¶\n";
cout<<" ¶¶¶¶´¶¶¶¶¶´´´´´´¶¶¶¶¶´´´´´´´´´´´´¶¶¶´¶¶´´´´´¶¶¶¶¶¶´¶¶¶    \n";
cout<<"          ¶¶¶¶¶¶´´¶¶¶´¶¶´´´´´´´´´´´¶¶´¶¶¶´´¶¶¶¶¶¶          \n";
cout<<"              ¶¶¶¶¶¶´¶´´¶¶¶¶¶¶¶¶¶¶¶´¶¶´¶¶¶¶¶¶              \n";
cout<<"                  ¶¶´¶´¶¶´¶¶´¶´¶¶¶¶¶¶¶´¶¶                  \n";
cout<<"                ¶¶¶¶´¶¶´¶´¶¶´¶´¶¶´¶´¶¶´¶¶¶¶¶               \n";
cout<<"            ¶¶¶¶¶´¶¶´´´¶¶¶¶¶¶¶¶¶¶¶¶¶´´´¶¶´¶¶¶¶¶            \n";
cout<<"    ¶¶¶¶¶¶¶¶¶¶´´´´´¶¶´´´´´´´´´´´´´´´´´¶¶´´´´´´¶¶¶¶¶¶¶¶¶    \n";
cout<<"   ¶¶´´´´´´´´´´´¶¶¶¶¶¶¶´´´´´´´´´´´´´¶¶¶¶¶¶¶¶´´´´´´´´´´¶¶   \n";
cout<<"    ¶¶¶´´´´´¶¶¶¶¶     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶     ¶¶¶¶¶´´´´´¶¶¶    \n";
cout<<"      ¶¶´´´¶¶¶           ¶¶¶¶¶¶¶¶¶           ¶¶¶´´´¶¶      \n";
cout<<"      ¶¶´´¶¶                                   ¶¶´´¶¶      \n";
cout<<"       ¶¶¶¶                                     ¶¶¶¶       \n\n";
}

cout<<"\n\n\n\n####### #     # ######  ###  #####  \n";
cout<<"#       ##    # #     #  #  #     # \n";
cout<<"#       # #   # #     #  #  #       \n";
cout<<"#####   #  #  # ######   #  #       \n";
cout<<"#       #   # # #   #    #  #       \n";
cout<<"#       #    ## #    #   #  #     # \n";
cout<<"####### #     # #     # ###  #####  \n";
cout<<"\n\nSe que el compte de instagram de cmoya_88 ets tu no m'enganyes";
}