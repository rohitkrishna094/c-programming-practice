#include<stdio.h>
#include<conio.h>
#define tv_cost 400.00
#define vcr_cost 220.00
#define rc_cost 35.20
#define cd_cost 300.00
#define tr_cost 150.00
#define tax 8.25
int main(void)
{
	int tv_qty,vcr_qty,rc_qty,cd_qty,tr_qty;
	float tv_total,vcr_total,rc_total,cd_total,tr_total;
	float subtotal,total,tax_amt;
	printf("How many TVs were sold?");
	scanf("%d",&tv_qty);
	printf("\nHow many VCRs were sold?");
	scanf("%d",&vcr_qty);
	printf("\nHow many Remote Controllers were sold?");
	scanf("%d",&rc_qty);
	printf("\nHow many CDs were sold?");
	scanf("%d",&cd_qty);
	printf("\nHow many Tape Recorders were sold?");
	scanf("%d",&tr_qty);
	tv_total=(float)tv_qty*(tv_cost);
	vcr_total=(float)vcr_qty*(vcr_cost);
	rc_total=(float)rc_qty*(rc_cost);
	cd_total=(float)cd_qty*(cd_cost);
	tr_total=(float)tr_qty*(tr_cost);
	subtotal=tv_total+vcr_total+rc_total+cd_total+tr_total;
	tax_amt=((tax/100)*subtotal);
	total=subtotal+tax_amt;
	printf("\nCUSTOMERS BILL\n");
	printf("\nQTY   DESCRIPTION   UNIT PRICE   TOTAL PRICE\n");
	printf("---   -----------   ----------   -----------\n");
	printf("%02d    TV            %10.2f       %7.2f\n",tv_qty,tv_cost,tv_total);
	printf("%02d    VCR           %10.2f       %7.2f\n",vcr_qty,vcr_cost,vcr_total);
	printf("%02d    REMOTE CTRLR  %10.2f       %7.2f\n",rc_qty,rc_cost,rc_total);
	printf("%02d    CD PLAYER     %10.2f       %7.2f\n",cd_qty,cd_cost,cd_total);
	printf("%02d    TAPE RECORDER %10.2f       %7.2f\n",tr_qty,tr_cost,tr_total);
	printf("\t\t\t\t -----------\n");
	printf("\t\t\tSUBTOTAL    %8.2f\n",subtotal);
	printf("\t\t\tTAX         %8.2f\n",tax_amt);
	printf("\t\t\tTOTAL       %8.2f\n",total);
	getch();
	
}
