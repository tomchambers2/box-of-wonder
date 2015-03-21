 char* generateDeath() {
    int seed = random(0,12);
    if (seed<10) {
      int day = random(1,29);
      int month = random(1,13);
      int year = random(2016,2110);
      
      char s_day[5];
      itoa(day, s_day, 10);
      char s_month[5];
      itoa(month, s_month, 10);
      char s_year[5];
      itoa(year, s_year, 10);      
      
      char death[100] = "The date of your death will be: ";    
      strcat(death, s_day);
      strcat(death, "/");
      strcat(death, s_month);
      strcat(death, "/");
      strcat(death, s_year);      
      
      doPrint(death);
    } else if (seed==10) {
      doPrintSkull();
      doPrint("You will die of electrocution at 19:21 tomorrow");
    } else {
      doPrintSkull();
      doPrint("You will die in a car accident at 10:13 tomorrow");      
    }   
 }

