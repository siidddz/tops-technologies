//Monday to Sunday using switchcase
#include<stdio.h>
main()
{
	int day;
	
	printf("Enter day :");
	scanf("%d",&day);
	
	switch (day)
	{
		case 1:
		printf("Sunday");
			break;
			
			case 2:
			printf("Monday");
				break;
				
				case 3:
				printf("Tuesday");
					break;
					
					case 4:
					printf("Wednsday");
						break;
						
						case 5:
						printf("Thursday");
							break;
							
							case 6:
							printf("Friday");
								break;
								
								case 7:
								printf("Saturday");
									break;
									
									default:
									printf("Enter valid number");									 
	}
}
