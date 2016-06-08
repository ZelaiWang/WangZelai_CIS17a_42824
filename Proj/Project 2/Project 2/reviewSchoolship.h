
#include "student.h"
#include "grade.h"

class ReviewSchoolship
{
public:
	ReviewSchoolship(){}
	ReviewSchoolship(string number, double totalCredit, double examCredit,
		double comprehensiveCredit,double addCredit) :
		number(number), totalCredit(totalCredit), examCredit(examCredit),
		comprehensiveCredit(comprehensiveCredit), addCredit(addCredit){}
	~ReviewSchoolship(){}
	void EnterCredits(Student su, Grade gd);       // 录入分数
	void Sort();               // 排序
	void PrintSchoolship();    // 打印奖学金信息
private:
	string number;             // 学号
	double totalCredit;        // 总成绩
	double examCredit;         // 考试成绩得分
	double comprehensiveCredit;// 综合测评得分
	double addCredit;          // 加分
	vector<ReviewSchoolship *> schoolship;
};