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
enum boolean isEven(int x,int y)
{
	if(x%2==0 && y%2==0)
		return true;
	else
	return false;
}
int main()
{
	int a,b;
	enum boolean result;
	printf("Enter number");
	scanf("%d %d",&a,&b);
	result=isEven(a,b);
	if(result==true)
	printf("Even");
	else
	printf("Odd");
	return 0;
}
