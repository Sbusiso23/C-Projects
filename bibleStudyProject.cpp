/************************************************************************************
 * Author: SGT Mthimunye                                                            *
 * Date: 05-Dec-19 22h08                                                            *
 * Create a program using LinkedList DS that will contain list of fruitage of       *
 *  of spirit, qualities mentioned in Gal 5:22,23. The program should:              *
 *       1. Contain in an array names of praticipants                               *
 *       2. Randomly assign a quality from the LinkedList to the participants       *
 *       3. Participants are to create a 15-20min talk based on the quality they    *
 *           received. You may choose to save their talks as part of the program    *
 *       4. After a quality is assigned, the LinkedList is supposed to remove that  *
 *           quality from the list. This will happen until qualities are finished.  *
 *                                                                                  *
 *             ALL THE BEST !!!                                                     *
 ************************************************************************************/



/*
        "On the other hand, the fruitage of the spirit is LOVE, JOY, PEACE, PATIENCE, KINDNESS,
           GOODNESS, FAITH, MILDNESS, SELF-CONTROL."//Galatians 5:22,23
*/

#include "Database/LinkedList/string/LinkedList.cpp"
#include <cstdlib>
#include <ctime>



int main()
{
    
    srand(time(0));

    string participants[] = {"Sibusiso Mthimunye","Sisa Njiva","Sandile Ngwenya"};
    int PLAYERS = 3;


    LinkedList* qualities = new LinkedList();
    qualities->addAtFront("LOVE");
    qualities->addAtFront("JOY");
    qualities->addAtFront("PEACE");
    qualities->addAtFront("PATIENCE");
    qualities->addAtFront("KINDNESS");
    qualities->addAtFront("GOODNESS");
    qualities->addAtFront("FAITH");
    qualities->addAtFront("MILDNESS");
    qualities->addAtFront("SELF-CONTROL");
    qualities->addAtFront("OBEDIENCE");
    qualities->addAtFront("LOYALTY");
    qualities->addAtFront("ENDURANCE");

   qualities->display();
   bool shallWe = true;
   
    cout<<"Welcome to bible research project ! ! !"<<endl;
    cout<<"Here are list of participants of the project: "<<endl;

    for(int x = 0; x < PLAYERS; x++){
        cout<<x+1<<". "<<participants[x]<<"\n\n";
    }

    int qual_index;

    for(int x = 0; x < PLAYERS; x++){
        cout<<"Fruit of the spirit for "<<participants[x]<<endl;
        qual_index = (rand() % (1 - qualities->getListCount()));
        cout<<qualities->getNodeItem(qual_index)<<"\n\n";
        qualities->removeNode(qual_index);

    }

    
   qualities->display();

    
    
    return 0;
}