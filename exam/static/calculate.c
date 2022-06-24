int calculate(int opnum, int opnds[], char op)	// calculate 함수 정의
{
	int result = opnds[0], idx;	//
	switch(op)
	{
		case '+' :
			for ( idx = 1; idx < opnum; idx ++) result +=opnds[idx];
			break;
		case '-' :
			for (idx = 1; idx < opnum; idx ++) result -= opnds[idx];
			break;
		case '*' :
			for ( idx = 1; idx < opnum ; idx ++) result *= opnds[idx];
			break;
		}
	return result;
}
