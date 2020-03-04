package greedAlgorithm;

public class lemonadeChange {
    public boolean solution_860(int bills[]){
        int ten=0,five=0;
        for (int i=0;i<bills.length;i++){
            if(bills[i]==5)five++;
            else if(bills[i]==10){
                    ten++;
                    if(five!=0)
                        five--;
                    else
                        return false;
            }
            else{
                int t=15;
                if(ten!=0) {
                    t-=10;
                    ten--;
                }
                while(t!=0&&five!=0){
                    five--;
                    t=t-5;
                }
                if(t!=0)return false;

            }
        }
        return true;
    }

}
