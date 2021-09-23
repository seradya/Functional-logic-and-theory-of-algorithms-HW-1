#include<stdio.h>
#include<float.h>
#include<math.h> 

int main(void)
{
	//double k = 1.519999980926513671875;
	//printf("%f", k);
	int a = 0;
	int b = 0;
	float res = 3;
	unsigned char res_arr[sizeof(float)*8] = {0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1,1,1,0,1,0,1,1,1,0,0,0,0,1,1}; //bit representation of double
	int length = (int)(sizeof(res_arr)/sizeof(res_arr[0]));
	/*for(int i=0; i<length; i++){ //zeroing the array
		res_arr[i] = 0;
		//printf("%d", res_arr[i]);
	}*/
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	//res = powf((-1),res_arr[0]); //sign (+/-)
	int exp = 0; ///test
	//res_arr = {0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,0,0,0,1,1,1,1,0,1,0,1,1,1,0,0};

	
	printf("%d\n",FLT_MANT_DIG);
	printf("%d\n",length-FLT_MANT_DIG);

	for(int i = length-FLT_MANT_DIG; i < length; i++){
		res += res_arr[i]*powf((2),exp);
		--exp;
	}
	//scanf("%d|%d", &a, &b);
	printf("%f", *(double)res_arr);
	
	return 0;
}