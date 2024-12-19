    #include<iostream>
    #include<vector>
    using namespace std;

    //deletion at the middle

    class node{
        public:
        int data;
        node * prev;
        node * next;

        node(int value){
            this->data = value;
            prev = NULL;
            next = NULL;
        }

    };

    int main(){

        node * head = NULL;

        int arr[10] = {2,2,2,2,3,3,3,4,4,5};

        for (int i = 9 ; i >= 0 ;i--){

            if(head == NULL){
                head = new node(arr[i]);
            }
            else{
                node * temp = new node(arr[i]);
                head->prev = temp;
                temp->next = head;
                head = temp;
                
            }
        }

        cout<<"before array : "<<endl;

        //traverse 
        node * traverse = head;
        while(traverse){
            cout<<traverse->data<<" ";
            traverse = traverse->next;
        }


        vector<int>ans;
        ans.push_back(head->data);
        int i = 0;
        node * curr = head;

        while(curr->next){
            curr = curr->next;
            if(ans[i] != curr->data){
                ans.push_back(curr->data);
                i++;
            }
            
        }

        curr = head;
        int index = 0 ;

        while(index<ans.size()){
            curr->data = ans[index];
            index++;
            curr = curr->next;
        }
        curr->prev->next = NULL;


        cout<<endl<<"after array : "<<endl;

        //traverse 
        traverse = head;
        while(traverse){
            cout<<traverse->data<<" ";
            traverse = traverse->next;
        }


    }   