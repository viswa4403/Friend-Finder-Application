#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num;
int Randoms(int lower, int upper)
{
    int f,nu;
    nu = (rand() %(upper - lower + 1)) + lower;
    
    return nu;
}

int chat(int num)
{   char ans[3];
    int l,p,w,qc ;
    char reply[124],text[124];
    char* questions[14];
    printf("Do you want to chat with your match? yes/no : ");
    scanf("%s",ans);

    while (strcmp(ans,"yes" )!=0 && strcmp(ans,"no" )!=0 && strcmp(ans,"Yes" )!=0 && strcmp(ans,"No" )!=0 )
    {
        printf("Enter a valid answer: ");
        scanf("%s",ans);
    }
    int opt;
    int nam;
    char* names[3];
    
    names[0] = "Paul";
    names[1] = "Grace";
    names[2] = "Sophie";
    
    if(strcmp(ans,"yes") == 0 || strcmp(ans,"Yes") == 0)
    {
        
        questions[0] = "Hi!";
        questions[1] = " How was your day?";
        questions[2] = "What is your caffeinated beverage of choice? Coffee? Cola? Tea?";
        questions[3] = "Best book you have ever read?";
        questions[4] = "What is your most used emoji?";
        questions[5] = "What have you been doing recently?";
        questions[6] = "Whats your latest addiction?";
        questions[7] = "If you could change places with anyone in the world, who would it be?";
        questions[8] = "What is your absolute dream job?";
        questions[9] = "Teleportation or flying?";
        questions[10] = "If you had a time machine, would go back in time or into the future?";
        questions[11] = "Best movie you have ever seen?";
        questions[12] = "";
        questions[13] = "Bye";
        if(num == 3)
        {
            printf("Who do you want to chat with?\n1.Paul\n2.Grace\n3.Sophie\n");
            scanf("%d",&opt);
            if(opt == 1)
            {
                nam = 0;
            }
            else if(opt == 2)
            {
                nam = 1;
            }
            
            else if(opt == 3)
            {
                nam = 2;
            }
        }
        else if(num == 2)
        {   srand(time(0));
            l = Randoms(0,2);
            if(l==0)
            {
                p=Randoms(1,2);
            }
            else if(l==1)
            {
                p=2;
            }
            else if(l==2)
            {
                p=Randoms(0,1);
            }
            
            printf("Who do you want to chat with?\n");
            if(l>p)
            {
                printf("1.%s\n",names[p]);
                printf("2.%s\n",names[l]);
                scanf("%d",&opt);
                if(opt == 1)
                {
                    nam = p;
                }
                else if(opt == 2)
                {
                    nam = l;
                }
            }
            else
            {
                printf("1.%s\n",names[p]);
                printf("2.%s\n",names[l]);
                scanf("%d",&opt);
                if(opt == 1)
                {
                    nam = l;
                }
                else if(opt == 2)
                {
                    nam = p;
                }
            }
            
        }
        else if(num==11)
        {
            printf("Connecting to Paul....\n\n");
            nam = 0;
            
        }
        else if(num == 12)
        {
            printf("Connecting to Grace......\n\n");
            nam = 1;
        }
        else if(num == 13)
        {
            printf("Connecting to Sophie......\n\n");
            nam = 2;
        }
    }
    
    printf("Press the corresponding number to select that question:\n  1.Hi!\n  2.How was your day?\n  3.What is your beverage of choice? Coffee? fizz? Tea?\n  4.Best book you have ever read?\n  5.What is your most used emoji?\n  6.What have you been upto recently?\n  7.What is your latest addiction?\n  8.If you could change places with anyone in the world, who would it be?\n  9.What is your absolute dream job?\n  10.Teleportation or flying?\n  11.If you had a time machine, would go back in time or into the future?\n  12.Best movie you have ever seen?\n  13.If you would you like to send your own question, press 13\n  14.Bye! (End Conversation)\n");
        
    while (strcmp(ans,"yes" )==0 || strcmp(ans,"Yes" )==0 )
    {   
        printf("What message would you like to send ?\n");
        scanf("%d",&qc);
        if(qc == 1)
        {
            printf("USER : %s\n",questions[qc-1]);
            printf("%s : Heyy\n",names[nam]);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc==2)
        {
            printf("USER : %s\n",questions[qc-1]);
            srand(time(0));
            l = Randoms(1,2);
            if(l==1)
            {
                printf("%s : yea it went pretty good\n",names[nam]);
            }
            else if(l==2)
            {
                printf("%s : It was nice! How did your day go?\n",names[nam]);
                scanf(" %[^\n]s",reply);
                printf("USER : %s\n",reply);
                printf("Do you want to send another question? ");
                scanf("%s",ans);
            }
            
        }
        else if(qc == 3)
        {
            printf("USER : %s\n",questions[qc-1]);
            l = Randoms(0,2);
            if(l==0)
            {
                printf("%s : Has to be Coffee! WBU?\n",names[nam]);
            }
            else if(l==1)
            {
                printf("%s : Has to be Tea! WBU?\n",names[nam]);
            }
            else 
            {
                printf("%s : Has to be carbonated drinks! WBU?\n",names[nam]);
            }
            scanf(" %[^\n]s",reply);
            printf("USER : %s\n",reply);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc==4)
        {
            printf("USER : %s\n",questions[qc-1]);
            l = Randoms(0,2);
            if(l==0)
            {
                printf("%s : oooh has to be the Harry potter series,WBU?\n",names[nam]);
            }
            else if(l==1)
            {
                printf("%s : oooh has to be the Percy Jackson series,WBU?\n",names[nam]);
            }
            else 
            {
                printf("%s : oooh i really like the da vinci code,WBU?\n",names[nam]);
            }
            scanf(" %[^\n]s",reply);
            printf("USER : %s\n",reply);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc==5)
        {
            printf("USER : %s\n",questions[qc-1]);
            l = Randoms(0,2);
            if(l==0)
            {
                printf("%s : it is this one :)\n",names[nam]);
            }
            else if(l==1)
            {
                printf("%s : it is this one xD\n",names[nam]);
            }
            else 
            {
                printf("%s : it is this one ;P\n",names[nam]);
            }
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc == 6)
        {
            printf("USER : %s\n",questions[qc-1]);
            l = Randoms(0,2);
            if(l==0)
            {
                printf("%s : i havent been doing anything recently\n",names[nam]);
            }
            else 
            {
                printf("%s : istudies and fun with friends\n",names[nam]);
            }
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc==7)
        {
            printf("USER : %s\n",questions[qc-1]);
            printf("%s : Social Media,WBU?\n",names[nam]);
            scanf(" %[^\n]s",reply);
            printf("USER : %s\n",reply);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
            
        }
        else if(qc==8)
        {
            printf("USER : %s\n",questions[qc-1]);
            l = Randoms(0,2);
            if(l==0)
            {
                printf("%s : Elon Musk\n",names[nam]);
            }
            else 
            {
                printf("%s : Narendra Modi\n",names[nam]);
            }
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc == 9)
        {
            printf("USER : %s\n",questions[qc-1]);
            l = Randoms(0,2);
            if(l==0)
            {
                printf("%s : Commercial Pilot,WBU?\n",names[nam]);
            }
            else if(l==1)
            {
                printf("%s : Deep Sea Diver,WBU?\n",names[nam]);
            }
            else 
            {
                printf("%s : IAS Officer,WBU?\n",names[nam]);
            }
            scanf(" %[^\n]s",reply);
            printf("USER : %s\n",reply);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc==10)
        {
            printf("USER : %s\n",questions[qc-1]);
            l = Randoms(0,2);
            if(l==0)
            {
                printf("%s : Teleportation\n",names[nam]);
            }
            else 
            {
                printf("%s : Flying\n",names[nam]);
            }
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc==11)
        {
            printf("USER : %s\n",questions[qc-1]);
            printf("%s : I will not use the time machine in the first place, What would u do?\n",names[nam]);
            scanf(" %[^\n]s",reply);
            printf("USER : %s\n",reply);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc==12)
        {
            printf("USER : %s\n",questions[qc-1]);
            printf("%s : it has to be the shawshank redemption , you agree right?\n",names[nam]);
            scanf(" %[^\n]s",reply);
            printf("USER : %s\n",reply);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
        }
        else if(qc == 13)
        {
            scanf(" %[^\n]s",text);
            printf("USER : %s\n",text);
            printf("Do you want to send another question? ");
            scanf("%s",ans);
            
        }
        else if(qc==14)
        {
            printf("USER : %s\n",questions[qc-1]);
            printf("%s : Bye.\n\n",names[nam]);
            break;
            printf("Exiting Chat Bot");
        }
        
    }
    
}
//Declaration of Bot Users
int BotUser1(int *);
int BotUser2(int *);
int BotUser3(int *);

