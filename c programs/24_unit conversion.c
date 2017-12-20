/*This project is scrap and it gives inaccurate values. It only works for those unit conversions that are linearly
related. For example in->cm,km->m etc, but it won't work for say converting between degree celsius and degree
fahrenheit.*/


#include<stdio.h>
#include<conio.h> //printf("36%c",248); to print degree symbol
main()
{
     int choice;
     float in,cm,ft,m,yd,mile,acre,m2,galus,l,galuk,pc,kmph,mps,km,oz,g,lb,kg,atm,Pa,mmHg,hp,kW,kgf,J,lbf,kPa,F,C,cal;
     printf("Welcome to unit conversion calculator\n\n");
     printf("1.in->cm\t11.acre->m2\t21.oz->g\t31.kgf/cm2->Pa\n");
     printf("2.cm->in\t12.m2->acre\t22.g->oz\t32.Pa->kgf/cm2\n");
     printf("3.ft->m\t\t13.gal(US)->l\t23.lb->kg\t33.kgf-m->J\n");
     printf("4.m->ft\t\t14.l->gal(US)\t24.kg->lb\t34.J->kgf-m\n");
     printf("5.yd->m\t\t15.gal(UK)->k\t25.atm->Pa\t35.lbf/in2->kPa\n");
     printf("6.m->yd\t\t16.l->gal(UK)\t26.Pa->atm\t36.kPa->lbf/m2\n");
     printf("7.mile->km\t17.pc->km\t26.Pa->atm\t36.kPa->lbf/in2\n");
     printf("8.km->mile\t18.km->pc\t28.Pa->mmHg\t38.%cC->%cF\n",248,248);
     printf("9.n mile->m\t19.km/h->m/s\t29.hp->kW\t39.J->cal\n");
     printf("10.m->n mile\t20.m/s->km/h\t30.kW->hp\t40.cal->J\n");
     printf("\nPress an appropriate number for unit conversion: ");
     scanf("%d",&choice);
     
     if(choice==1)
     {
          system("cls");
          printf("in->cm\n");
          printf("Enter the value: ");
          scanf("%f",&in);
          in=in*2.54;
          printf("%f",in);   
     }
     
     if(choice==2)
     {
          system("cls");
          printf("cm->in\n");
          printf("Enter the value: ");
          scanf("%f",&cm);
          cm=(cm/2.54);
          printf("%f",cm);   
     }
     
      if(choice==3)
     {
          system("cls");
          printf("ft->m\n");
          printf("Enter the value: ");
          scanf("%f",&ft);
          ft=ft*0.3048;
          printf("%f",ft);   
     }
     
      if(choice==4)
     {
          system("cls");
          printf("m->ft\n");
          printf("Enter the value: ");
          scanf("%f",&m);
          m=(m/0.3048);
          printf("%f",m);   
     }
     
      if(choice==5)
     {
          system("cls");
          printf("yd->m\n");
          printf("Enter the value: ");
          scanf("%f",&yd);
          yd=yd*0.9144;
          printf("%f",yd);   
     }
     
      if(choice==6)
     {
          system("cls");
          printf("m->yd\n");
          printf("Enter the value: ");
          scanf("%f",&m);
          m=(m/0.9144);
          printf("%f",m);   
     }
     
     if(choice==7)
     {
          system("cls");
          printf("mile->km\n");
          printf("Enter the value: ");
          scanf("%f",&mile);
          mile=mile*1.609344;
          printf("%f",mile);   
     }
     
     if(choice==8)
     {
          system("cls");
          printf("km->mile\n");
          printf("Enter the value: ");
          scanf("%f",&km);
          km=(km/1.609344);
          printf("%f",km);   
     }
     if(choice==9)
     {
          system("cls");
          printf("n mile->m\n");
          printf("Enter the value: ");
          scanf("%f",&mile);
          mile=mile*1852;
          printf("%f",mile);   
     }
     
     if(choice==10)
     {
          system("cls");
          printf("m->n mile\n");
          printf("Enter the value: ");
          scanf("%f",&mile);
          mile=(mile/1852);
          printf("%f",mile);   
     }
     
     if(choice==11)
     {
          system("cls");
          printf("acre->m2\n");
          printf("Enter the value: ");
          scanf("%f",&acre);
          acre=(acre*4046.856);
          printf("%f",acre);   
     }
     
     if(choice==12)
     {
          system("cls");
          printf("m2->acre\n");
          printf("Enter the value: ");
          scanf("%f",&m2);
          m2=(acre/4046.856);
          printf("%f",m2);   
     }
     
     if(choice==13)
     {
          system("cls");
          printf("gal(US)->l\n");
          printf("Enter the value: ");
          scanf("%f",&galus);
          galus=galus*3.785412;
          printf("%f",galus);   
     }
     
     if(choice==14)
     {
          system("cls");
          printf("l_>gal(US)\n");
          printf("Enter the value: ");
          scanf("%f",&l);
          l=l/3.785412;
          printf("%f",l);   
     }
     
     if(choice==15)
     {
          system("cls");
          printf("gal(UK)->l\n");
          printf("Enter the value: ");
          scanf("%f",&galuk);
          galuk=galus*4.54609;
          printf("%f",galuk);   
     }
     
     if(choice==16)
     {
          system("cls");
          printf("l_>gal(UK)\n");
          printf("Enter the value: ");
          scanf("%f",&l);
          l=l/4.54609;
          printf("%f",l);   
     }
     
     if(choice==17)
     {
          system("cls");
          printf("pc->km\n");
          printf("Enter the value: ");
          scanf("%f",&pc);
          pc=pc*(30856780000000);
          printf("%f",pc);   
     }
     
      if(choice==18)//not working
     {
          system("cls");
          printf("km->pc\n");
          printf("Enter the value: ");
          scanf("%f",&km);
          km=km/(30856780000000);
          printf("%f",km);   
     }
     
      if(choice==19)
     {
          system("cls");
          printf("km/h->m/s\n");
          printf("Enter the value: ");
          scanf("%f",&km);
          km=km/(3.6);
          printf("%f",km);   
     }
     
     if(choice==20)
     {
          system("cls");
          printf("m/s->km/h\n");
          printf("Enter the value: ");
          scanf("%f",&m);
          m=m*(3.6);
          printf("%f",m);   
     }
     
     if(choice==21)
     {
          system("cls");
          printf("oz->g\n");
          printf("Enter the value: ");
          scanf("%f",&oz);
          oz=oz*28.34952;
          printf("%f",oz);   
     }
     
     if(choice==22)
     {
          system("cls");
          printf("g->oz\n");
          printf("Enter the value: ");
          scanf("%f",&oz);
          g=g/28.34952;
          printf("%f",g);   
     }
     
     if(choice==23)
     {
          system("cls");
          printf("lb->kg\n");
          printf("Enter the value: ");
          scanf("%f",&lb);
          lb=lb*0.4535924;
          printf("%f",lb);   
     }
     
     if(choice==24)
     {
          system("cls");
          printf("kg->lb\n");
          printf("Enter the value: ");
          scanf("%f",&kg);
          kg=kg/0.4535924;
          printf("%f",kg);   
     }
     
     if(choice==25)
     {
          system("cls");
          printf("atm->Pa\n");
          printf("Enter the value: ");
          scanf("%f",&atm);
          atm=atm*101325;
          printf("%f",atm);   
     }
     
     if(choice==26)//not working
     {
          system("cls");
          printf("Pa->atm\n");
          printf("Enter the value: ");
          scanf("%f",&Pa);
          Pa=Pa/101325;
          printf("%f",Pa);   
     }
     
     if(choice==27)
     {
          system("cls");
          printf("mmHg->Pa\n");
          printf("Enter the value: ");
          scanf("%f",&mmHg);
          mmHg=mmHg*133.3224;
          printf("%f",mmHg);   
     }
     
     if(choice==28)
     {
          system("cls");
          printf("Pa->mmHg\n");
          printf("Enter the value: ");
          scanf("%f",&Pa);
          Pa=Pa/133.3224;
          printf("%f",Pa);   
     }
     
     if(choice==29)
     {
          system("cls");
          printf("hp->kW\n");
          printf("Enter the value: ");
          scanf("%f",&hp);
          hp=hp*0.7457;
          printf("%f",hp);   
     }
     
     if(choice==30)
     {
          system("cls");
          printf("kW->hp\n");
          printf("Enter the value: ");
          scanf("%f",&kW);
          kW=kW/0.7457;
          printf("%f",kW);   
     }
     
     if(choice==31)
     {
          system("cls");
          printf("kgf/cm2->Pa\n");
          printf("Enter the value: ");
          scanf("%f",&kgf);
          kgf=kgf*98066.5;
          printf("%f",kgf);   
     }
     
     if(choice==32)
     {
          system("cls");
          printf("Pa->kgf/cm2->\n");
          printf("Enter the value: ");
          scanf("%f",&Pa);
          Pa=Pa/98066.5;
          printf("%f",Pa);   
     }
     
     if(choice==33)
     {
          system("cls");
          printf("kgf-m->J\n");
          printf("Enter the value: ");
          scanf("%f",&kgf);
          kgf=kgf*9.80665;
          printf("%f",kgf);   
     }
     
     if(choice==34)
     {
          system("cls");
          printf("J->kgf-m\n");
          printf("Enter the value: ");
          scanf("%f",&J);
          J=J/9.80665;
          printf("%f",J);   
     }
     
     if(choice==35)
     {
          system("cls");
          printf("lbf/in2->kPa\n");
          printf("Enter the value: ");
          scanf("%f",&lbf);
          lbf=lbf*6.894757;
          printf("%f",lbf);   
     }
     
     if(choice==36)
     {
          system("cls");
          printf("kPa->lbf/in2\n");
          printf("Enter the value: ");
          scanf("%f",&kPa);
          kPa=kPa/6.894757;
          printf("%f",kPa);   
     }
     
     if(choice==37)
     {
          system("cls");
          printf("%dF->%dC\n",248,248);
          printf("Enter the value: ");
          scanf("%f",&F);
          F=F*(-17.2222222);
          printf("%f%d",F,248);   
     }
     
     if(choice==38)
     {
          system("cls");
          printf("%dC->%dF\n",248,248);
          printf("Enter the value: ");
          scanf("%f",&C);
          C=C*33.8;
          printf("%f%d",C,248);   
     }
     
     
     
     
     
     getch();

}
