int funcaofatorial(int num){
	int i, numinicial = num;

	for (i = numinicial - 1; i !=1; --i) {
		num = num * i;
	}
	return num;
}

int funcaoexpoente (int num, int exp){
	int numinicial = num, i;

	for (numinicial = numinicial; exp !=1; --exp){
	num = num * numinicial;
	}
	return num;
}
