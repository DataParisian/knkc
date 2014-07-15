/* KNKC chapter 16 Programming Project 5
 * Sundeep Kolli 14-july-2014
 * Program: pp5.c
 * Purpose: Modify pp8.c from ch5 so that the times are stored in a single 
 * array. The elements of the array will be structures, each containing a 
 * departure time and the corresponding arrival time. (Each time will be an 
 * integer, representing the number of minutes since midnight).The program 
 * will use a loop to search the array for the departure time closes to the 
 * time entered by the user.
*/

#include <stdio.h>

#define COUNT 8

struct schedule {
	int departure_time;
	int arrival_time;
};

int main (void)
{
	struct schedule times[COUNT];
	
	int inputHoursPart, inputMinutesPart;
	int inputTimeSinceMidnight;
	int earliestDepartTime, earliestArrivalTime;	
	
	printf ("Enter a 24-hour time: ");
	scanf ("%d : %d", &inputHoursPart, &inputMinutesPart);
	
	inputTimeSinceMidnight = (inputHoursPart * 60) + inputMinutesPart;

	times[0].departure_time = (8 * 60);         	/* departure 8:00 a.m.  */
	times[1].departure_time = (9 * 60) + 43;        /* departure 9:43 a.m   */
	times[2].departure_time = (11 * 60) + 19;       /* departure 11:19 a.m. */
	times[3].departure_time = (12 * 60) + 47;       /* departure 12:47 p.m. */
	times[4].departure_time = (14 * 60);            /* departure 2:00 p.m.  */
	times[5].departure_time = (15 * 60) + 45;       /* departure 3:45 p.m.  */
	times[6].departure_time = (19 * 60);            /* departure 7:00 p.m.  */
	times[7].departure_time = (21 * 60) + 45;       /* departure 9:45 p.m.  */
	
	times[0].arrival_time = (10 * 60) + 16;   	    /* arrival 10:16 a.m.   */
	times[1].arrival_time = (11 * 60) + 52;         /* arrival 11:52 a.m    */
	times[2].arrival_time = (13 * 60) + 31;         /* arrival 01:31 p.m.   */
	times[3].arrival_time = (15 * 60);              /* arrival 03:00 p.m.   */
	times[4].arrival_time = (16 * 60) + 8;         /* arrival 04:08 p.m.   */
	times[5].arrival_time = (17 * 60) + 55;         /* arrival 05:55 p.m.   */
	times[6].arrival_time = (21 * 60) + 20;         /* arrival 09:20 p.m.   */
	times[7].arrival_time = (23 * 60) + 58;         /* arrival 11:58 p.m.   */
	
	
	if (inputTimeSinceMidnight < times[0].departure_time){		
		earliestDepartTime = times[0].departure_time;
		earliestArrivalTime = times[0].arrival_time;
	} else if (inputTimeSinceMidnight < times[1].departure_time){
		if ((times[1].departure_time - inputTimeSinceMidnight) >= 
				(inputTimeSinceMidnight - times[0].departure_time)){
			earliestDepartTime = times[0].departure_time;
			earliestArrivalTime = times[0].arrival_time;
		}else{
			earliestDepartTime = times[1].departure_time;
			earliestArrivalTime = times[1].arrival_time;
		}
	} else if (inputTimeSinceMidnight < times[2].departure_time){
		if ((times[2].departure_time - inputTimeSinceMidnight) >= 
			(inputTimeSinceMidnight - times[1].departure_time)){
			earliestDepartTime = times[1].departure_time;
			earliestArrivalTime = times[1].arrival_time;
		}else{
			earliestDepartTime = times[2].departure_time;
			earliestArrivalTime = times[2].arrival_time;
		}
	} else if (inputTimeSinceMidnight < times[3].departure_time){
		if ((times[3].departure_time - inputTimeSinceMidnight) >= 
			(inputTimeSinceMidnight - times[2].departure_time)){
			earliestDepartTime = times[2].departure_time;
			earliestArrivalTime = times[2].arrival_time;
		}else{
			earliestDepartTime = times[3].departure_time;
			earliestArrivalTime = times[3].arrival_time;
		}
	} else if (inputTimeSinceMidnight < times[4].departure_time){
		if ((times[4].departure_time - inputTimeSinceMidnight) >= 
			(inputTimeSinceMidnight - times[3].departure_time)){
			earliestDepartTime = times[3].departure_time;
			earliestArrivalTime = times[3].arrival_time;
		}else{
			earliestDepartTime = times[4].departure_time;
			earliestArrivalTime = times[4].arrival_time;
		}
	} else if (inputTimeSinceMidnight < times[5].departure_time){
		if ((times[5].departure_time - inputTimeSinceMidnight) >= 
			(inputTimeSinceMidnight - times[4].departure_time)){
			earliestDepartTime = times[4].departure_time;
			earliestArrivalTime = times[4].arrival_time;
		}else{
			earliestDepartTime = times[5].departure_time;
			earliestArrivalTime = times[5].arrival_time;
		}
	} else if (inputTimeSinceMidnight < times[6].departure_time){
		if ((times[6].departure_time - inputTimeSinceMidnight) >= 
			(inputTimeSinceMidnight - times[5].departure_time)){
			earliestDepartTime = times[5].departure_time;
			earliestArrivalTime = times[5].arrival_time;
		}else{
			earliestDepartTime = times[6].departure_time;
			earliestArrivalTime = times[6].arrival_time;
		}
	} else if (inputTimeSinceMidnight < times[7].departure_time){
		if ((times[7].departure_time - inputTimeSinceMidnight) >= 
			(inputTimeSinceMidnight - times[6].departure_time)){
			earliestDepartTime = times[6].departure_time;
			earliestArrivalTime = times[6].arrival_time;
		}else{
			earliestDepartTime = times[7].departure_time;
			earliestArrivalTime = times[7].arrival_time;
		}
	} else if (inputTimeSinceMidnight >= times[7].departure_time){
			earliestDepartTime = times[7].departure_time;
			earliestArrivalTime = times[7].arrival_time;
	}
	
	if ((earliestDepartTime / 60) >= 13){
		printf ("Closest departure time is %.2d:%.2d p.m., ", 
			((earliestDepartTime / 60) - 12), (earliestDepartTime % 60));		
	}else if ((earliestDepartTime / 60) >= 12){
		printf ("Closest departure time is %.2d:%.2d p.m., ", 
			(earliestDepartTime / 60), (earliestDepartTime % 60));		
	}else{
		printf ("Closest departure time is %.2d:%.2d a.m., ", 
			(earliestDepartTime / 60), (earliestDepartTime % 60));		
	}
	
	if ((earliestArrivalTime / 60) >= 13){
		printf ("arriving at %.2d:%.2d p.m.\n", 
			((earliestArrivalTime / 60) - 12), (earliestArrivalTime % 60));		
	}else if ((earliestArrivalTime / 60) >= 12){
		printf ("arriving at %.2d:%.2d p.m.\n", 
			(earliestArrivalTime / 60), (earliestArrivalTime % 60));		
	}else{
		printf ("Arriving at %.2d:%.2d a.m.\n", 
			(earliestArrivalTime / 60), (earliestArrivalTime % 60));		
	}
	
	return 0;
}
