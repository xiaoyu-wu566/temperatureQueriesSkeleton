#include "TemperatureDatabase.h"

#include <iostream>
using namespace std;

//int main(int argc, char** argv) {
//    if (argc < 2) {
//        cout << "Usage: " << argv[0] << " data_file query_file" << endl;
//        return 1;
//    } else {
//        TemperatureDatabase database;
//        database.loadData(argv[1]);
//        //database.performQuery(argv[2]); // Will be done in Part 2
//    }
//}

int main() {
    
        TemperatureDatabase database;
        database.loadData("/Users/xiaoyuwu/Downloads/TemperatureQueriesSkeleton/temps-3lines.dat");
        //database.performQuery(argv[2]); // Will be done in Part 2
    
}

//int main()
//{
//    LinkedList ll;
//
//    ll.insert("mac", 2015, 7, 22.3);
//
//    ll.insert("mac", 2011, 6, 18.5);
//
//    ll.insert("mac", 2015, 5, 19.2);
//
//    ll.insert("zeb", 1995, 2, 5);
//
//    cout << "ll: " << ll.print();
//    LinkedList t;
//    t = ll;
//    cout << "t: " << t.print();
//
//    LinkedList w(ll);
//    cout << "w: " << w;

    
    
//    cout << (ll.print()=="mac 2011 6 18.5\nmac 2015 5 19.2\nmac 2015 7 22.3\nzeb 1995 2 5\n") << endl;
//    
//    stringstream ss;
//    ss << ll;
//    ASSERT_EQ(ss.str(),"mac 2011 6 18.5\nmac 2015 5 19.2\nmac 2015 7 22.3\nzeb 1995 2 5\n");

    
//    //insert into empty list
//    ll.insert("mac", 2015, 7, 22.3);
//    cout << (ll.getHead() != nullptr) << endl;
//
////    ASSERT_NE(ll.getHead(),nullptr);
////
//    Node* node = ll.getHead();
//    cout << (node->data.id == "mac") << endl;
//    cout << (node->data.year == 2015) << endl;
//    cout << (node->data.month==7) << endl;
//    cout << (node->data.temperature==22.3) << endl;
////
////    // insert new Head
//    ll.insert("abe", 2017, 6, 18.5);
////
//    node = ll.getHead();
//    cout << (node->data.id=="abe") << endl;
//    cout << "head id: " << node->data.id << endl;
//    cout << (node->data.year==2017) << endl;
//    cout << (node->data.month==6) << endl;
//    cout << (node->data.temperature==18.5) << endl;
//
//    node=node->next; // and tail
//    ASSERT_NE(node,nullptr);
//    ASSERT_EQ(node->data.id,"mac");
//    ASSERT_EQ(node->data.year,2015);
//    ASSERT_EQ(node->data.month,7);
//    ASSERT_EQ(node->data.temperature,22.3);
//
//
//    // insert in middle
//    ll.insert("kev", 2013, 5, 19.2);
//
//    node=ll.getHead();
//    ASSERT_EQ(node->data.id,"abe");
//    ASSERT_EQ(node->data.year,2017);
//    ASSERT_EQ(node->data.month,6);
//    ASSERT_EQ(node->data.temperature,18.5);
//
//    node = node->next;
//    ASSERT_NE(node,nullptr);
//    ASSERT_EQ(node->data.id,"kev");
//    ASSERT_EQ(node->data.year,2013);
//    ASSERT_EQ(node->data.month,5);
//    ASSERT_EQ(node->data.temperature,19.2);
//
//    node=node->next; // and tail
//    ASSERT_NE(node,nullptr);
//    ASSERT_EQ(node->data.id,"mac");
//    ASSERT_EQ(node->data.year,2015);
//    ASSERT_EQ(node->data.month,7);
//    ASSERT_EQ(node->data.temperature,22.3);
//
//    // insert in middle
//    ll.insert("zeb", 1995, 2, 5);
//
//    node=ll.getHead();
//    ASSERT_EQ(node->data.id,"abe");
//    ASSERT_EQ(node->data.year,2017);
//    ASSERT_EQ(node->data.month,6);
//    ASSERT_EQ(node->data.temperature,18.5);
//
//    node = node->next;
//    ASSERT_NE(node,nullptr);
//    ASSERT_EQ(node->data.id,"kev");
//    ASSERT_EQ(node->data.year,2013);
//    ASSERT_EQ(node->data.month,5);
//    ASSERT_EQ(node->data.temperature,19.2);
//
//    node=node->next; // and tail
//    ASSERT_NE(node,nullptr);
//    ASSERT_EQ(node->data.id,"mac");
//    ASSERT_EQ(node->data.year,2015);
//    ASSERT_EQ(node->data.month,7);
//    ASSERT_EQ(node->data.temperature,22.3);
//
//    node=node->next; // and tail
//    ASSERT_NE(node,nullptr);
//    ASSERT_EQ(node->data.id,"zeb");
//    ASSERT_EQ(node->data.year,1995);
//    ASSERT_EQ(node->data.month,2);
//    ASSERT_EQ(node->data.temperature,5);
//}
