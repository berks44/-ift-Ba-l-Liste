/*	=================== _insert ==================	Inserts data pointer into a new node.	   Pre    pList pointer to a valid list	          pPre  pointer to data's predecessor	          dataInPtr data pointer to be inserted	   Post   data have been inserted in sequence	   Return boolean, true  if successful,	                   false if memory overflow*/static bool _insert (LIST* pList, NODE* pPre, NODE* pNext,                     void* dataInPtr){//	Local Definitions	NODE* pNew;//	Statements	if (!(pNew = (NODE*) malloc(sizeof(NODE*))))	   return false;	pNew->dataPtr   = dataInPtr;	pNew->link_next = NULL;
	pNew->link_pre  = NULL;	if (pPre == NULL)	   {	    // Adding before first node or to empty list.	    pNew->link_next  = pList->head;	    pList->head      = pNew;	    if (pList->count == 0)	       // Adding to empty list. Set rear	       pList->rear = pNew;
        else
            //adding to not empty list. set link_pre.
            pNext->link_pre  = pNew;	   } // if pPre	else	   {	    // Adding in middle or at end	    pNew ->link_next  = pPre->link_next;
	    pPre ->link_next  = pNew;
	    pNew ->link_pre   = pPre;	    // Now check for add at end of list	    if (pNew->link_next     == NULL)	         pList->rear   =  pNew;
        else
            pNext->link_pre   = pNew;	   } // if else	(pList->count)++;	return true;}	// _insert