1.	#include <iostream>
2.	#include <string>
3.	#include <stdio.h>
4.	#include <cstdlib>
5.	using namespace std;
6.	int main(int argc, char *argv[])
7.	{
	a.	int airplane[13][6];
	b.	char airchar[13][6];
	c.string ticket;
	d.	int row[2];
	e.	char seat;



	8.	//--------------------------------------------
		9.	for (int i = 0; i < 13; i++)
		10.	{
		11.	for (int j = 0; j < 6; j++)
			12.	{
			i.airchar[i][j] = '*';
			b.airplane[i][j] = 0;

			13.	}
		14.	}
	15.	//--------------------------------------------
		16.	for (;;)
		17.	{
		18.	cout << "Rows 1 and 2 are first class (FC)" << endl;
		19.	cout << "Rows 3 through 7 are business class (BC)" << endl;
		20.	cout << "Rows 8 through 13 are economy class (EC)" << endl;
		21.	cout << endl;
		22.	cout << "* - Available" << endl;
		23.	cout << "X - Occupied" << endl;
		24.	cout << endl;

		25.	cout << "     \tA\tB\tC\tD\tE\tF" << endl;
		26.	cout << "Row 1\t" << airchar[0][0] << "\t" << airchar[0][1] << "\t"
			27. << airchar[0][2] << "\t" << airchar[0][3] << "\t" << airchar[0][4] << "\t"
			28. << airchar[0][5] << endl;

		29.	cout << "Row 2\t" << airchar[1][0] << "\t" << airchar[1][1] << "\t"
			30. << airchar[1][2] << "\t" << airchar[1][3] << "\t" << airchar[1][4] << "\t"
			31. << airchar[1][5] << endl;

		32.	cout << "Row 3\t" << airchar[2][0] << "\t" << airchar[2][1] << "\t"
			33. << airchar[2][2] << "\t" << airchar[2][3] << "\t" << airchar[2][4] << "\t"
			34. << airchar[2][5] << endl;

		35.	cout << "Row 4\t" << airchar[3][0] << "\t" << airchar[3][1] << "\t"
			36. << airchar[3][2] << "\t" << airchar[3][3] << "\t" << airchar[3][4] << "\t"
			37. << airchar[3][5] << endl;

		38.	cout << "Row 5\t" << airchar[4][0] << "\t" << airchar[4][1] << "\t"
			39. << airchar[4][2] << "\t" << airchar[4][3] << "\t" << airchar[4][4] << "\t"
			40. << airchar[4][5] << endl;

		41.	cout << "Row 6\t" << airchar[5][0] << "\t" << airchar[5][1] << "\t"
			42. << airchar[5][2] << "\t" << airchar[5][3] << "\t" << airchar[5][4] << "\t"
			43. << airchar[5][5] << endl;

		44.	cout << "Row 7\t" << airchar[6][0] << "\t" << airchar[6][1] << "\t"
			45. << airchar[6][2] << "\t" << airchar[6][3] << "\t" << airchar[6][4] << "\t"
			46. << airchar[6][5] << endl;

		47.	cout << "Row 8\t" << airchar[7][0] << "\t" << airchar[7][1] << "\t"
			48. << airchar[7][2] << "\t" << airchar[7][3] << "\t" << airchar[7][4] << "\t"
			49. << airchar[7][5] << endl;

		50.	cout << "Row 9\t" << airchar[8][0] << "\t" << airchar[8][1] << "\t"
			51. << airchar[8][2] << "\t" << airchar[8][3] << "\t" << airchar[8][4] << "\t"
			52. << airchar[8][5] << endl;

		53.	cout << "Row 10\t" << airchar[9][0] << "\t" << airchar[9][1] << "\t"
			54. << airchar[9][2] << "\t" << airchar[9][3] << "\t" << airchar[9][4] << "\t"
			55. << airchar[9][5] << endl;

		56.	cout << "Row 11\t" << airchar[10][0] << "\t" << airchar[10][1] << "\t"
			57. << airchar[10][2] << "\t" << airchar[10][3] << "\t" << airchar[10][4] << "\t"
			58. << airchar[10][5] << endl;

		59.	cout << "Row 12\t" << airchar[11][0] << "\t" << airchar[11][1] << "\t"
			60. << airchar[11][2] << "\t" << airchar[11][3] << "\t" << airchar[11][4] << "\t"
			61. << airchar[11][5] << endl;

		62.	cout << "Row 13\t" << airchar[12][0] << "\t" << airchar[12][1] << "\t"
			63. << airchar[12][2] << "\t" << airchar[12][3] << "\t" << airchar[12][4] << "\t"
			64. << airchar[12][5] << endl;

		65.	cout << endl;

		66.	cout << "Enter Ticket type (FC, BC, or EC): ";
		67.	cin >> ticket;


		a.cout << "Desired Row: ";
		b.cin >> row[0];

		c.cout << "Desired seat (A,B,C,D,E or F): ";
		d.cin >> seat;



		e.	switch (seat)
			f.	{
			i.	case 'A':
				ii.	case 'a':
					a.row[0] = row[0] - 1;
					iii.row[1] = 1;
					iv.row[1] = row[1] - 1;
					v.	break;

					vi.	case 'B':
						vii.	case 'b':
							1.	row[0] = row[0] - 1;
							viii.row[1] = 2;
							ix.row[1] = row[1] - 1;
							x.	break;

							xi.	case 'C':
								xii.	case 'c':
									1.	row[0] = row[0] - 1;
									xiii.row[1] = 3;
									xiv.row[1] = row[1] - 1;
									xv.	break;

									xvi.	case 'D':
										xvii.	case 'd':
											1.	row[0] = row[0] - 1;
											xviii.row[1] = 4;
											xix.row[1] = row[1] - 1;
											xx.	break;

											xxi.	case 'E':
												xxii.	case 'e':
													1.	row[0] = row[0] - 1;
													xxiii.row[1] = 5;
													xxiv.row[1] = row[1] - 1;
													xxv.	break;

													xxvi.	case 'F':
														xxvii.	case 'f':
															1.	row[0] = row[0] - 1;
															xxviii.row[1] = 6;
															xxix.row[1] = row[1] - 1;
															xxx.	break;

															g.	}


		h.	if (ticket == "FC")
			i.	{
			i.	if (row[0] + 1 == 1 || row[0] + 1 == 2)
				ii.	{

				iii.	if (airplane[row[0]][row[1]] == 0)
					iv.	{
					1.	airplane[row[0]][row[1]] = 1;
					2.	airchar[row[0]][row[1]] = 'X';
					v.	}
				vi.	else if (airplane[row[0]][row[1]] == 1)
					vii.	{
					j.cout << "Message: Seat " << row[0] + 1 << seat << " is already occupied" << endl;
					a.system("Pause");
					ii.	}

				iii.	}
			iv.	else
				v.	{
				a.cout << "Wrong Class" << endl;
				b.system("Pause");
				i.system("cls");
				c.	continue;
				vi.	}

			k.	}
		l.	else if (ticket == "BC")
			m.	{
			i.	if (row[0] + 1 == 3 || row[0] + 1 == 4 || row[0] + 1 == 5
				ii. || row[0] + 1 == 6 || row[0] + 1 == 7)
				iii.	{
				iv.	if (airplane[row[0]][row[1]] == 0)
					v.	{
					1.	airplane[row[0]][row[1]] = 1;
					2.	airchar[row[0]][row[1]] = 'X';
					vi.	}
				vii.	else if (airplane[row[0]][row[1]] == 1)
					viii.	{
					n.cout << "Message: Seat " << row[0] + 1 << seat << " is already occupied" << endl;
					a.system("Pause");
					ii.	}
				iii.	}
			iv.	else
				v.	{
				a.cout << "Wrong Class" << endl;
				b.system("Pause");
				i.system("cls");
				c.	continue;
				vi.	}
			o.	}
		p.	else if (ticket == "EC")
			q.	{
			i.	if (row[0] + 1 == 8 || row[0] + 1 == 9 || row[0] + 1 == 10
				ii. || row[0] + 1 == 11 || row[0] + 1 == 12 || row[0] + 1 == 13)
				iii.	{
				iv.	if (airplane[row[0]][row[1]] == 0)
					v.	{
					1.	airplane[row[0]][row[1]] = 1;
					2.	airchar[row[0]][row[1]] = 'X';
					vi.	}
				vii.	else if (airplane[row[0]][row[1]] == 1)
					viii.	{
					r.cout << "Message: Seat " << row[0] + 1 << seat << " is already occupied" << endl;
					a.system("Pause");
					ii.	}
				iii.	}
			a.	else
				iv.	{
				a.cout << "Wrong Class" << endl;
				b.system("Pause");
				i.system("cls");
				c.	continue;
				v.	}
			68.	}

		i.row[0] = 0;
		69.	row[1] = 0;
		a.system("cls");
		70.	}


	a.	return 0;
	71.	}
