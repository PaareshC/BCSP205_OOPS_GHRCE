/*
An election is contested by five candidates. 
The candidates are numbered 1 to 5 and the 
voting is done by marking the candidate number 
on the ballot papers. Write a program to read the 
ballots and count the votes cast for each candidate
 member variable count. In case, a number read is 
 outside the range 1 to 5, that ballot should be 
 considered as a 'spoilt ballot', and the program s
 hould also count the number of spoilt ballots
 */
 #include <iostream>
using namespace std;
class Candidate{
    public:
    int candidate_number,votes;
    Candidate(int num){
        candidate_number=num;
        votes=0;// Initially VOtes are Zero
    }
};
int main(){
    static int invalid_votes=0;
    Candidate c1(1),c2(2),c3(3),c4(4),c5(5);
    cout<<endl<<"       Welcome to ELECTION BUDDY"<<endl<<"Remember Only Ballot Number 1,2,3,4,5 are valid "<<endl<<"       All Other INTEGERS are INVALID"<<endl<<"       There are total 15 VOTES"<<endl<<endl<<"********LET THE VOTING BEGIN********"<<endl<<endl<<endl;
    int votes[15];
    for(int i=0;i<15;i++){
        cout<<"Vote Number "<<i+1<<" : ";
        cin>>votes[i];
    }
    for(int i=0;i<15;i++){
        if(votes[i]<1 || votes[i]>5){
            invalid_votes++;
        }
        else{
            switch(votes[i]){
                case 1:
                c1.votes++;
                break;
                case 2:
                c2.votes++;
                break;
                case 3:
                c3.votes++;
                break;
                case 4:
                c4.votes++;
                break;
                case 5:
                c5.votes++;
                break;
            }
        }
    }
    cout<<endl<<"Votes for Candidate 1 are "<<c1.votes;
    cout<<endl<<"Votes for Candidate 2 are "<<c2.votes;
    cout<<endl<<"Votes for Candidate 3 are "<<c3.votes;
    cout<<endl<<"Votes for Candidate 4 are "<<c4.votes;
    cout<<endl<<"Votes for Candidate 5 are "<<c5.votes;
    cout<<endl<<"Invalid Votes are "<<invalid_votes;
    return 0;
}
