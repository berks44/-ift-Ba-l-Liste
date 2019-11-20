/*	=================== process ===================	Process user choices	Pre    list has been created	Post   all of user's choice executed*/void process (LIST* list){//	Local Definitions	char choice;
	int* pick;
	void** dataOutPtr;
	STUDENT* pStu;//	Statements	do	   {	    choice = getChoice ();	    switch (choice)	       {	        case 'P': printList (list);	                  break;
            case 'D': printList (list);
                      printf("pick an id\n");
                      scanf("%d",&pick);
                      removeNode(list, pick);
                      break;
            case 'A': printf("enter id:\n");
                      scanf("%d",&pick);
                      pStu->id = (int*)pick;
                      printf("ad soyad bolum sinif birer tab bosluk ile giriniz:\n");
                      scanf("\t%s\t%s\t%s\t%d\r",pStu->ad,pStu->soyad,pStu->bolum,&pStu->sinif);
                    addNode(list, pick);
                break;	        case 'S': search (list);	        case 'Q': break;	       } // switch	   } while (choice != 'Q');	return;}	// process