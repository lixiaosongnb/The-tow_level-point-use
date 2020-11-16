/*bad code*/
remove_entry_list(entry)
{
	prev = null;
	walk = head;
	
	while (walk != entry) {
		prev = walk;
		walk = walk->next;
	}
	
	if (!prev)
		head = entry->next;
	else 
		prev->next = entry->next;
		
}

/*good code*/
remove_entry_list(entry)
{
	indir = &head;
	
	while (*indir != entry)
		indir = &(*indir->next);
	
	*indir = entry->next;

}
