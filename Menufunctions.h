void SearchByName(vector<ToDoList> lists){
    string name;
    cout << "Enter Name : " ; getline(cin,name);
    for(int i = 0 ; i < lists.size() ; i++){
        if(lists[i].getName() == name){
            cout << "ToDoList name : " << lists[i].getName() << endl;
            for(Task dbTask : lists[i].getTasks()) {
                cout << "Task name : " << dbTask.getName() << endl;
                if(dbTask.getDescription() != "") cout << "Task Description : " << dbTask.getDescription() << endl;
                cout << "Task Priority : " <<  PriorityToString(dbTask.getPriority()) << endl;
            }
        }
    }
}

void SearchByTask(vector<ToDoList> lists){
    string task;
    cout << "Enter Task : " ; getline(cin,task);
    for(int i = 0 ; i < lists.size() ; i++){
        for(Task dbTask : lists[i].getTasks()) {
            if(dbTask.getName() == task){
                cout << "ToDoList name : " << lists[i].getName() << endl;
                cout << "Task name : " << dbTask.getName() << endl;
                if(dbTask.getDescription() != "") cout << "Task Description : " << dbTask.getDescription() << endl;
                cout << "Task Priority : " <<  PriorityToString(dbTask.getPriority()) << endl;
            }
        }
    }
}

void SearchByPriority(vector<ToDoList> lists){
    string priority;
    cout << "Enter Priority : " ; getline(cin,priority);
    for(int i = 0 ; i < lists.size() ; i++){
        for(Task dbTask : lists[i].getTasks()) {
            if(PriorityToString(dbTask.getPriority()) == priority){
                cout << "ToDoList name : " << lists[i].getName() << endl;
                cout << "Task name : " << dbTask.getName() << endl;
                if(dbTask.getDescription() != "") cout << "Task Description : " << dbTask.getDescription() << endl;
                cout << "Task Priority : " <<  PriorityToString(dbTask.getPriority()) << endl;
            }
        }
    }
}

void ToDoListDelete(vector<ToDoList> lists){
    string name;
    cout << "Enter ToDoList Name : " ; getline(cin,name);
    for(int i = 0 ; i < lists.size() ; i++){
        if(lists[i].getName() == name){
            lists.erase(lists.begin() + i);
            cout << "ToDoList Deleted." << endl;
        }
    }
}

void ToDoListClear(vector<ToDoList> lists){
    lists.clear();
    cout << "All ToDoLists Cleared." << endl;
}

