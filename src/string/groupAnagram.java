package string;

import java.awt.image.ImageProducer;
import java.util.*;

public class groupAnagram {
    static String sortString(String s){
        char[] str=s.toCharArray();
        Arrays.sort(str);
        return  String.valueOf(str);
    }
    public List<List<String>> solution_49(String[] strs){

        HashMap<String,List> hash=new HashMap<>();

        for(String  s : strs ){
            String temp = s;
            s=sortString(s);
            if(!hash.containsKey(s))
                hash.put(s,new ArrayList());
            hash.get(s).add(temp);
        }

        return new ArrayList(hash.values());
    }
}
