/* Enum is used to create your own datatypes to make it easy to understand
used in c
ex -: 
enum boolean
{
false,true
};
*/
enum boolean
{
	false,true //two datatype
};
enum boolean isEven(int x)
{
	if(x%2==0)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	int n;
	enum boolean result;
	printf("Enter number");
	scanf("%d",&n);
	result=isEven(n);
	if(result==true)
	printf("Even");
	else
	printf("Odd");
	return 0;
}
