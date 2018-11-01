#include <iostream>
#include <locale.h>

using namespace std;

string hecele(string);

int main() {
setlocale(LC_ALL,"Turkish");
cout << hecele("Bilgisayar bilgiyi sayabilen cihaz demektir.")<<endl<<endl;
return 0;
}

string hecele(string str){

int i=0,k=0,p=0,j=0;
char str2[100];
for (i=0;str[i]!='\0';i++) // Girilen kelime dizgisinin sonuna kadar karakter karakter arama yap.
    {
    	if(str[i]==' ')	// karakterleri gezerken bosluk denk gelirse sonraki karaktere gec
    		{
    		continue;
    		}
    	
    	if(str[i]=='a' || str[i]=='e' || int(str[i])=='ý' || str[i]=='i' || str[i]=='o' || int(str[i])=='ö' || str[i]=='u' || int(str[i])=='ü' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='Ý' || str[i]=='O' || str[i]=='Ö' || str[i]=='U' || str[i]=='Ü')	// sesli harfi bul
    		{
    			if(str[i+1]==' ')	// bir sonraki karakter bosluk ise bosluga kadar yazdir
    				{
    					for(j=p;j<i+1;j++)
    						{
    							str2[k]=str[j];
    							k++;
							}
						str2[k]=' ';
						k++;
						p=i+2;
					}
				
				else	// bosluk degilse
					{
						if(str[i+2]==' ')	// 2 sonraki karakter bosluksa bosluga kadar yazdir
							{
								for(j=p;j<(i+2);j++)
									{
										str2[k]=str[j];
										k++;
									}
								str2[k]=' ';
								k++;
								p=i+3;
							}
						else	// 2 sonraki karakter bosluk degilse
							{
								if(str[i+1]=='a' || str[i+1]=='e' || int(str[i+1])=='ý' || str[i+1]=='i' || str[i+1]=='o' || int(str[i+1])=='ö' || str[i+1]=='u' || int(str[i+1])=='ü' || str[i+1]=='A' || str[i+1]=='E' || str[i+1]=='I' || str[i+1]=='Ý' || str[i+1]=='O' || str[i+1]=='Ö' || str[i+1]=='U' || str[i+1]=='Ü') // sesliden sonra gelen harf sesli ise
				    				{
				    					for(j=p;j<i+1;j++)	// ikinci sesliye kadar yazdir.
				    						{
				    							str2[k]=str[j];
				    							k++;
											}
										str2[k]='-';
										k++;
										p=i+1;
										
									}
								else // sesliden sonraki karakter sesli degilse
									{
										
											{
												if(str[i+2]=='a' || str[i+2]=='e' || int(str[i+2])=='ý' || str[i+2]=='i' || str[i+2]=='o' || int(str[i+2])=='ö' || str[i+2]=='u' || int(str[i+2])=='ü' || str[i+2]=='A' || str[i+2]=='E' || str[i+2]=='I' || str[i+2]=='Ý' || str[i+2]=='O' || str[i+2]=='Ö' || str[i+2]=='U' || str[i+2]=='Ü') // sessizden sonraki sesli ise
													{
														for(j=p;j<(i+1);j++)	// sessize kadar yazdir
															{
																str2[k]=str[j];
																k++;
															}
														str2[k]='-';
														k++;
														p=i+1;
														
													}
												else // sessizden sonraki sessiz ise
													{
														 
																if(str[i+3]=='a' || str[i+3]=='e' || int(str[i+3])=='ý' || str[i+3]=='i' || str[i+3]=='o' || int(str[i+3])=='ö' || str[i+3]=='u' || int(str[i+3])=='ü' || str[i+3]=='A' || str[i+3]=='E' || str[i+3]=='I' || str[i+3]=='Ý' || str[i+3]=='O' || str[i+3]=='Ö' || str[i+3]=='U' || str[i+3]=='Ü') // yanyana 2 sessizden sonraki sesli ise
																	{
																		
																		for(j=p;j<i+2;j++) // 2. sessize kadar yazdir
																		{
																			str2[k]=str[j];
																			k++;
																		}
																		str2[k]='-';
																		k++;
																		p=i+2;
																	}
																else	// yanyana 2 sessizden sonraki sesli degilse
																	{
																		if(str[i+3]==' ' || str[i+3]=='\0')	// 2 sessizden sonra bosluk varsa veya karakter dizisinin sonuysa
																			{
																				for(j=p;j<(i+3);j++)	// bosluga kadar yazdir
																					{
																						str2[k]=str[j];
																						k++;
																					}
																				str2[k]=' ';
																				k++;
																				p=i+4;
																			}
																		else	// 2 sessizden sonraki sessizse
																			{
																				for(j=p;j<(i+3);j++)	// 2 sessizden sonraki sessize kadar yazdir
																					{
																						str2[k]=str[j];
																						k++;
																					}
																				str2[k]='-';
																				k++;
																				p=i+3;
																			}
																		
																	
																	}
															
														
														
													}
											}
										
									}
								
							}
								
					}
				
    			
			}
		

	}


return str2;




}
