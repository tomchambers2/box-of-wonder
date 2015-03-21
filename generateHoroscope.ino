char* generateHoroscope() {
    char buffer[150];
    int rand = getRandomNum(0,13);
    int oldRand = rand;
    strcpy_P(buffer, (char*)pgm_read_word(&(string_table[rand]))); // Necessary casts and dereferencing, just copy.
    char output[300];
    char text[50] = "Your personalised reading: ";
    strcpy(output, text);    
    strcat(output, buffer);
    
    rand = getRandomNum(0, 13);
    
    strcpy_P(buffer, (char*)pgm_read_word(&(string_table[rand]))); // Necessary casts and dereferencing, just copy.
    strcat(output, buffer);
    
    return output;
}
