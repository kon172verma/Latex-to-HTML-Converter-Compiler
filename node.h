#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tree{
	char info[10000];
	struct tree *l_child;
	struct tree *r_sibling;
};

struct tree* connect_r_sibling(struct tree* ptr1, struct tree* ptr2){
	if(ptr1->r_sibling == NULL)
		ptr1->r_sibling = ptr2;
	else{
		struct tree* ptr;
		ptr = ptr1;
		while(ptr->r_sibling)
			ptr = ptr->r_sibling;
		ptr->r_sibling = ptr2;
	}
	return ptr1;
}

struct tree* connect_l_child(struct tree* ptr1, struct tree* ptr2){
	ptr1->l_child = ptr2;
	return ptr1;
}

struct tree* create_tree(const char* data){
	struct tree* new = (struct tree*)malloc(sizeof(struct tree));
	new->r_sibling = NULL;
	new->l_child = NULL;
	strcpy(new->info, data);
	return new;
}

struct tree* empty_tree(){
	return NULL;
}

void print_tree(FILE* fp, struct tree* root){
	if(!root)
		return;
	if((root->info)[0]!='@')
		fprintf(fp,"%s ",root->info);
	print_tree(fp, root->l_child);
	print_tree(fp, root->r_sibling);
}
