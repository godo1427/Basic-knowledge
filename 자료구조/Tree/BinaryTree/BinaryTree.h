#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode			//���� Ʈ���� ��带 ǥ���� ���� ü 
{
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;

BTreeNode * MakeBTreeNode(void);	//����� ���� 
BTData GetData(BTreeNode * bt);		//����� ����� �����͸� ��ȯ 
void SetData(BTreeNode * bt, BTData data);	//��忡 �����͸� �� �� 

BTreeNode * GetLeftSubTree(BTreeNode * bt);	//���� ���� Ʈ�� �ּ� �� ��ȯ 
BTreeNode * GetRightSubTree(BTreeNode * bt);//������ ���� Ʈ�� �ּ� �� �� ȯ 

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub); //sub���� ���޵� ��带 main���� ���޵� ����� ���� ���� Ʈ���� �����Ѵ�. 
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);//sub���� ���޵� ��带 main���� ���޵� ����� ������ ���� Ʈ���� �����Ѵ�. 

#endif
