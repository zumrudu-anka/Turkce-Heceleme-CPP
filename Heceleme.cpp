// ADI SOYADI  :   OSMAN DURDAG
//OGRENCI NO	:	259164

#include <iostream>

using namespace std;

string hecele(string);

int main() {

cout << hecele("Bilgisayar bilgiyi sayabilen cihaz demektir")<<endl;

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
    	
    	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')	// sesli harfi bul
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
								if(str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u') // sesliden sonra gelen harf sesli ise
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
												if(str[i+2]=='a' || str[i+2]=='e' || str[i+2]=='i' || str[i+2]=='o' || str[i+2]=='u') // sessizden sonraki sesli ise
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
														 
																if(str[i+3]=='a' || str[i+3]=='e' || str[i+3]=='i' || str[i+3]=='o' || str[i+3]=='u') // yanyana 2 sessizden sonraki sesli ise
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
