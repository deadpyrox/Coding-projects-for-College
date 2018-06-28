#include <iostream>
#include <cstdlib>
#include "PEters c++ chapter 9 header.h"
#pragma warning(disable: 4996)
using std::cout;


namespace reverse
{
	template<class r>
	stack<r>::stack() : top(nullptr)
	{

	}
	template <class r>
	stack<r>::stack(const stack<r>& astack)
	{
		if (astack.isEmpty())
			top = nullptr;
		else
		{
			reversestring<r> *temp = astack.top;
			reversestring<r> *end;
			end = new reversestring<r>(temp->getData(), nullptr);
			top = end;
			temp = temp->getLink();
			while (temp != nullptr)
			{
				end->setLink(
					new reversestring<r>(temp->getData(), nullptr));
				temp = temp->getLink();
				end = end->getLink();
			}
			//end->link == nullptr;
		}
		template<class r>
		stack<r>& stack<r>::operator =(const stack<r>& rightSide)
		{
			if (top == rightSide.top)
				return *this;
			else
			{
				r next;
				while (! isEmpty())
					next = pop();
			}
			if (rightSide.isEmpty())
			{
				top = nullptr;
				return *this;
			}
			else 
			{
				reversestring<r> *temp = rightSide.top;
				reversestring<r> *end;
				end = new reversestring<r>(temp->getData(), nullptr);
				top = end;;
				temp = temp->getLink();
				while (temp != nullptr)
				{
					end->setLink(
						new reversestring<r>(temp->getData(), nullptr));
					temp = temp->getLink();
					end = end->getLink();
				}
				//end->link == nullptr;
				return *this;
			}
			template<class r>
			stack<r>::~stack()
			{
				r next;
				while (! isEmpty())
					next = pop();
		}
			template<class r>
			bool stack<r>::isEmpty() const
			{
				return (top == nullptr);
					
			}
			template<class r>
			void stack<r>::push(r stackFrame)
			{
				top = new reversestring<r>(stackFrame, top);
			}
				template<class r>
			r stack<r>::pop()
			{
				if (isEmpty())
				{
					cout << "Error: popping an empty stack, \n";
					exit(1);
				}
				r result = top->getData();
				reversestring<r> *discard;
				discard = top;
				top = top->getLink();
				delete discard;
				return result;
			}

		}
	}

}