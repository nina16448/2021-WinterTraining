#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <queue>
using namespace std;

struct card{
    int value;
    char suit[4];
};

queue <struct card> deck;
vector <struct card> mons_deck;
vector <struct card> player_deck;

int game;

int player_heart=9;
int player_atk=7;
int player_def=8;
int player_skill=0;

int monster_heart=5;
int monster_atk=5;
int monster_def=5;
int monster_skill=5;

int round_player_atk;
int round_mons_atk;
int round_player_def;
int round_mons_def;
int round_player;
int player_skill_act;
int mons_skill_act;
vector <struct card> player_choose;
vector <struct card> mons_choose;

void game_start();
void character_choose(int n);
void game_introduce();
void shuffle();
void show(vector <struct card> a);
void show_basis(int a);
void choose();
int calculation(vector <struct card> a, int atk);
int monster_move(int atk);
int damage(int atk, int def);
int dice_print(int n, int condition);
void round_move(int p_or_m, int a_or_d);
void skill(int n);
void skill_zero();

int main(){
    int i, r;
    int len, cnt=108;
    game_start();

    shuffle();
    show_basis(1);
    printf("Battle is to start!\n");
    for (i=0; i<5; i++){
        mons_deck.push_back(deck.front());
        deck.pop();
        cnt--;
        player_deck.push_back(deck.front());
        deck.pop();
        cnt--;
    }

    while(player_heart!=0 && monster_heart!=0){
        r=rand()%2;
        if (r==0){
            printf("--------------------\n");
            show_basis(0);
            round_player=0;
            round_move(0, 1);
            round_move(1, 0);
            skill(monster_skill);
            skill(player_skill);
            round_move(0, 2);

            void skill_zero();
            if (player_heart<=0){
                break;
            }

            printf("--------------------\n");
            show_basis(0);
            round_move(1, 1);
            round_move(0, 0);
            skill(player_skill);
            round_move(1, 2);

            void skill_zero();
            if (monster_heart<=0){
                break;
            }
        }

        else{
            printf("--------------------\n");
            show_basis(0);
            round_player=1;
            round_move(1, 1);
            round_move(0, 0);
            skill(player_skill);
            round_move(1, 2);

            void skill_zero();
            if (monster_heart<=0){
                break;
            }

            printf("--------------------\n");
            show_basis(0);
            round_move(0, 1);
            round_move(1, 0);
            skill(monster_skill);
            skill(player_skill);
            round_move(0, 2);

            void skill_zero();
            if (player_heart<=0){
                break;
            }
        }

        len=player_deck.size();
        if (cnt>0 && len<=8){
            player_deck.push_back(deck.front());
            deck.pop();
            cnt--;
            len++;
        }
        
        for (i=0; i<5-len && cnt>0 && len<=8; i++){
            player_deck.push_back(deck.front());
            deck.pop();
            cnt--;
        }
        if (cnt>0){
            mons_deck.push_back(deck.front());
            deck.pop();
        }
        len=mons_deck.size();
        for (i=0; i<5-len && cnt>0 && len<=8; i++){
            mons_deck.push_back(deck.front());
            deck.pop();
        }
    }

    if (player_heart<=0)    printf("YOU ARE A LOSER\n");
    else    printf("YOU WIN\n");
    system("PAUSE");

    printf("Want to play it again?\n");
    printf("Yes (Enter 1) NO (Enter 2)\n");
    scanf("%d", &i);
    while(i!=1 && i!=2){
        printf("Error Enter, please re-enter\n");
        scanf("%d", &i);
    }
    if (i==1)   main();

    return 0;
}

void game_start(){
    printf("-> Game Start <-\n");
    printf("   (ENTER 1)\n");
    printf("-> Choose Character <-\n");
    printf("   (ENTER 2)\n");
    printf("-> Game Rule <-\n");
    printf("   (ENTER 3)\n");

    printf("Please enter what you want to do:");
    scanf("%d", &game);
    if(game!=1 && game!=2 && game!=3){
        printf("Error, back to main screen\n");
        game_start();
        return;
    }

    if (game==2){
        character_choose(4);
        game_start();
        return;
    }
    else if(game==3){
        game_introduce();
        game_start();
        return;
    }
}

