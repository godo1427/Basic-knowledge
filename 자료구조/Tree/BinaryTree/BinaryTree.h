#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode			//이진 트리의 노드를 표현한 구조 체 
{
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;

BTreeNode * MakeBTreeNode(void);	//노드의 생성 
BTData GetData(BTreeNode * bt);		//노드의 저장된 데이터를 반환 
void SetData(BTreeNode * bt, BTData data);	//노드에 데이터를 저 장 

BTreeNode * GetLeftSubTree(BTreeNode * bt);	//왼쪽 서브 트리 주소 값 반환 
BTreeNode * GetRightSubTree(BTreeNode * bt);//오른쪽 서브 트리 주소 값 반 환 

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub); //sub으로 전달된 노드를 main으로 전달된 노드의 왼쪽 서브 트리로 연결한다. 
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);//sub으로 전달된 노드를 main으로 전달된 노드의 오른쪽 서브 트리로 연결한다. 

#endif
