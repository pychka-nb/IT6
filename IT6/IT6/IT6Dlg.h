
// IT6Dlg.h: файл заголовка
//

#pragma once
#include <vector>
#include <iostream>
#include <time.h>
#include "Drawer.h"
#include <math.h>

// Диалоговое окно CIT6Dlg
class CIT6Dlg : public CDialogEx
{
// Создание
public:
	CIT6Dlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IT6_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int N;
	double fd;
	double Nsin;
	int Nvec;
	int p;
	vector <double> Fsin;
	vector <double> Fisin;
	vector <double> Sign;
	vector <double> keys;
	vector <double> vec;
	double rx[10000];
	double rxm[10000];
	double u[10000];
	double v[10000];
	double sigma[10000];
	Drawer
		graph1,
		graph2;
	double ymin, ymax;
	double FindMin(vector<double> data, int N);
	double FindMax(vector<double> data, int N);
	void svd(int m_m, int n_n, double* a, double* u, double* v, double* sigma);
	void CreateSignal();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
