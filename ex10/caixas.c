#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box{
    int length;
    int width;
    int height;
};

int get_volume(struct box b){
    int volume = 0;
    volume = b.height * b.length *b.width;
    return volume;
}

int is_lower_than_max_height(struct box b){
    if(b.height < MAX_HEIGHT){
        return 1;
    } 
    else{
        return 0;
    }
}

int main() {

	int n;
	scanf("%d", &n);
	struct box *boxes = malloc(n * sizeof(struct box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}