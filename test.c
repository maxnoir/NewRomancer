#include <stdio.h>
#include <unistd.h>

int main()
{
    char playername[16];
    char response1[] = "How about I owe ya, you can trust me!";
    char response2[] = "Can you please let me off? I didn't even eat the spaghetti!";  
    char response3[] = "Alright, alright, give me a second will ya!";
    int response;

    printf("You awake in a dingy bar, with a hazy memory of the night before. You peel your head from the bowl of synth-spaghetti to see the bartender, Ratz, eyeing you down angrily\n\n");
    sleep(1);
    printf("Ratz: You owe me 46 creds for last night scumball!\n\n");
    sleep(1);
    printf("Response 1: %s\nResponse 2: %s\nResponse 3: %s\n\n",response1,response2,response3);
    printf("You can choose your response by inputting the corresponding number: ");
    while(scanf("%d",&response)==1){
	if(response == 1){
	   printf("\nRatz: Pay up, borgbrain. Use the PAX if you need some creds on your chip.\n\n");
	   break;
	}
	else if(response == 2){
	   printf("\nRatz: Hah! Like you didn't eat Mama's homemade spaghetti!\n\n");
	   break;
	}
	else if(response == 3){
	   printf("\nRatz: You can use the PAX to get creds on your chip\n\n");
	   break;
	}
	else{
	   printf("\nInvalid option, choose again.\n\n");
	   printf("You can choose your response by inputting the corresponding number: ");
	}
    }
}
