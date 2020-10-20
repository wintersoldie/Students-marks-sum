//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum=0;
;
    if(gender==103){
        for(int i=1;i<number_of_students;i=i+2){
            sum+=*(marks+i);
        }
    


  //Write your code here.
return sum;
}