void character_choose(int n){
    int d;

    if (n==1 || n==4){
        printf("character 1: Ayn\n");
        printf("background:\nOne of the Therianthropes of Zodiac.\nShe is here to find the Jewel that originally belongs to her world.\n");
        printf("Health: 9\nAttack: 7\nDefense: 8\n");
        printf("Skill:\n");
        printf("(1) THIRTEEN EYES: Atk always 13 and Monster's Def always 0\n");
        printf("    Required cards: one Def-3 card and one Atk-3 card\n");
        printf("(2) NINE SOULS: Def+9\n");
        printf("    Required cards: one Def-5 card\n");
        system("PAUSE");
    }
    if (n==2 || n==4){
        printf("character 2: Grunwald\n");
        printf("background:\nA black prince obsessed with death because of his evil desire.\n");
        printf("Health: 10\nAttack: 9\nDefense: 7\n");
        printf("Skill:\n");
        printf("(1) BASH: Atk+9\n");
        printf("    Required cards: two cards of Atk with value is no smaller than 3\n");
        printf("(2) BLOOD BLESSING: Once you defense damages form the Monster, you can recover half of successful defense points of health\n");
        printf("    Required cards: one Def-5 card and one card of Atk with value is no smaller than 2\n");
        system("PAUSE");
    }
    if (n==3 || n==4){
        printf("character 3: Max\n");
        printf("background:\nThe Inquisitor of the Academy.\nA mysterious warrior wearing a mask.\n");
        printf("Health: 10\nAttack: 9\nDefense: 5\n");
        printf("Skill:\n");
        printf("(1) REJECT SWORD: Atk+7 but lose 1 Health\n");
        printf("    Required cards: two Atk-1 cards\n");
        printf("(2) COUNTER GUARD: Def always higher 4 points than the monster's Atk\n");
        printf("    Required cards: two Def-1 cards\n");
        system("PAUSE");
    }

    printf("It's time to choose your character!\n");
    printf("Or you want to watch it again?\n");
    printf("Yes(Enter 1)   No(Enter 0)\n");
    scanf("%d", &d);
    while(d!=0 && d!=1){
        printf("Error, Please re-enter:\n");
        printf("Yes(Enter 1)   No(Enter 0)\n");
        scanf("%d", &d);
    }

    if (d==1){
        printf("Which one you want to see?\n");
        printf("Aye (Enter 1)\nGrunwald (Enter 2)\nMax(Enter 3)\n");
        scanf("%d", &d);
        while(d!=1 && d!=2 && d!=3){
            printf("Error, Please re-enter:\n");
            printf("Aye (Enter 1)\nGrunwald (Enter 2)\nMax(Enter 3)\n");
            scanf("%d", &d);
        }
        character_choose(d);
        return;
    }
    else{
        printf("Which one you want to choose?\n");
        printf("Aye (Enter 1)\nGrunwald (Enter 2)\nMax(Enter 3)\n");
        scanf("%d", &d);
        while(d!=1 && d!=2 && d!=3){
            printf("Error, Please re-enter:\n");
            printf("Aye (Enter 1)\nGrunwald (Enter 2)\nMax(Enter 3)\n");
            scanf("%d", &d);
        }
        if (d==1){
            player_heart=9;
            player_atk=7;
            player_def=8;
            player_skill=0;
            printf("You choose Ayn, Good luck\n");
        }
        else if (d==2){
            player_heart=10;
            player_atk=9;
            player_def=7;
            player_skill=1;
            printf("You choose Grunwald, Good luck\n");
        }
        else{
            player_heart=10;
            player_atk=9;
            player_def=5;
            player_skill=2;
            printf("You choose Max, Good luck\n");
        }
        system("PAUSE");
    }
}

