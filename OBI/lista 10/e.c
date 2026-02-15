#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int time;
    int type; // 1 for arrival, -1 for departure
} Event;

int cmp(const void *a, const void *b) {
    Event *e1 = (Event *)a;
    Event *e2 = (Event *)b;
    if (e1->time == e2->time) return e1->type - e2->type; // departures first
    return e1->time - e2->time;
}

int main() {
    int N;
    scanf("%d", &N);
    Event *events = malloc(sizeof(Event) * 2 * N);
    
    for (int i = 0; i < N; i++) {
        int c, p;
        scanf("%d %d", &c, &p);
        events[2*i].time = c;
        events[2*i].type = 1; // arrival
        events[2*i+1].time = p;
        events[2*i+1].type = -1; // departure
    }
    
    qsort(events, 2*N, sizeof(Event), cmp);
    
    int curr = 0, maxBuses = 0;
    for (int i = 0; i < 2*N; i++) {
        curr += events[i].type;
        if (curr > maxBuses) maxBuses = curr;
    }
    
    printf("%d\n", maxBuses * 20);
    free(events);
    return 0;
}