int main()
{
    
    int b[3];
    float yn;
    printf("Welcome to friend finder!\n");
    char username[30],password[30],password1[30],gender[30],male[30],female[30],user[30],state[30];
    char* existingusername[10];
    char* existingpassword[10];
    char* existinggender[10];
    int existingage[10];
    existingusername[0]="Adithyan";
    existingpassword[0]="aumnamashivaya";
    existinggender[0]="male";
    existingage[0] = 18;
    int age,i,found=0,n=12,k=0,c,j,num;
    printf("Are you a new user? yes/no: ");
    scanf("%s",user);
    while(strcmp(user,"yes") && strcmp(user,"no"))
    {
        printf("Enter a valid answer!: ");
        scanf("%s",user);
    }
    if(!strcmp(user,"yes"))
    {
        j=1;
        printf("Create a username: ");
        scanf("%s",user);
        existingusername[j]=username;
        printf("Username created! \n");
        do
        {
            printf("Create a password: ");
            scanf("%s",password);
            printf("Enter password again for verification!: ");
            scanf("%s",password1);
            if(strcmp(password,password1))
            {
                printf("Passwords didnt match, please try again\n");
            }
            else
            {
                printf("Password has been matched\n");
                existingpassword[j]=password;
            }
        }while(strcmp(password,password1));
        printf("Enter your age: ");
        scanf("%d",&age);
        while(age<13)
        {
            if(age>=13)
            {
                printf("Users below 13 years of age cannot use this application.\n");
                scanf("%d",&age);
            }
        }
        existingage[j]=age;
        printf("Enter your gender: ");
        scanf("%s",gender);
        existinggender[j]=gender;
        i=0;
        j=j+1;
    }
    else
    {
        do
        {
            printf("Enter username: ");
            scanf("%s",username);
            for(i=0;i<=j;i++)
            {
                if(!strcmp(username,existingusername[i]))
                {
                    strcpy(state,"true");
                    printf("Enter password: ");
                    do
                    {
                        scanf("%s",password);
                        int val = strcmp(password,existingpassword[i]);
                        if(val==0)
                        {
                            strcpy(state,"true");
                            printf("Log in successful!\n");
                            printf("Welcome back! %s", username);
                        }
                        else
                        {
                            strcpy(state,"false");
                            printf("Wrong password, please try again: ");
                        }
                    }while(!strcmp(state,"false"));
                }
                else
                {
                    strcpy(state,"false");
                    printf("Wrong username, try again");
                }
            }
        }while(!strcmp(state,"false"));
    }
    char A1[30],A2[30],A3[30],ans3[30];
    

    int x[15];
    int answers[15];
    int h;
printf("\n We would like to ask you some questions to find a perfect partner to your taste");
printf("\n 1. Would you prefer your partner to be someone who do you go to the theatre regularly 2. Would you prefer your partner to be someone who do u sit at home \n");


do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[0]=h;

}
while (answers[0]!=1 && answers[0]!=2);
printf("\n select '1' if you are interested in music . select '2' if you are interested in exercise");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[1]=h;

}
while (answers[1]!=1 && answers[1]!=2);
printf("\n 1.Would you prefer your partner to be someone who always knows where to find an interesting art gallery or Would you prefer your partner to be someone who always gets the best seats for sport events");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[2]=h;

}
while (answers[2]!=1 && answers[2]!=2);
printf("\n Would you prefer your partner to be someone who has a vivid imagination Would you prefer your partner to be someone who loves outdoor activities");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[3]=h;

}
while (answers[3]!=1 && answers[3]!=2);
printf("\n Would you prefer your partner to be someone who loves poetry Would you prefer your partner to be someone who is polite");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[4]=h;

}
while (answers[4]!=1 && answers[4]!=2);
printf("\n Would you prefer your partner to be someone who likes art Would you prefer your partner to be someone who empathises with others");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[5]=h;

}
while (answers[5]!=1 && answers[5]!=2);
printf("\n Would you prefer your partner to be someone who is good with words Would you prefer your partner to be someone who is a team-player");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[6]=h;

}
while (answers[6]!=1 && answers[6]!=2);
printf("\n Would you prefer your partner to be someone who loves classical music Would you prefer your partner to be someone who is a peacemaker");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[7]=h;

}
while (answers[7]!=1 && answers[7]!=2);
printf("\n Would you prefer your partner to be someone who is creative Would you prefer your partner to be someone who is comfortable in his/her own skin");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[8]=h;

}
while (answers[8]!=1 && answers[8]!=2);
printf("\n Would you prefer your partner to be someone who is unconventional  Would you prefer your partner to be someone who is sensitive to criticism");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[9]=h;

}
while (answers[9]!=1 && answers[9]!=2);
printf("\n Would you prefer your partner to be someone who is artistic Would you prefer your partner to be someone who is moody");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[10]=h;

}
while (answers[10]!=1 && answers[10]!=2);
printf("\n Would you prefer your partner to be someone who is eccentric Would you prefer your partner to be someone who is placid");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[11]=h;

}
while (answers[11]!=1 && answers[11]!=2);
printf("\n Would you prefer your partner to be someone who is knowledgeable about films Would you prefer your partner to be someone who is lively");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[12]=h;

}
while (answers[12]!=1 && answers[12]!=2);
printf("\n Would you prefer your partner to be someone who is inventive Would you prefer your partner to be someone who is outgoing");
do {
  printf("\n Please enter the right option: ");
  scanf("%d",&h);
  answers[13]=h;

}
while (answers[13]!=1 && answers[13]!=2);
printf("\n Would you prefer your partner to be someone who can paint Would you prefer your partner to be a party animal \n");
do {
  printf("Please enter the right option: ");
  scanf("%d",&h);
  answers[14]=h;

}
while (answers[14]!=1 && answers[14]!=2);
for ( i=0; i<=14; i++ ) {
   printf("Your responses are: %d \n",answers[i]);
}

