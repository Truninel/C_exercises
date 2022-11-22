different_ThreeDigitNumbers.c     
Subject :
There are four numbers: 1, 2, 3 and 4. How many different three digit numbers can be formed? What are they?      
Program analysis :
The numbers that can be filled in hundreds, tens and ones are : 1, 2, 3 and 4. After forming all the permutations, remove the unqualified permutations.

bonus.c                                           
Subject:
Bonus paid by enterprises is based on profits.
When the profit (I) is less than or equal to 100000 yuan, the bonus can be increased by 10%;
If the profit is higher than 100000 yuan and lower than 200000 yuan, 10% of the part below 100000 yuan will be entitled to a royalty, and 7.5% of the part above 100000 yuan will be entitled to a royalty;
Between 200000 yuan and 400000 yuan, the part higher than 200000 yuan can be deducted by 5%;
For the part higher than 400000 yuan between 400000 and 600000 yuan, 3% can be deducted;
Between 600000 yuan and 1 million yuan, 1.5% of the portion higher than 600000 yuan can be deducted;
If the amount is more than 1 million yuan, the part exceeding 1 million yuan will be entitled to 1% of the commission.
Enter the profit I of the current month from the keyboard, and calculate the total bonus to be paid?                                       
Program analysis: 
Please use the number axis to divide and locate. Note that the bonus should be defined as double.

Find_PerfectSquareNumber.c             
Subject: An integer is a perfect square after adding 100, and a perfect square after adding 168. What is the number?                                            
Program analysis:
Assume that the number is x.                          
a. Then: x+100=n*n, x+100+168=m*m                   
b. Calculation equation: m*m - n*n=(m+n) (m - n)=168                 
c. Setting: m+n=i, m - n=j, i * j=168, at least one of i and j is even                
d. It can be obtained that: m=(i+j)/2, n=(i - j)/2, i and j are either even or odd.                            
e. It can be inferred from c and d that i and j are even numbers greater than or equal to 2.                         
f. Since i * j=168, j>=2, then 1<i<168/2+1.                         
g. Next, all the numbers of i are calculated circularly.                   

determine_DayOfYear.c            
Subject: Enter the date of the year, and determine the day of the year.    
Program analysis: Take March 5 as an example, we should first add up the previous two months, and then add five days, that is, the day of the year. Under special circumstances, when the leap year and the input month is greater than 3, we need to consider adding one more day.
