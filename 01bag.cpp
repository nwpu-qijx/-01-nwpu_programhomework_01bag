#include<stdio.h>

int Final[100];

int isput(int weight, int c){
	if(weight > c){
		return 0;
	}else{
		return 1;
	}
}

int Method(int n, int c){
	int weight[n], value[n];
	int i, j;
	
	for(i = 0;i < n;i++){
		scanf("%d",&weight[i]);
	}
	for(i = 0;i < n;i++){
		scanf("%d", &value[i]);
	}
	
	int table[c + 1][n + 1];
	
	for(i = 0;i <= c;i++){
		for(j = 0;j <= n;j++){
			table[i][j] = 0;
		}
	}

	for(i = 1;i <= n;i++){
		for(j = 1;j <= c;j++){
			if(isput(weight[i - 1], j) == 1){
				if(value[i - 1] + table[j - weight[i - 1]][i - 1] > table[j][i - 1]){
				  table[j][i] = value[i - 1] + table[j - weight[i - 1]][i - 1];
			}else{
				table[j][i] = table[j][i - 1];
			}
		}
	}
}

    return table[c][n];
}
int main(){
	int n, c, i, temp;
	
	for(i = 0;i < 100;i++){
		Final[i] = -1;
	}
	
	i = 0;
	
	do{
		scanf("%d %d", &n, &c);
		i++;
		if(n == 0 && c == 0){
			continue;
		}
		
		temp = Method(n, c);
		Final[i] = temp;
		
	}while(n != 0 || c != 0);
	
	for(i = 1;i < 100;i++){
		if(Final[i] >= 0){
			printf("%d\n", Final[i]);
		}
	}
	
	return 0;
}