int MatchScorePaul, MatchScoreSophie, MatchScoreGrace;
int *p = &MatchScorePaul;
int *q = &MatchScoreSophie;
int *r = &MatchScoreGrace;
    *p = BotUser1(answers);
    *q = BotUser2(answers);
    *r = BotUser3(answers);


    int a[3];

    a[0]= MatchScorePaul;
    a[1] = MatchScoreSophie;
    a[2]= MatchScoreGrace;
    
    num = selsort(a, 2, answers, num);
    

    chat(num);
}

int BotUser1(int *answers) {
    int Bot1[15];
    int i;
    int CompScorePaul = 0;
    //Bot User 1
    Bot1[0] = 1;
    Bot1[1] = 2;
    Bot1[2] = 2;
    Bot1[3] = 1;
    Bot1[4] = 2;
    Bot1[5] = 1;
    Bot1[6] = 1;
    Bot1[7] = 2;
    Bot1[8] = 1;
    Bot1[9] = 2;
    Bot1[10] = 2;
    Bot1[11] = 1;
    Bot1[12] = 1;
    Bot1[13] = 2;
    Bot1[14] = 1;
    int Paul[15];
    for (i = 0; i < 15; i++) {
        Paul[i] = Bot1[i];
    }
    //Compatibility Matching Starts
    for (i = 0; i < 15; i++) {
        if (answers[i] == Paul[i]) {
            CompScorePaul += 1;
        }
    }
    return CompScorePaul;
}
int BotUser2(int *answers) {
    int Bot2[15];
    int i;
    int CompScoreSophie = 0;
    //Bot User 2
    Bot2[0] = 2;
    Bot2[1] = 1;
    Bot2[2] = 1;
    Bot2[3] = 1;
    Bot2[4] = 2;
    Bot2[5] = 2;
    Bot2[6] = 1;
    Bot2[7] = 2;
    Bot2[8] = 1;
    Bot2[9] = 2;
    Bot2[10] = 1;
    Bot2[11] = 1;
    Bot2[12] = 2;
    Bot2[13] = 1;
    Bot2[14] = 2;
    int Sophie[15];
    for (i = 0; i < 15; i++) {
        Sophie[i] = Bot2[i];
    }
    //Compatibility Matching Starts
    for (i = 0; i < 15; i++) {
        if (answers[i] == Sophie[i]) {
            CompScoreSophie += 1;
        }
    }
    return CompScoreSophie;
}
int BotUser3(int *answers) {
    int Bot3[15];
    int i;
    int CompScoreGrace = 0;
    //Bot User 3
    Bot3[0] = 1;
    Bot3[1] = 2;
    Bot3[2] = 1;
    Bot3[3] = 2;
    Bot3[4] = 2;
    Bot3[5] = 1;
    Bot3[6] = 1;
    Bot3[7] = 2;
    Bot3[8] = 1;
    Bot3[9] = 2;
    Bot3[10] = 1;
    Bot3[11] = 2;
    Bot3[12] = 2;
    Bot3[13] = 1;
    Bot3[14] = 1;
    int Grace[15];
    for (i = 0; i < 15; i++) {
        Grace[i] = Bot3[i];
    }
    //Compatibility Matching Starts
    for (i = 0; i < 15; i++) {
        if (answers[i] == Grace[i]) {
            CompScoreGrace += 1;
        }
    }
    return CompScoreGrace;
}

