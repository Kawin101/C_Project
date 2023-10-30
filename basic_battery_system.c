#include <stdio.h>
#include <unistd.h>

int main() {
    int battery = 100; // Starting at 100%
    
    for (int mins = 1; mins <= 180; mins++) {
        printf("Battery: %d%%\n", battery);
        
        sleep(1); // Sleep for 1 second to 1 mins
        battery--; // Decrease value by 1%
        
        if (battery == 30) {
            printf("Battery is Low Power.\n");
        }
        if (battery == 15) {
            printf("Battery is close soon!.\n");
        }
        if (battery == 0) {
            printf("Batter is shutdown now!.\n");
            break;
        }
    }
    printf("Done.\n");
    return 0;
}