void game_introduce(){
    printf("In the beginning of game, you'll see yours and monster's qualities\n");
    printf("For example:\n");
    show_basis(2);
    printf("And then you'll enter the combat\n");
    printf("In each round of combat, you'll have to attack and defense one of each\n");
    system("PAUSE");
    printf("You'll see 5 cards in the initial of the combat, you can use them to attack(atk) or defense(def)\n");
    printf("In each round, cards will be plused to 5\n");
    printf("But if you already have 5 cards, you'll only get 1 card\n");
    printf("And the maxium of cards you can have is 8\n");
    system("PAUSE");
    printf("The number in the middle of the card is its value, and below the card is its number\n");
    printf("You can choose the card by the number\n");
    printf("And remember, you can select MULTIPLE cards in each round\n");
    printf("But please select ONE card EVERYTIME\n");
    system("PAUSE");
    printf("After choosing, each of the points have 1/3 possibility to Successfully atk or def\n");
    printf("It'll display like this\n");
    printf("The right is success, the left is failed\n");
    printf("+---+ +---+\n");
    printf("|atk| | X |\n");
    printf("+---+ +---+\n");
    system("PAUSE\n");
    printf("Game will be continuing until someone's health turns 0\n");
    printf("And don't forget every character has its own skill\n");
    printf("Once you play the required card, skill will active autoly\n");
    printf("So go check the characters now, choose the one you love\n");
    printf("And make good use of thir skill to win the combat\n");
    printf("GOOD LUCK!\n");
    system("PAUSE");
}

void skill_zero(){
    player_skill_act=0;
    mons_skill_act=0;
}

void shuffle(){
    struct card a;
    int i;
    int r;
    srand(time(NULL));

    for(i=0; i<108; i++){
        r=rand()%2;
        if (r==1) strcpy(a.suit, "ATK");
        else strcpy(a.suit, "DEF");

        r=rand()%20;
        if (r>=0 && r<=6) a.value=1;
        else if (r>=7 && r<=13) a.value=2;
        else if (r>=14 && r<=17)  a.value=3;
        else if (r==18) a.value=4;
        else a.value=5;

        deck.push(a);
    }
}

void show(vector <struct card> a){
    int len=a.size();
    int i;

    for (i=0; i<len; i++){
        printf("+-----+ ");
    }
    printf("\n");
    for (i=0; i<len; i++){
        printf("| %s | ", a[i].suit);
    }
    printf("\n");
    for (i=0; i<len; i++){
        printf("|  %d  | ", a[i].value);
    }
    printf("\n");
    for (i=0; i<len; i++){
        printf("| %s | ", a[i].suit);
    }
    printf("\n");
    for (i=0; i<len; i++){
        printf("+-----+ ");
    }
    printf("\n");
    for (i=0; i<len; i++){
        printf("  [%d]   ", i);
    }
    printf("\n");
}

void choose(){
    int len=player_deck.size();
    int a;
    int value;
    int check[8]={0};
    int i;
    vector <struct card> tmp;
    player_choose.clear();
    show(player_deck);

    printf("\nPlease choose the numbers of cards you want to use\n");
    printf("And enter -1 to stop choosing\n");
    printf("choose one:");

    scanf("%d", &a);
    while(a!=-1){
        if (a<-1 || a>=len){
            printf("Error choose\n");
            printf("Please re-choose:");
            scanf("%d", &a);
            continue;
        }
        else if (check[a]==1){
            printf("Already choose\n");
            printf("Please re-choose:");
            scanf("%d", &a);
            continue;
        }
        check[a]=1;
        player_choose.push_back(player_deck[a]);
        printf("choose next:");
        scanf("%d", &a);
    }

    printf("Here are the cards you choose\n");
    if (player_choose.size()==0)   printf("nothing");
    show(player_choose);

    printf("\nIf it is right enter 1, if not enter 2 to re-choose all\n");
    printf("Enter:");
    scanf("%d", &a);
    while(a!=1){
        if (a!=2){
            printf("error enter, Please re-enter:");
            scanf("%d", &a);
            continue;
        }
        else if (a==2){
            choose();
            a=2;
            break;
        }
    }
    if (a==1){
        for (i=0; i<len; i++){
            if (check[i]==0){
                tmp.push_back(player_deck[i]);
            }
        }

        player_deck.clear();
        len=tmp.size();
        for (i=0; i<len; i++){
            player_deck.push_back(tmp[i]);
        }
    }
}

