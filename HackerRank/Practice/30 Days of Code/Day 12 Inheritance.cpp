https://www.hackerrank.com/challenges/30-inheritance/problem?isFullScreen=true






class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> testScore): Person(firstName, lastName, id){
            this -> testScores = testScore;
        }
        /*    
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int media = 0;
            long unsigned int i;
            for (i = 0; i < testScores.size(); i++) {
                media += testScores[i];
            }
            media /= testScores.size();
            if (media >= 90 && media <= 100) return 'O';
            else if (media >= 80 && media < 90) return 'E';
            else if(media >= 70 && media < 80) return 'A';
            else if(media >= 55 && media < 70) return 'P';
            else if (media >= 40 && media < 50) return 'D';
            else return 'T';
        }
};