int selsort(int a[], int n, int answers[], int num ){
      int MatchScorePaul, MatchScoreSophie, MatchScoreGrace;
      MatchScorePaul = BotUser1(answers);
      MatchScoreSophie = BotUser2(answers);
      MatchScoreGrace = BotUser3(answers);
      int min, i, start, j, index;
      min = 9999;
      int b[3];

      for (i=0; i<=2; i++){
        for(j = 2; j>=i; j--){
          if(a[j]<min){
            min = a[j];
            index = j;
          }
        }
        a[index] = a[i];
        a[i] = min;
        b[i] = a[i];
        min = 9999;
      }
      int zero, one, two;
      two = b[2];
      one = b[1];
      zero = b[0];
      if (two == one || one == zero){
        printf("You found 3 friends! Paul, Sophie and Grace and you have %d similarities \n", MatchScorePaul);
        num = 3;
      }
      else{
        if(two == one){
          printf ("You found 2 friends! they and you have %d similarities. \n", two);
          num = 2;
        }
      else{
        if(two == MatchScorePaul){
          printf ("You found 1 friend! Paul and you have %d similarities. \n", MatchScorePaul);
          num = 11;
        }
        else{
          if(two == MatchScoreSophie){
            printf ("You found 1 friend! Sophie and you have %d similarities. \n", MatchScoreSophie);
            num = 13;
          }
          else{
              printf ("You found 1 friend! Grace and you have %d similarities. \n", MatchScoreGrace);
              num = 12;
          }
        }
      }
    }
    return num;
    
  }