int calculation(vector <struct card> a, int atk){
    int len=a.size();
    int i;
    int total=0;

    if (atk==0){
        for (i=0; i<len; i++){
            if (strcmp(a[i].suit, "DEF")==0){
                total+=a[i].value;
            }
        }
    }
    else{
        for (i=0; i<len; i++){
            if (strcmp(a[i].suit, "ATK")==0){
                total+=a[i].value;
            }
        }
    }

    return total;
}

int monster_move(int atk){
    int i, total=0;
    int len=mons_deck.size();
    mons_choose.clear();

    if (atk){
        for(i=0; i<len; i++){
            if (strcmp(mons_deck[i].suit, "ATK")==0){
                total+=mons_deck[i].value;
            }
            else{
                mons_choose.push_back(mons_deck[i]);
            }
        } 
    }
    else{
        for (i=0; i<len; i++){
            if (strcmp(mons_deck[i].suit, "DEF")==0){
                total+=mons_deck[i].value;
            }
            else{
                mons_choose.push_back(mons_deck[i]);
            }
        }
    }

    len=mons_choose.size();
    mons_deck.clear();
    for (i=0; i<len; i++){
        mons_deck.push_back(mons_choose[i]);
    }

    return total;
}

int damage(int atk, int def){
    int r, i, j;
    int a=0, d=0;
    srand(time(NULL));

    
    a+=dice_print(atk, 1);
    d+=dice_print(def, 0);

    if (player_skill==1 && player_skill_act==1){
        if (a-d<=0){
            if (player_heart+d/2 > 10) player_heart=10;
            else player_heart+=d/2;
        }
    }
    if (mons_skill_act==1){
        if (a-d>=0){
            if (monster_heart+a-d > 7) monster_heart=7;
            else monster_heart+=a-d; 
        }
    }
    
    if (a-d<0) return 0;
    return a-d;
}

void round_move(int p_or_m, int a_or_d){
    int dam;

    if (p_or_m==0 && a_or_d==1){
        round_mons_atk=monster_move(1)+monster_atk;
    }
    else if (p_or_m==0 && a_or_d==0){
        round_mons_def=monster_move(0)+monster_def;
    }
    else if (p_or_m==1 && a_or_d==1){
        printf("\nYour turn to ATTACK!\n");
        choose();
        round_player_atk=calculation(player_choose, 1)+player_atk;

    }
    else if (p_or_m==1 && a_or_d==0){
        printf("The monster's attack:%d\n", round_mons_atk);
        printf("Your basis defense:%d\n", player_def);
        printf("Your turn to DEFENSE!\n");
        choose();
        round_player_def=calculation(player_choose, 0)+player_def;
    }
    else if (p_or_m==0 && a_or_d==2){
        printf("The monster's attack:%d\n", round_mons_atk);
        printf("Your defense:%d\n",round_player_def);
        dam=damage(round_mons_atk, round_player_def);
        printf("The monster cause %d damages to you\n",dam);
        player_heart-=dam;
        system("PAUSE");
    }
    else if (p_or_m==1 && a_or_d==2){
        printf("Your attack:%d\n", round_player_atk);
        printf("The monster's defense:%d\n",round_mons_def);
        dam=damage(round_player_atk, round_mons_def);
        printf("You cause %d damages to the monster\n",dam);
        monster_heart-=dam;
        system("PAUSE");
    }
}

