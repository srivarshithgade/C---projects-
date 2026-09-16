/*Project 2 — Smart Electricity Bill Calculator ⚡

Time: ~30 min
Concepts: variables, input/output, arithmetic, if, else if, else, logical conditions.

What it does:
Take:


Units consumed
Whether the customer is a residential/commercial user

Then calculate the electricity bill using slabs.

For example:

0–100 units     → ₹2/unit
101–200         → ₹3.5/unit
201–300         → ₹5/unit
301+            → ₹7/unit

But here's where the logic comes in:

Units <= 100
    → ₹2/unit

Units <= 200
    → first 100 at ₹2
    → remaining at ₹3.5

Units <= 300
    → first 100 at ₹2
    → next 100 at ₹3.5
    → remaining at ₹5

Units > 300
    → first 100 at ₹2
    → next 100 at ₹3.5
    → next 100 at ₹5
    → remaining at ₹7

Then add:

If residential AND units < 100
    → 10% discount

If units > 300
    → ₹50 surcharge

Finally print something like:

========== ELECTRICITY BILL ==========

Customer : Rahul
Units    : 275

Energy Charge : ₹...
Discount      : ₹...
Surcharge     : ₹...

Final Bill    : ₹...

=======================================*/



#include<stdio.h>

int main(){

    int n;
    char type;
    float bill;

    printf("enter the units consumed :");
    scanf("%d",&n);

    printf("enter r for residential or c for commercial :");
    scanf(" %c",&type);


    if(n <= 100){

        bill = n * 2;

    }

    else if(n <= 200){

        bill = (100 * 2) + (n - 100) * 3.5;

    }

    else if(n <= 300){

        bill = (100 * 2) + (100 * 3.5) + (n - 200) * 5;

    }

    else{

        bill = (100 * 2) + (100 * 3.5) + (100 * 5) + (n - 300) * 7;

        bill = bill + 50;

    }


    if(type == 'r' && n <= 100){

        bill = bill - (bill * 0.10);

    }


    printf("\nthe total electricity bill is : %.2f\n",bill);


    if(type == 'r'){

        printf("customer type : residential\n");

    }

    else if(type == 'c'){

        printf("customer type : commercial\n");

    }

    else{

        printf("invalid customer type\n");

    }


    return 0;
}

