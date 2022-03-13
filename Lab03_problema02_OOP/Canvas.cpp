
#include "Canvas.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
    Clear();

}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    int x_left_cornner = x - ray;
    int y_left_cornner = y - ray;
    int x_right_cornner = x + ray;
    int y_right_cornner = y + ray;
    for (int i = y_left_cornner; i <= y_right_cornner; i++)
    {

        for (int j = x_left_cornner; j <= x_right_cornner; j++)
        {
            int x_poz = i - x;
            int y_poz = j - y;
            int sum = x_poz * x_poz + y_poz * y_poz;
            if (x_poz * x_poz + y_poz * y_poz == ray * ray+1)
            {
                SetPoint(i, j, ch);
            }

        }
        SetPoint(x - ray, y, ch);
        SetPoint(x + ray, y, ch);
        SetPoint(x, y - ray, ch);
        SetPoint(x, y + ray, ch);
    }
    FillCircle(x, y, ray, ch);
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    int x_left_cornner = x - ray;
    int y_left_cornner = y - ray;
    int x_right_cornner = x + ray;
    int y_right_cornner = y + ray;
    for (int i = y_left_cornner; i <= y_right_cornner; i++)
    {

        for (int j = x_left_cornner; j <= x_right_cornner; j++)
        {
            int x_poz = i - x;
            int y_poz = j - y;
            int sum = x_poz * x_poz + y_poz * y_poz;
            if (x_poz * x_poz + y_poz * y_poz < ray * ray)
            {
                SetPoint(i, j, ch);
            }
            
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = left; i <= right; i++)
        SetPoint(top, i, ch);
    for (int i = top; i <= bottom; i++)
        SetPoint(i, right, ch);
    for (int i = left; i <= right-1; i++)
        SetPoint(bottom, i, ch);
    for (int i = top+1; i <= bottom-1; i++)
        SetPoint(i, left, ch);
    FillRect(left + 1, top + 1, right - 1, bottom - 1, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = top; i <= bottom; i++)
        for (int j = left; j <= right; j++)
            SetPoint(i, j, ch);
}

void Canvas::SetPoint(int x, int y, char ch)
{
    mat[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dy = 2 * (y2 - y1);
    int limit = dy - (x2 - x1);
    for (int x = x1, y = y1; x <= x2; x++)
    {
        SetPoint(x, y, ch);

        limit += dy;
        if (limit >= 0)
        {
            y++;
            limit -= 2 * (x2 - x1);
        }
    }
}

void Canvas::Print()
{
    int i, j;
    for (i = 0; i < this->height; i++)
    {
        for (j = 0; j < this->width; j++)
            cout << mat[i][j]<< " ";
        cout << endl;
    }
}

void Canvas::Clear()
{
    int i, j;
    for (i = 0; i < this->height; i++)
        for (j = 0; j < this->width; j++)
            mat[i][j] = ' ';
}