void skill(int n){
    int len=player_choose.size();
    int i;
    int check[10]={0};

    if (n==0){
        for (i=0; i<len; i++){
            if (strcmp(player_choose[i].suit, "ATK")==0 && player_choose[i].value==3)
                check[0]=1;
            if (strcmp(player_choose[i].suit, "DEF")==0 && player_choose[i].value==3)
                check[1]=1;
            if (strcmp(player_choose[i].suit, "DEF")==0 && player_choose[i].value==5)
                check[2]=1;
        }
        if (check[0]==1 && check[1]==1){
            printf("!!! SKILL \"THIRTEEN EYES\" ACTIVE!!!\n");
            round_player_atk=13;
            round_mons_def=0;
        }
        if (check[2]==1){
            printf("!!! SKILL \"NINE SOULS\" ACTIVE!!!\n");
            round_player_def+=9;
        }
    }

    else if (n==1){
        for (i=0; i<len; i++){
            if (strcmp(player_choose[i].suit, "ATK")==0 && player_choose[i].value>=3 && check[0]==1)
                check[0]=2;
            else if (strcmp(player_choose[i].suit, "ATK")==0 && player_choose[i].value>=3 && check[0]==0)
                check[0]=1;
            if (strcmp(player_choose[i].suit, "ATK")==0 && player_choose[i].value>=2)
                check[1]=1;
            if (strcmp(player_choose[i].suit, "DEF")==0 && player_choose[i].value==5)
                check[2]=1;
        }
        if (check[0]==2){
            printf("!!! SKILL \"BASH\" ACTIVE!!!\n");
            round_player_atk+=9;
        }
        if (check[1]==1 && check[2]==1){
            printf("!!! SKILL \"BLOOD BLESSING\" ACTIVE!!!\n");
            player_skill_act=1;
        }
    }

    else if (n==2){
        for (i=0; i<len; i++){
            if (strcmp(player_choose[i].suit, "ATK")==0 && player_choose[i].value==1 && check[0]==1)
                check[0]=2;
            else if (strcmp(player_choose[i].suit, "ATK")==0 && player_choose[i].value==1 && check[0]==0)
                check[0]=1;
            if (strcmp(player_choose[i].suit, "DEF")==0 && player_choose[i].value==1 && check[1]==1)
                check[1]=2;
            else if (strcmp(player_choose[i].suit, "DEF")==0 && player_choose[i].value==1 && check[0]==0)
                check[1]=1;
        }
        if (check[0]==2){
            printf("!!! SKILL \"REJECT SWORD\" ACTIVE!!!\n");
            round_player_atk+=7;
            player_heart--;
        }
        if (check[1]==2){
            printf("!!! SKILL \"COUNTER GUARD\" ACTIVE!!!\n");
            round_player_def=round_mons_atk+4;
        }
    }

    else{
        for (i=0; i<len; i++){
            if (strcmp(mons_choose[i].suit, "ATK")==0 && mons_choose[i].value>=3 && check[5]==1)
                check[5]=2;
            else if (strcmp(mons_choose[i].suit, "ATK")==0 && mons_choose[i].value>=3 && check[5]==0)
                check[5]=1;
        }
        if (check[5]==2){
            printf("the Monster active skill \"BLOOD BREATHE\"\n");
            round_mons_atk+=4;
            mons_skill_act=1;
        }
    }
}

int dice_print(int n, int condition){
    int i, j, a=0;
    int r;
    char s[4];

    srand(time(NULL));

    if (condition==1) strcpy(s, "atk");
    else strcpy(s, "def");

    printf("The end of %s-dice\n", s);

    for (i=0; i<n; i+=5){
        for (j=0; j<5 && i+j<n; j++){
            printf("+---+ ");
        }
        printf("\n");
        for (j=0; j<5 && i+j<n; j++){
            r=rand()%3;
            if (r==0){
                printf("|%s| ", s);
                a++;
            }
            else{
                printf("| X | ");
            }
        }
        printf("\n");
        for (j=0; j<5 && i+j<n; j++){
            printf("+---+ ");
        }
        printf("\n");
    }

    return a;
}

void show_basis(int a){
    if (a==1){
        printf("The monster's health:%d\n", monster_heart);
        printf("The monster's attack:%d\n", monster_atk);
        printf("The monster's defense:%d\n", monster_def);
        printf("Your health:%d\n", player_heart);
        printf("Your attack:%d\n", player_atk);
        printf("Your defense:%d\n", player_def);
    }
    else{
        printf("The monster's health:%d\n", monster_heart);
        printf("Your health:%d\n", player_heart);
    }

    system("PAUSE");
}