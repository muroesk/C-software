int main() {

printf("         Sinema Alisveris Faturasi=(Ticket and Fee Calculator for Cinema)        \n\n");

int toplam,kisibil,kisiic,kisimis,bilet,icecek,misir,biltut,ictut,mistut;
printf("Kac Kisisiniz ?: ");
scanf("%d",&kisibil);

printf("Icecek Alir misiniz, kac adet istersiniz ?: ");
scanf("%d",&kisiic);

printf("Sizin icin misir patlatalim mi ?: ");
scanf("%d",&kisimis);

bilet=10;
icecek=6;
misir=8;
biltut=kisibil*bilet;
mistut=kisimis*misir;
ictut=kisiic*icecek;

toplam=biltut+ictut+mistut;
	
printf("Bilet Tutari: %d*%d= %dTL\n",bilet,kisibil,biltut);
printf("Icecek Tutari: %d*%d= %dTL \n",icecek,kisiic,ictut);
printf("Misir Tutari: %d*%d= %dTL \n",misir,kisimis,mistut);
printf("Toplam tutar: %dTL\n\n",toplam);

printf("------***Afiyet Olsun IYI Seyirler***------");



	return 0;
}
