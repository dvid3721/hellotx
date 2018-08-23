void Demo( int iCount )
{
	// 应该是if(iCount == 0)??
	if ( iCount = 0 )
	{
		iCount = 2;
	}
}

int Demo1(int n)
{
	int nRet;
	//'=' should be '==' ?
	if(n=5)
		nRet = 6;
	else
		nRet = 5;
	return nRet;
}
