#pragma once
// Dustin Peters
// 2/27/17
//c++ ch 9 program string reverse

#ifndef STACK_H
#define STACK_H

namespace reverse
{
	template<class r>
	class reversestring
	{
	public:
			reversestring(r theData, reversestring<r>* theLink) : data(theData), link(theLink){}
			reversestring<r>* getLink() const { return link; }
			const r getData() const { return data; }
void setData(const r& theData) { data = theData; }
void setLink(reversestring<r>* pointer) { link = pointer; }
	private:
		r data;
		reversestring<r> *link;

	};
	template<class r>
	class stack
	{
	public:
		stack();
		stack(const stack<r>& astack);
		stack<r>& operator =(const stack<r>& rightSide);
		virtual ~stack();
		void push(r stackFrame);

		r pop();
		bool isEmpty() const;
	private:
		reversestring<r> *top;
	};
}

#endif
